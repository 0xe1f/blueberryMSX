RGBClient
===
RGBClient is a small program and an accompanying protocol that can be used
to stream small (~100KiB) chunks of bitmap data to a Raspberry Pi and display
it on attached LED panels. The protocol is lossless and uncompressed.

Client connects to a server, obtains basic information about each frame and 
begins rendering streamed content as soon as a complete frame is available. 
This behavior ensures that the client runs at about the same FPS as the server.
Size of each frame is provided upon connecting; source and destination geometry
are provided via the command line.

Over an ethernet connection, RGBClient is able to sustain a fairly solid
60 frames per second for bitmaps around 512x224 in size.

RGBClient is built on top of the
[rpi-rgb-led-matrix](https://github.com/hzeller/rpi-rgb-led-matrix)
library and supports all of its command line arguments.

## Protocol Overview

![Img](../doc/rgbc-protocol.png)

## Command line arguments

Usage:

```
rgbclient host_ip [options]
```

| Argument | Purpose |
|---|---|
| `--port=xxxx` | Destination port. Default is 3500 |
| `--src-rect=l,t-r,b` | Source rectangle |
| `--dest-rect=l,t-r,b` | Destination rectangle |
| `--retry-count=xx` | Number of times to retry connecting to server |
| `--retry-delay=xx` | Delay between reconnection attempts, in milliseconds |
| `--sfps` | Display server FPS - frequency at which data is received from the server|

Rectangles are specified as `left,top-right,bottom`. `left` and `top` are
inclusive; `right` and `bottom` are exclusive. Source rectangle is given
in terms of the bitmap provided by the server; destination rectangle
in terms of the LED geometry.

In addition to its own command line arguments, rgbclient accepts arguments
defined by
[rpi-rgb-led-matrix](https://github.com/hzeller/rpi-rgb-led-matrix?tab=readme-ov-file#changing-parameters-via-command-line-flags), 
**some of which are required** to allow the library to
establish an accurate panel geometry.

## License

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
