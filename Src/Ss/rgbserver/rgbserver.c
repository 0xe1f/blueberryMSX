/*
   RGBClient
   Copyright 2024, Akop Karapetyan

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#include <arpa/inet.h>
#include <fcntl.h>
#include <netdb.h>
#include <netinet/in.h>
#include <poll.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>

#include "rgbcommon.h"

#define PORT "3500"
#define CLIENT_COUNT_MAX 5

static int sockfd = -1;
static int clientfd_count = 0;
static const int clientfd_size = CLIENT_COUNT_MAX;
static int clientfds[CLIENT_COUNT_MAX];
static struct pollfd pfd;

static unsigned char data_set = 0;
static struct FrameGeometry data;

static int write_preamble(int clientfd)
{
    fprintf(stderr, "write_preamble()...\n");

    int w = write(clientfd, &data, sizeof(data));
    if (w != sizeof(data)) {
        fprintf(stderr, "Error writing data (wrote %d bytes)\n", w);
        return 0;
    }

    return 1;
}

int rgbs_poll()
{
    if (sockfd == -1) {
        fprintf(stderr, "sockfd not set\n");
        return 0;
    }

    int poll_count = poll(&pfd, 1, 0);
    if (poll_count == -1) {
        fprintf(stderr, "poll() failed\n");
        return 0;
    }

    static socklen_t addrlen;
    static struct sockaddr_in remoteaddr;
    static int newfd;

    if (poll_count > 0 && pfd.events & POLLIN) {
        addrlen = sizeof(remoteaddr);
        newfd = accept(sockfd, (struct sockaddr *)&remoteaddr, &addrlen);
        if (newfd == -1) {
            fprintf(stderr, "accept() failed\n");
            return 0;
        } else if (clientfd_count + 1 < clientfd_size) {
            fprintf(stderr, "New connection from '%s'\n",
                inet_ntoa(remoteaddr.sin_addr));
            write_preamble(newfd);
            clientfds[clientfd_count++] = newfd;
        } else {
            fprintf(stderr, "Ignoring new connection; maxed out\n");
        }
    }

    return 1;
}

int rgbs_start()
{
    fprintf(stderr, "rgbs_start()\n");
    
    if (sockfd != -1) {
        fprintf(stderr, "socket already open\n");
        return 0;
    }

    struct addrinfo hints, *ai, *p;

    // Get us a socket and bind it
    memset(&hints, 0, sizeof(hints));
    hints.ai_family = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags = AI_PASSIVE;

    int rv;
    int yes = 1;
    if ((rv = getaddrinfo(NULL, PORT, &hints, &ai)) != 0) {
        fprintf(stderr, "getaddrinfo() failed: %s\n", gai_strerror(rv));
        return 0;
    }

    for (p = ai; p != NULL; p = p->ai_next) {
        sockfd = socket(p->ai_family, p->ai_socktype, p->ai_protocol);
        if (sockfd < 0) {
            continue;
        }

        setsockopt(sockfd, SOL_SOCKET, SO_REUSEADDR, &yes, sizeof(int));
        if (bind(sockfd, p->ai_addr, p->ai_addrlen) < 0) {
            close(sockfd);
            continue;
        }
        break;
    }

    if (p == NULL) {
        fprintf(stderr, "bind() failed\n");
        close(sockfd);
        sockfd = -1;
        return 0;
    }

    freeaddrinfo(ai);
    if (listen(sockfd, 10) == -1) {
        fprintf(stderr, "listen() failed\n");
        close(sockfd);
        sockfd = -1;
        return 0;
    }

    pfd.fd = sockfd;
    pfd.events = POLLIN;

    return 1;
}

void rgbs_end()
{
    fprintf(stderr, "rgbs_end()\n");

    fprintf(stderr, "Closing client sockets...\n");
    for (int i = 0; i < clientfd_count; i++) {
        close(clientfds[i]);
    }
    clientfd_count = 0;
    if (sockfd != -1) {
        fprintf(stderr, "Closing server socket\n");
        close(sockfd);
        sockfd = -1;
    }
}

void rgbs_set_buffer_data(struct FrameGeometry src)
{
    data = src;
    data_set = 1;
}

int rgbs_send(const unsigned char *buffer, int size)
{
    if (data.buffer_size != size) {
        fprintf(stderr, "Buffer size mismatch (%d <> %d)\n", data.buffer_size, size);
        return 0;
    }
    for (int i = 0; i < clientfd_count; i++) {
        int w = write(clientfds[i], buffer, size);
        if (w <= 0) {
            fprintf(stderr, "Client %d disconnected\n", i);
            close(clientfds[i]);
            clientfds[i--] = clientfds[--clientfd_count];
        }
    }
    return 1;
}
