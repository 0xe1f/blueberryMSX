/*****************************************************************************
** $Source: /cygdrive/d/Private/_SVNROOT/bluemsx/blueMSX/Src/Language/LanguagePortuguese.h,v $
**
** $Revision: 1.63 $
**
** $Date: 2009-04-04 20:57:19 $
**
** More info: http://www.bluemsx.com
**
** Copyright (C) 2003-2006 Daniel Vik
**
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation; either version 2 of the License, or
** (at your option) any later version.
** 
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
**
******************************************************************************
*/
#ifndef LANGUAGE_PORTUGUESE_H
#define LANGUAGE_PORTUGUESE_H

#include "LanguageStrings.h"

void langInitPortuguese(LanguageStrings* ls) 
{
    //----------------------
    // Language lines
    //----------------------

    ls->langCatalan             = "Catalan";
    ls->langChineseSimplified   = "Chin�s simplificado";
    ls->langChineseTraditional  = "Chin�s tradicional";
    ls->langDutch               = "Holand�s";
    ls->langEnglish             = "Ingl�s";
    ls->langFinnish             = "Finland�s";
    ls->langFrench              = "Franc�s";
    ls->langGerman              = "Alem�o";
    ls->langItalian             = "Italiano";
    ls->langJapanese            = "Japon�s";
    ls->langKorean              = "Coreano";
    ls->langPolish              = "Polaco";
    ls->langPortuguese          = "Portugu�s";
    ls->langRussian             = "Russian";            // v2.8
    ls->langSpanish             = "Espanhol";
    ls->langSwedish             = "Sueco";


    //----------------------
    // Generic lines
    //----------------------

    ls->textDevice              = "Tipo:"; 
    ls->textFilename            = "Nome:"; 
    ls->textFile                = "Arquivo"; 
    ls->textNone                = "Nenhum"; 
    ls->textUnknown             = "Desconhecido";                            


    //----------------------
    // Warning and Error lines
    //----------------------

    ls->warningTitle             = "blueMSX - Advert�ncia";
    ls->warningDiscardChanges   = "Voc� quer desfazer as altera��es da configura��o atual?"; 
    ls->warningOverwriteFile    = "Voc� quer substituir esto arquivo? "; 
    ls->errorTitle              = "blueMSX - Erro";
    ls->errorEnterFullscreen    = "Falha ao entrar em Tela Cheia.             \n";
    ls->errorDirectXFailed      = "Falha ao Criar Objetos DirectX.             \nUsando GDI ao inv�s.\nCheque as propriedades Video.";
    ls->errorNoRomInZip         = "Nao foi localizado arquivo .ROM dentro do arquivo zip.";
    ls->errorNoDskInZip         = "Nao foi localizado arquivo .DSK dentro do arquivo zip.";
    ls->errorNoCasInZip         = "Nao foi localizado arquivo .CAS dentro do arquivo zip.";
    ls->errorNoHelp             = "Nao foi localizado arquivo ajuda do blueMSX";
    ls->errorStartEmu           = "Falha ao Iniciar o emulador MSX.";
    ls->errorPortableReadonly   = "O dispositivo port�til � somente leitura";        


    //----------------------
    // File related lines
    //----------------------

    ls->fileRom                 = "ROM image"; 
    ls->fileAll                 = "Todos os arquivos"; 
    ls->fileCpuState            = "Status da CPU"; 
    ls->fileVideoCapture        = "Captura v�deo"; 
    ls->fileDisk                = "Disk Image"; 
    ls->fileCas                 = "Tape Image"; 
    ls->fileAvi                 = "Video Clip";    


    //----------------------
    // Menu related lines
    //----------------------

    ls->menuNoRecentFiles       = "- Sem Arquivos Recentes -";
    ls->menuInsert              = "Inserir";
    ls->menuEject               = "Ejetar";

    ls->menuCartGameReader      = "Game Reader";                        
    ls->menuCartIde             = "IDE";                                
    ls->menuCartBeerIde         = "Beer";                               
    ls->menuCartGIde            = "GIDE";                               
    ls->menuCartSunriseIde      = "Sunrise";                              
    ls->menuCartScsi            = "SCSI";                // New in 2.7
    ls->menuCartMegaSCSI        = "MEGA-SCSI";           // New in 2.7
    ls->menuCartWaveSCSI        = "WAVE-SCSI";           // New in 2.7
    ls->menuCartGoudaSCSI       = "Gouda SCSI";          // New in 2.7
    ls->menuJoyrexPsg           = "Cartucho Joyrex PSG"; // New in 2.9
    ls->menuCartSCC             = "Cartucho SCC";
    ls->menuCartSCCPlus         = "Cartucho SCC-I";
    ls->menuCartFMPac           = "Cartucho FM-PAC";
    ls->menuCartPac             = "Cartucho PAC";
    ls->menuCartHBI55           = "Cartucho Sony HBI-55"; 
    ls->menuCartInsertSpecial   = "Inserir Especial";                     
    ls->menuCartMegaRam         = "MegaRAM";                            
    ls->menuCartExternalRam     = "RAM Externo";
    ls->menuCartEseRam          = "Ese-RAM";             // New in 2.7
    ls->menuCartEseSCC          = "Ese-SCC";             // New in 2.7
    ls->menuCartMegaFlashRom    = "Mega Flash ROM";      // New in 2.7

    ls->menuDiskInsertNew       = "Inserir novo disco";              
    ls->menuDiskInsertCdrom     = "Inserir CD-Rom";       // New in 2.7
    ls->menuDiskDirInsert       = "Inserir diret�rio"; 
    ls->menuDiskAutoStart       = "Reset ap�s inserir";
    ls->menuCartAutoReset       = "Reset ap�s inserir/remover";
    
    ls->menuCasRewindAfterInsert = "Rebobinar ap�s inserir";
    ls->menuCasUseReadOnly       = "Usar fita cassete somente para leitura";
    ls->lmenuCasSaveAs           = "Salvar imagem da fita cassete como...";
    ls->menuCasSetPosition      = "Ajustar Posi��o";
    ls->menuCasRewind           = "Rebobinar";

    ls->menuVideoLoad           = "Carregar...";             
    ls->menuVideoPlay           = "Visualizar captura mais recente";   
    ls->menuVideoRecord         = "Salvar";              
    ls->menuVideoRecording      = "Salvar em curso";           
    ls->menuVideoRecAppend      = "Salvar (adicionar)";     
    ls->menuVideoStop           = "Parar";                
    ls->menuVideoRender         = "Criar video clip";   

    ls->menuPrnFormfeed         = "P�gina seguinte"; 

    ls->menuZoomNormal          = "Tamanho Pequeno";
    ls->menuZoomDouble          = "Tamanho Normal";
    ls->menuZoomFullscreen      = "Tela Cheia";
    
    ls->menuPropsEmulation      = "Emula��o";
    ls->menuPropsVideo          = "V�deo";
    ls->menuPropsSound          = "Som";
    ls->menuPropsControls       = "Controles";
    ls->menuPropsEffects        = "Effects";               // New in 2.9
    ls->menuPropsSettings       = "Ajustes";
    ls->menuPropsFile           = "Arquivo"; 
    ls->menuPropsDisk           = "Discos";               // New in 2.7
    ls->menuPropsLanguage       = "Linguagem";
    ls->menuPropsPorts          = "Portas"; 
    
    ls->menuVideoSource         = "Fonte de v�deo";                   
    ls->menuVideoSourceDefault  = "Fonte de v�deo n�o conectada";      
    ls->menuVideoInSource       = "Entrada de v�deo";                    
    ls->menuVideoInBitmap       = "Arquivo Bitmap";                        
    ls->menuVideoChipAutodetect = "Detec��o autom�tica"; 
    
    ls->menuEthInterface        = "Ethernet"; 

    ls->menuHelpHelp            = "T�picos Ajuda";
    ls->menuHelpAbout           = "Sobre o blueMSX";

    ls->menuFileCart            = "Cartucho Slot";
    ls->menuFileDisk            = "Disco drive";
    ls->menuFileCas             = "Fita Cassete";
    ls->menuFilePrn             = "Impressora"; 
    ls->menuFileLoadState       = "Carregar Status da CPU";
    ls->menuFileSaveState       = "Salvar Status da CPU";
    ls->menuFileQLoadState      = "Carregar r�pido Status";
    ls->menuFileQSaveState      = "Salvar r�pido Status";
    ls->menuFileCaptureAudio    = "Capturar audio";
    ls->menuFileCaptureVideo    = "Capturar v�deo"; 
    ls->menuFileScreenShot      = "Salvar Tela";
    ls->menuFileExit            = "Sair";

    ls->menuFileHarddisk        = "Disco R�gido";                          
    ls->menuFileHarddiskNoPesent= "N�o h� controladores";             
    ls->menuFileHarddiskRemoveAll= "Ejetar todos os discos duros";    // New in 2.7

    ls->menuRunRun              = "Executar";
    ls->menuRunPause            = "Pausa";
    ls->menuRunStop             = "Parar";
    ls->menuRunSoftReset        = "Reset Software";
    ls->menuRunHardReset        = "Reset Hardware";
    ls->menuRunCleanReset       = "Reset Completo";

    ls->menuToolsMachine        = "Configura��o da M�quina";
    ls->menuToolsShortcuts      = "Configura��o de Atalhos";
    ls->menuToolsCtrlEditor     = "Configura��o de Controladores/Teclado";  
    ls->menuToolsMixer          = "Mixer de Audio"; 
    ls->menuToolsLoadMemory     = "Mem�ria de carga";
    ls->menuToolsDebugger       = "Debugger";               
    ls->menuToolsTrainer        = "Trainer";                
    ls->menuToolsTraceLogger    = "Trace Logger";           

    ls->menuFile                = "Arquivo";
    ls->menuRun                 = "Emula��o";
    ls->menuWindow              = "Janela";
    ls->menuOptions             = "Op��es";
    ls->menuTools                = "Ferramentas";
    ls->menuHelp                = "Ajuda";


    //----------------------
    // Dialog related lines
    //----------------------

    ls->dlgOK                   = "OK";
    ls->dlgOpen                 = "Abrir";
    ls->dlgCancel               = "Cancelar";
    ls->dlgSave                 = "Salvar";
    ls->dlgSaveAs               = "Salvar Como";
    ls->dlgRun                  = "Executar";
    ls->dlgClose                = "Fechar";

    ls->dlgLoadRom              = "blueMSX - Selecione uma ROM para carregar";
    ls->dlgLoadDsk              = "blueMSX - Selecione uma DSK para carregar";
    ls->dlgLoadCas              = "blueMSX - Selecione uma CAS para carregar";
    ls->dlgLoadRomDskCas        = "blueMSX - Selecione uma ROM, DSK, ou CAS para carregar";
    ls->dlgLoadRomDesc          = "Escolha uma ROM para carregar:";
    ls->dlgLoadDskDesc          = "Escolha um disco para carregar:";
    ls->dlgLoadCasDesc          = "Escolha um tape para carregar:";
    ls->dlgLoadRomDskCasDesc    = "Escolha uma ROM, disco, ou tape para carregar:";
    ls->dlgLoadState            = "Carregar Status da CPU";
    ls->dlgLoadVideoCapture     = "Carregar captura v�deo";      
    ls->dlgSaveState            = "Salvar Status da CPU";
    ls->dlgSaveCassette          = "blueMSX - Salvar Imagem Tape";
    ls->dlgSaveVideoClipAs      = "Salvar video clip como...";      
    ls->dlgAmountCompleted      = "Salvar em curso:";          
    ls->dlgInsertRom1           = "Insira cartucho ROM no slot 1";
    ls->dlgInsertRom2           = "Insira cartucho ROM no slot 2";
    ls->dlgInsertDiskA          = "Insira disco no drive A";
    ls->dlgInsertDiskB          = "Insira disco no drive B";
    ls->dlgInsertCas            = "Insira cassette tape";
    ls->dlgInsertHarddisk       = "Insira disco duro";                   
    ls->dlgRomType              = "Tipo rom:"; 
    ls->dlgDiskSize             = "Tamanho do disco:";             

    ls->dlgTapeTitle            = "blueMSX - Posi��o do Tape";
    ls->dlgTapeFrameText        = "Posi��o do Tape";
    ls->dlgTapeCurrentPos       = "Posi��o Atual";
    ls->dlgTapeTotalTime        = "Tempo Total";
    ls->dlgTapeCustom            = "Mostrar Arquivos Personalizados";
    ls->dlgTapeSetPosText        = "Posi��o do Cassete:";
    ls->dlgTabPosition           = "Posi��o";
    ls->dlgTabType               = "Tipo";
    ls->dlgTabFilename           = "Nome do Arquivo";
    ls->dlgZipReset             = "Reset ap�s inserir";

    ls->dlgAboutTitle           = "blueMSX - Sobre";

    ls->dlgLangLangText         = "Escolha uma linguagem que blueMSX ir� usar";
    ls->dlgLangLangTitle        = "blueMSX - Linguagem";

    ls->dlgAboutAbout           = "Sobre\r\n====";
    ls->dlgAboutVersion         = "Vers�o:";
    ls->dlgAboutBuildNumber     = "Compila��o:";
    ls->dlgAboutBuildDate       = "Data:";
    ls->dlgAboutCreat           = "Criado Por Daniel Vik";
    ls->dlgAboutDevel           = "DESENVOLVEDORES\r\n========";
    ls->dlgAboutThanks          = "CONTRIBUINTES\r\n============";       // New in 2.7 (retranslate, see english)
    ls->dlgAboutLisence         = "LICEN�A\r\n"
                                  "======\r\n\r\n"
                                  "Este software � provido 'como-est�', sem Garantia expressa ou implicada."
                                  "Em Nenhuma circunstancia os autores ser�o responsaveis por qualquer "
                                  "Problema ou DANO proveniente do uso deste software.\r\n\r\n"
                                  "Visite www.bluemsx.com para mais detalhes.";

    ls->dlgSavePreview          = "Visualizar"; 
    ls->dlgSaveDate             = "Data:"; 

    ls->dlgRenderVideoCapture   = "blueMSX - Criar video clip...";  


    //----------------------
    // Properties related lines
    //----------------------

    ls->propTitle               = "blueMSX - Propriedades";
    ls->propEmulation           = "Emula��o";
    ls->propVideo               = "Video";
    ls->propSound               = "Som";
    ls->propControls            = "Controles";
    ls->propPerformance         = "Performance";
    ls->propEffects             = "Effects";             // New in 2.9
    ls->propSettings             = "Ajustes";
    ls->propFile                = "Arquivo"; 
    ls->propDisk                = "Discos";              // New in 2.7
    ls->propPorts               = "Portas";
    
    ls->propEmuGeneralGB        = "Geral ";
    ls->propEmuFamilyText       = "MSX :";
    ls->propEmuMemoryGB         = "Mem�ria ";
    ls->propEmuRamSizeText      = "Tamanho RAM :";
    ls->propEmuVramSizeText     = "Tamanho VRAM :";
    ls->propEmuSpeedGB          = "Velocidade da Emula��o ";
    ls->propEmuSpeedText        = "Velocidade da Emula��o:";
    ls->propEmuFrontSwitchGB    = "Bot�es dos MSX Panasonic "; 
    ls->propEmuFrontSwitch      = " Bot�o Frontal"; 
    ls->propEmuNoSpriteLimits   = " Disable Sprites Limitation";  // New in 2.9
    ls->propEnableMsxKeyboardQuirk = " Emulate MSX keyboard quirk";  // New in 2.9
    ls->propEmuFdcTiming        = " N�o sincronizar disco do drive"; 
    ls->propEmuReversePlay      = " Enable reverse playback"; // New in 2.8.3
    ls->propEmuPauseSwitch      = " Bot�o Pause"; 
    ls->propEmuAudioSwitch      = " Bot�o Cartucho MSX-AUDIO"; 
    ls->propVideoFreqText       = "Frequ�ncia de v�deo:"; 
    ls->propVideoFreqAuto       = "Auto"; 
    ls->propSndOversampleText   = "Oversample:"; 
    ls->propSndYkInGB           = "YK-01/YK-10/YK-20 In ";                
    ls->propSndMidiInGB         = "MIDI In "; 
    ls->propSndMidiOutGB        = "MIDI Out "; 
    ls->propSndMidiChannel      = "Canal MIDI:";                      
    ls->propSndMidiAll          = "Todos";                                

    ls->propMonMonGB            = "Monitor: ";
    ls->propMonTypeText         = "Tipo de Monitor:";
    ls->propMonEmuText          = "Emula��o de Monitor:";
    ls->propVideoTypeText       = "Tipo de Video:";
    ls->propWindowSizeText      = "Tamanho Janela:";
    ls->propMonHorizStretch     = " Estiramento Horizontal"; 
    ls->propMonVertStretch      = " Estiramento Vertical"; 
    ls->propMonDeInterlace      = " De-entrela�ar";
    ls->propBlendFrames         = " Misturar frames consecutivos";           
    ls->propMonBrightness       = "Brilho:";
    ls->propMonContrast         = "Contraste:";
    ls->propMonSaturation       = "Satura��o:";
    ls->propMonGamma            = "Gama:";
    ls->propMonScanlines        = " Scanlines:";
    ls->propMonColorGhosting    = " Modulador RF:"; 
    ls->propMonEffectsGB        = "Efeitos "; 

    ls->propPerfVideoDrvGB      = "Driver de V�deo ";
    ls->propPerfVideoDispDrvText= "Driver do Display:";
    ls->propPerfFrameSkipText   = "Frame skipping:";
    ls->propPerfAudioDrvGB      = "Driver de Audio ";
    ls->propPerfAudioDrvText    = "Driver de Som:";
    ls->propPerfAudioBufSzText  = "Tamanho do buffer de som:";
    ls->propPerfEmuGB           = "Emula��o ";
    ls->propPerfSyncModeText    = "Modo de sincronismo:";
    ls->propFullscreenResText   = "Resolu��o de Tela Cheia:"; 

    ls->propSndChipEmuGB        = "Emula��o do Chip de Som ";
    ls->propSndMsxMusic         = " MSX-MUSIC";
    ls->propSndMsxAudio         = " MSX-AUDIO";
    ls->propSndMoonsound         = " Moonsound";
    ls->propSndMt32ToGm         = " Mapa instrumentos MT-32 a General MIDI"; 

    ls->propPortsLptGB          = "Porta paralela "; 
    ls->propPortsComGB          = "Portas seriais "; 
    ls->propPortsLptText        = "Porta:"; 
    ls->propPortsCom1Text       = "Porta 1:"; 
    ls->propPortsNone           = "Nenhum";
    ls->propPortsSimplCovox     = "SiMPL / Covox DAC"; 
    ls->propPortsFile           = "Imprimir em arquivo"; 
    ls->propPortsComFile        = "Enviar para arquivo";
    ls->propPortsOpenLogFile    = "Abrir um arquivo de dados"; 
    ls->propPortsEmulateMsxPrn  = "Emula��o:"; 

    ls->propSetFileHistoryGB    = "Hist�rico ";
    ls->propSetFileHistorySize  = "N�mero de itens no hist�rico:";
    ls->propSetFileHistoryClear = "Limpar Hist�rico";
    ls->propFileTypes           = " Associar certos tipos de arquivo com blueMSX";
    ls->propWindowsEnvGB        = "Ambiente Windows ";
    ls->propSetScreenSaver      = " Desabilitar Prote��o de Tela Quando blueMSX estiver ativo";
    ls->propDisableWinKeys      = " Fun��o MSX autom�tica para as teclas Windows"; 
    ls->propPriorityBoost       = " Dar ao blueMSX uma prioridade elevada";
    ls->propScreenshotPng       = " Utilizar o formato PNG para as capturas da tela";  
    ls->propEjectMediaOnExit    = " Ejetar a m�dia quando o blueMSX encerrar";        // New in 2.8
    ls->propClearHistory        = "Deseja realmente limpar hist�rico?";
    ls->propOpenRomGB           = "Abrir arquivo rom "; 
    ls->propDefaultRomType      = "Tipo de ROM Padr�o:"; 
    ls->propGuessRomType        = "Adivinhar tipo"; 

    ls->propSettDefSlotGB       = "Deslizar e depositar "; 
    ls->propSettDefSlots        = "Inserir cartucho no:"; 
    ls->propSettDefSlot         = " Slot"; 
    ls->propSettDefDrives       = "Inserir disco no:"; 
    ls->propSettDefDrive        = " Drive"; 

    ls->propThemeGB             = "Tema ";
    ls->propTheme               = "Tema";

    ls->propCdromGB             = "CD-ROM ";         // New in 2.7
    ls->propCdromMethod         = "M�todo De Acesso:";  // New in 2.7
    ls->propCdromMethodNone     = "Nenhum";            // New in 2.7
    ls->propCdromMethodIoctl    = "IOCTL";           // New in 2.7
    ls->propCdromMethodAspi     = "ASPI";            // New in 2.7
    ls->propCdromDrive          = "Drive:";          // New in 2.7

    ls->propD3DParametersGB         = "Parameters ";                // New in 2.9
    ls->propD3DAspectRatioText      = "Aspect ratio";               // New in 2.9
    ls->propD3DLinearFilteringText  = " Linear filtering";          // New in 2.9
    ls->propD3DForceHighResText     = " Force high resolution";     // New in 2.9
    ls->propD3DExtendBorderColorText    = " Extend border color";   // New in 2.9

    ls->propD3DCroppingGB               = "Cropping ";              // New in 2.9
    ls->propD3DCroppingTypeText         = "Cropping type:";         // New in 2.9
    ls->propD3DCroppingLeftText         = "Left:";                  // New in 2.9
    ls->propD3DCroppingRightText        = "Right:";                 // New in 2.9
    ls->propD3DCroppingTopText          = "Top:";                   // New in 2.9
    ls->propD3DCroppingBottomText       = "Bottom:";                // New in 2.9


    //----------------------
    // Dropdown related lines
    //----------------------

    ls->enumVideoMonColor       = "Cor";
    ls->enumVideoMonGrey        = "Branco e Preto";
    ls->enumVideoMonGreen       = "Verde";
    ls->enumVideoMonAmber       = "�mbar"; 

    ls->enumVideoTypePAL        = "PAL";
    ls->enumVideoTypeNTSC       = "NTSC e PAL-M";

    ls->enumVideoEmuNone        = "Nenhum";
    ls->enumVideoEmuYc          = "Y/C cable (sharp)";
    ls->enumVideoEmuMonitor     = "Monitor"; 
    ls->enumVideoEmuYcBlur      = "Noisy Y/C cable (sharp)";
    ls->enumVideoEmuComp        = "Composite (blurry)";
    ls->enumVideoEmuCompBlur    = "Noisy Composite (blurry)";
    ls->enumVideoEmuScale2x     = "Escala 2x";
    ls->enumVideoEmuHq2x        = "Hq2x"; 

    ls->enumVideoSize1x         = "Normal - 320x200";
    ls->enumVideoSize2x         = "Duplo  - 640x400";
    ls->enumVideoSizeFullscreen = "Tela Cheia";

    ls->enumVideoDrvDirectDrawHW= "DirectDraw HW acel.";
    ls->enumVideoDrvDirectDraw  = "DirectDraw";
    ls->enumVideoDrvGDI         = "GDI";
    ls->enumVideoDrvD3D         = "Direct3D";

    ls->enumVideoFrameskip0     = "Nenhum";
    ls->enumVideoFrameskip1     = "1 frame";
    ls->enumVideoFrameskip2     = "2 frames";
    ls->enumVideoFrameskip3     = "3 frames";
    ls->enumVideoFrameskip4     = "4 frames";
    ls->enumVideoFrameskip5     = "5 frames";

    ls->enumD3DARAuto           = "Auto";           // New in 2.9
    ls->enumD3DARStretch        = "Stretch";        // New in 2.9
    ls->enumD3DARPAL            = "PAL";            // New in 2.9
    ls->enumD3DARNTSC           = "NTSC";           // New in 2.9
    ls->enumD3DAR11             = "1:1";            // New in 2.9

    ls->enumD3DCropNone         = "None";           // New in 2.9
    ls->enumD3DCropMSX1         = "MSX1";           // New in 2.9
    ls->enumD3DCropMSX1Plus8    = "MSX1+8";         // New in 2.9
    ls->enumD3DCropMSX2         = "MSX2";           // New in 2.9
    ls->enumD3DCropMSX2Plus8    = "MSX2+8";         // New in 2.9
    ls->enumD3DCropCustom       = "Custom";         // New in 2.9

    ls->enumSoundDrvNone        = "Sem Som";
    ls->enumSoundDrvWMM         = "Driver WMM";
    ls->enumSoundDrvDirectX     = "Driver DirectX";

    ls->enumEmuSync1ms          = "Sinc sobre MSX refresh"; 
    ls->enumEmuSyncAuto         = "Auto (rapido)"; 
    ls->enumEmuSyncNone         = "Nenhum"; 
    ls->enumEmuSyncVblank       = "Sinc sobre PC Vertical Blank"; 
    ls->enumEmuAsyncVblank      = "Ass�ncronoPC Vblank";             

    ls->enumControlsJoyNone     = "Nenhum";
    ls->enumControlsJoyMouse    = "Mouse";
    ls->enumControlsJoyTetris2Dongle = "Tetris 2 Dongle"; 
    ls->enumControlsJoyTMagicKeyDongle = "MagicKey Dongle";             
    ls->enumControlsJoy2Button = "2-button Joystick";                   
    ls->enumControlsJoyGunstick  = "Gun Stick";                         
    ls->enumControlsJoyAsciiLaser="ASCII Plus-X Terminator Laser";      
    ls->enumControlsArkanoidPad  ="Arkanoid Pad";                   // New in 2.7.1
    ls->enumControlsJoyColeco = "ColecoVision Joystick";                

    ls->enumDiskMsx35Dbl9Sect    = "MSX 3.5\" duplo face, 9 sectores";     
    ls->enumDiskMsx35Dbl8Sect    = "MSX 3.5\" duplo face, 8 sectores";     
    ls->enumDiskMsx35Sgl9Sect    = "MSX 3.5\" simples face, 9 sectores";     
    ls->enumDiskMsx35Sgl8Sect    = "MSX 3.5\" simples face, 8 sectores";     
    ls->enumDiskSvi525Dbl        = "SVI-328 5.25\" duplo face";           
    ls->enumDiskSvi525Sgl        = "SVI-328 5.25\" simples face";     
    ls->enumDiskSf3Sgl           = "Sega SF-7000 3\" simples face";           


    //----------------------
    // Configuration related lines
    //----------------------

    ls->confTitle               = "blueMSX - Editor de Configura��o da Maquina";
    ls->confConfigText          = "Configura��o";
    ls->confSlotLayout          = "Slot Layout";
    ls->confMemory              = "Mem�ria";
    ls->confChipEmulation       = "Emula��o do Chip";
    ls->confChipExtras          = "Extras"; 

    ls->confOpenRom             = "Abrir ROM image"; 
    ls->confSaveTitle           = "blueMSX - Salvar Configura��o";
    ls->confSaveText            = "Voc� quer substituir esta configura��o da m�quina? :";
    ls->confSaveAsTitle         = "Salvar Como"; 
    ls->confSaveAsMachineName   = "Nome da Maquina:";
    ls->confDiscardTitle        = "blueMSX - Configura��o";
    ls->confExitSaveTitle       = "blueMSX - Sair do Editor de Configura��o";
    ls->confExitSaveText        = "Voce quer desfazer as altera��es da Configura��o atual?";

    ls->confSlotLayoutGB        = "Layout do Slot ";
    ls->confSlotExtSlotGB       = "Slots Externos ";
    ls->confBoardGB             = "Sistema "; 
    ls->confBoardText           = "Sistema tipo:"; 
    ls->confSlotPrimary         = "Prim�rio";
    ls->confSlotExpanded        = "Expandido (Quatro sub-slots)";

    ls->confSlotCart            = "Cartucho";
    ls->confSlot                = "Slot"; 
    ls->confSubslot             = "Sub-slot"; 

    ls->confMemAdd               = "Adicionar...";
    ls->confMemEdit              = "Editar...";
    ls->confMemRemove            = "Remover";
    ls->confMemSlot              = "Slot";
    ls->confMemAddresss          = "Endere�o";
    ls->confMemType              = "Tipo";
    ls->confMemRomImage          = "Imagem Rom";
    
    ls->confChipVideoGB          = "Video ";
    ls->confChipVideoChip        = "Video Chip:";
    ls->confChipVideoRam         = "Video RAM:";
    ls->confChipSoundGB          = "Som ";
    ls->confChipPsgStereoText    = " PSG Estereo";

    ls->confCmosGB                = "CMOS "; 
    ls->confCmosEnable            = " Ativar CMOS"; 
    ls->confCmosBattery           = " Utilizar uma Bateria Carregada";

    ls->confCpuFreqGB            = "Freq��ncia CPU "; 
    ls->confZ80FreqText          = "Freq��ncia Z80:"; 
    ls->confR800FreqText         = "Freq��ncia R800:"; 
    ls->confFdcGB                = "Controlador do Drive "; 
    ls->confCFdcNumDrivesText    = "N�mero das Drives:"; 

    ls->confEditMemTitle         = "blueMSX - Editar Mapper";
    ls->confEditMemGB            = "Detalhes do Mapper ";
    ls->confEditMemType          = "Tipo:";
    ls->confEditMemFile          = "Arquivo:";
    ls->confEditMemAddress       = "Endere�o";
    ls->confEditMemSize          = "Tamanho";
    ls->confEditMemSlot          = "Slot";


    //----------------------
    // Shortcut lines
    //----------------------

    ls->shortcutKey             = "Hotkey"; 
    ls->shortcutDescription     = "Shortcut"; 

    ls->shortcutSaveConfig      = "blueMSX - Salvar Configura��o";
    ls->shortcutOverwriteConfig = "Voc� quer  substituir esta configura��o da m�quina?:";
    ls->shortcutExitConfig      = "blueMSX - Sair do Editor de Atalhos";
    ls->shortcutDiscardConfig   = "Voce quer desfazer as altera��es da Configura��o atual?";
    ls->shortcutSaveConfigAs    = "blueMSX - Salvar Configura��o de Atalhos Como...";
    ls->shortcutConfigName      = "Nome da Configura��o:";
    ls->shortcutNewProfile      = "< Novo Perfil >";
    ls->shortcutConfigTitle     = "blueMSX - Editor do Mapa dos Atalhos";
    ls->shortcutAssign          = "Atribuir";
    ls->shortcutPressText       = "Apoiar sobre Tecla(s) :";
    ls->shortcutScheme          = "Disposi��o:";
    ls->shortcutCartInsert1     = "Inserir Cartucho no Slot 1";
    ls->shortcutCartRemove1     = "Remover Cartucho no Slot 1";
    ls->shortcutCartInsert2     = "Inserir Cartucho no Slot 2";
    ls->shortcutCartRemove2     = "Remover Cartucho no Slot 2";
    ls->shortcutSpecialMenu1    = "Mostrar Menu Especial para Cartucho no Slot 1";
    ls->shortcutSpecialMenu2    = "Mostrar Menu Especial para Cartucho no Slot 2";
    ls->shortcutCartAutoReset   = "Reset ap�s inserir cartucho";
    ls->shortcutDiskInsertA     = "Inserir Disco no Drive A";
    ls->shortcutDiskDirInsertA  = "Inserir um diret�rio como disco A"; 
    ls->shortcutDiskRemoveA     = "Ejetar  Disco no Drive A";
    ls->shortcutDiskChangeA     = "Alterar rapidamente Disco no Drive A";
    ls->shortcutDiskAutoResetA  = "Reset ap�s inserir Disco no Drive A";
    ls->shortcutDiskInsertB     = "Insira Disco no Drive B";
    ls->shortcutDiskDirInsertB  = "Inserir um diret�rio como disco B"; 
    ls->shortcutDiskRemoveB     = "Ejetar Disco no Drive B";
    ls->shortcutCasInsert       = "Inserir Cassette";
    ls->shortcutCasEject        = "Ejetar Cassette";
    ls->shortcutCasAutorewind   = "Rebobina��o autom�tica ou n�o do cassete";
    ls->shortcutCasReadOnly     = "Cassete em modo leitura somente ou n�o";
    ls->shortcutCasSetPosition  = "Ajustar Posi��o";
    ls->shortcutCasRewind       = "Rebobinar Cassette";
    ls->shortcutCasSave         = "Salvar Imagem do Cassette Como...";
    ls->shortcutPrnFormFeed     = "Passagem para a p�gina seguinte"; 
    ls->shortcutCpuStateLoad    = "Carregar Status da CPU";
    ls->shortcutCpuStateSave    = "Salvar Status da CPU";
    ls->shortcutCpuStateQload   = "Carregar rapido Status da CPU";
    ls->shortcutCpuStateQsave   = "Salvar rapido Status da CPU";
    ls->shortcutAudioCapture    = "Come�ar/parar a captura �udio";
    ls->shortcutScreenshotOrig  = "Salvar Tela";
    ls->shortcutScreenshotSmall = "Pequena captura da tela sem filtro";
    ls->shortcutScreenshotLarge = "Grande captura da tela sem filtro";
    ls->shortcutQuit            = "Sair blueMSX";
    ls->shortcutRunPause        = "Executar/Pausa Emula��o";
    ls->shortcutStop            = "Parar Emula��o";
    ls->shortcutResetHard       = "Reset Hardware";
    ls->shortcutResetSoft       = "Reset Software";
    ls->shortcutResetClean      = "Reset Completo";
    ls->shortcutSizeSmall       = "Passar em modo Janela Tamanho Pequeno";
    ls->shortcutSizeNormal      = "Passar em modo Janela Tamanho Normal";
    ls->shortcutSizeFullscreen  = "Passar em modo Tela Cheia";
    ls->shortcutSizeMinimized   = "Reduzir a Janela"; 
    ls->shortcutToggleFullscren = "Troca de modo Janela/Tela Cheia";
    ls->shortcutVolumeIncrease  = "Aumentar Volume sonoro";
    ls->shortcutVolumeDecrease  = "Diminuir Volume sonoro";
    ls->shortcutVolumeMute      = "Parar Som";
    ls->shortcutVolumeStereo    = "Troca Mono/Estereo";
    ls->shortcutSwitchMsxAudio  = "Impulsionar Bot�o cartucho MSX-AUDIO";
    ls->shortcutSwitchFront     = "Impulsionar Bot�o frontal Panasonic";
    ls->shortcutSwitchPause     = "Impulsionar Botao Pause"; 
    ls->shortcutToggleMouseLock = "Ativar/Desativar Bloqueio do Mouse";
    ls->shortcutEmuSpeedMax     = "Velocidade M�xima da Emula��o";
    ls->shortcutEmuPlayReverse  = "Rewind emulation";                     // New in 2.8.3
    ls->shortcutEmuSpeedToggle  = "Troca de Velocidade M�xima da Emula��o"; 
    ls->shortcutEmuSpeedNormal  = "Velocidade Normal da Emula��o";
    ls->shortcutEmuSpeedInc     = "Aumentar Velocidade da Emula��o";
    ls->shortcutEmuSpeedDec     = "Diminuir Velocidade da Emula��o";
    ls->shortcutThemeSwitch     = "Troque o tema";
    ls->shortcutShowEmuProp     = "Mostrar Propriedades da Emula��o";
    ls->shortcutShowVideoProp   = "Mostrar Propriedades Video";
    ls->shortcutShowAudioProp   = "Mostrar Propriedades de Som";
    ls->shortcutShowCtrlProp    = "Mostrar Propriedades dos Controles";
    ls->shortcutShowEffectsProp = "Show Effects Properties";     // New in 2.9
    ls->shortcutShowSettProp    = "Mostrar Propriedades dos Ajustes";
    ls->shortcutShowPorts       = "Mostrar Propriedades das Portas";
    ls->shortcutShowLanguage    = "Mostrar Di�logo da L�ngua";
    ls->shortcutShowMachines    = "Mostrar Configura��o da M�quina";
    ls->shortcutShowShortcuts   = "Mostrar Configura��o de Atalhos";
    ls->shortcutShowKeyboard    = "Mostrar Configura��o de Controladores/Teclado"; 
    ls->shortcutShowMixer       = "Mostre Mixer de Audio"; 
    ls->shortcutShowDebugger    = "Mostrar Debugger"; 
    ls->shortcutShowTrainer     = "Mostrar Trainer"; 
    ls->shortcutShowHelp        = "Ver Rubricas da Ajuda";
    ls->shortcutShowAbout       = "Ver Rubrica Sobre blueMSX";
    ls->shortcutShowFiles       = "Mostrar Propriedades de Arquivos";
    ls->shortcutToggleSpriteEnable = "Mostrar/esconder os sprites";
    ls->shortcutToggleFdcTiming = "sincronizar ou n�o disco drive"; 
    ls->shortcutToggleNoSpriteLimits = "Toggle Sprites Limitation";                 // New in 2.9
    ls->shortcutEnableMsxKeyboardQuirk = "Emulate MSX Keyboard Quirk";              // New in 2.9
    ls->shortcutToggleCpuTrace  = "Ativar/Desativar Tra�o da CPU"; 
    ls->shortcutVideoLoad       = "Carregar captura v�deo";             
    ls->shortcutVideoPlay       = "Ver mais recente captura v�deo";   
    ls->shortcutVideoRecord     = "Salvar captura v�deo";              
    ls->shortcutVideoStop       = "Parar captura v�deo";                
    ls->shortcutVideoRender     = "Criar video clip";   


    //----------------------
    // Keyboard config lines
    //----------------------

    ls->keyconfigSelectedKey    = "Tecla MSX:"; 
    ls->keyconfigMappedTo       = "Tecla PC :"; 
    ls->keyconfigMappingScheme  = "Configura��o do teclado:"; 

    
    //----------------------
    // Rom type lines
    //----------------------

    ls->romTypeStandard         = "Standard";
    ls->romTypeZenima80         = "Zemina 80 in 1";
    ls->romTypeZenima90         = "Zemina 90 in 1";
    ls->romTypeZenima126        = "Zemina 126 in 1";
    ls->romTypeSccMirrored      = "SCC mirrored";
    ls->romTypeSccExtended      = "SCC extended";
    ls->romTypeKonamiGeneric    = "Konami Generic";
    ls->romTypeMirrored         = "Mirrored ROM";
    ls->romTypeNormal           = "Normal ROM";
    ls->romTypeDiskPatch        = "Normal + Disk Patch";
    ls->romTypeCasPatch         = "Normal + Cassette Patch";
    ls->romTypeTc8566afFdc      = "TC8566AF Disk Controller";
    ls->romTypeTc8566afTrFdc    = "TC8566AF Turbo-R Disk Controller";
    ls->romTypeMicrosolFdc      = "Microsol Disk Controller";
    ls->romTypeNationalFdc      = "National Disk Controller";
    ls->romTypePhilipsFdc       = "Philips Disk Controller";
    ls->romTypeSvi707Fdc        = "SVI-707 Disk Controller";
    ls->romTypeSvi738Fdc        = "SVI-738 Disk Controller";
    ls->romTypeMappedRam        = "Mapped RAM";
    ls->romTypeMirroredRam1k    = "1kB Mirrored RAM";
    ls->romTypeMirroredRam2k    = "2kB Mirrored RAM";
    ls->romTypeNormalRam        = "Normal RAM";
    ls->romTypeTurborPause      = "Turbo-R Pause";
    ls->romTypeF4deviceNormal   = "F4 Device Normal";
    ls->romTypeF4deviceInvert   = "F4 Device Inverted";
    ls->romTypeTurborTimer      = "Turbo-R Timer";
    ls->romTypeNormal4000       = "Normal 4000h";
    ls->romTypeNormalC000       = "Normal C000h";
    ls->romTypeExtRam           = "External RAM";
    ls->romTypeExtRam16         = "16kB External RAM";
    ls->romTypeExtRam32         = "32kB External RAM";
    ls->romTypeExtRam48         = "48kB External RAM";
    ls->romTypeExtRam64         = "64kB External RAM";
    ls->romTypeExtRam512        = "512kB External RAM";
    ls->romTypeExtRam1mb        = "1MB External RAM";
    ls->romTypeExtRam2mb        = "2MB External RAM";
    ls->romTypeExtRam4mb        = "4MB External RAM";
    ls->romTypeSvi328Cart       = "SVI-328 Cartridge";
    ls->romTypeSvi328Fdc        = "SVI-328 Disk Controller";
    ls->romTypeSvi328Prn        = "SVI-328 Printer";
    ls->romTypeSvi328Uart       = "SVI-328 Serial Port";
    ls->romTypeSvi328col80      = "SVI-328 80 Column Card";
    ls->romTypeSvi727col80      = "SVI-727 80 Column Card";
    ls->romTypeColecoCart       = "Coleco Cartridge";
    ls->romTypeSg1000Cart       = "SG-1000 Cartridge";
    ls->romTypeSc3000Cart       = "SC-3000 Cartridge";
    ls->romTypeMsxPrinter       = "MSX Printer";
    ls->romTypeTurborPcm        = "Turbo-R PCM Chip";
    ls->romTypeNms8280Digitiz   = "Philips NMS-8280 Digitizer";
    ls->romTypeHbiV1Digitiz     = "Sony HBI-V1 Digitizer";
    
    
    //----------------------
    // Debug type lines
    // Note: Only needs translation if debugger is translated
    //----------------------

    ls->dbgMemVisible           = "Visible Memory";
    ls->dbgMemRamNormal         = "Normal";
    ls->dbgMemRamMapped         = "Mapped";
    ls->dbgMemYmf278            = "YMF278 Sample RAM";
    ls->dbgMemAy8950            = "AY8950 Sample RAM";
    ls->dbgMemScc               = "Memory";

    ls->dbgCallstack            = "Callstack";

    ls->dbgRegs                 = "Registers";
    ls->dbgRegsCpu              = "CPU Registers";
    ls->dbgRegsYmf262           = "YMF262 Registers";
    ls->dbgRegsYmf278           = "YMF278 Registers";
    ls->dbgRegsAy8950           = "AY8950 Registers";
    ls->dbgRegsYm2413           = "YM2413 Registers";

    ls->dbgDevRamMapper         = "RAM Mapper";
    ls->dbgDevRam               = "RAM";
    ls->dbgDevF4Device          = "F4 Device";
    ls->dbgDevKorean80          = "Korean 80";
    ls->dbgDevKorean90          = "Korean 90";
    ls->dbgDevKorean128         = "Korean 128";
    ls->dbgDevFdcMicrosol       = "Microsol FDC";
    ls->dbgDevPrinter           = "Printer";
    ls->dbgDevSviFdc            = "SVI FDC";
    ls->dbgDevSviPrn            = "SVI Printer";
    ls->dbgDevSvi80Col          = "SVI 80 Column";
    ls->dbgDevRtc               = "RTC";
    ls->dbgDevTrPause           = "TR Pause";


    //----------------------
    // Debug type lines
    // Note: Can only be translated to european languages
    //----------------------

    ls->aboutScrollThanksTo     = "Agradecimentos especiais a: ";
    ls->aboutScrollAndYou       = "e VOC� !!!!";
};

#endif
