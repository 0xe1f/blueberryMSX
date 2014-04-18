/*****************************************************************************
** $Source: /cygdrive/d/Private/_SVNROOT/bluemsx/blueMSX/Src/Language/LanguageSpannish.h,v $
**
** $Revision: 1.61 $
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
#ifndef LANGUAGE_SPANISH_H
#define LANGUAGE_SPANISH_H

#include "LanguageStrings.h"

void langInitSpanish(LanguageStrings* ls)
{
    //----------------------
    // Language lines
    //----------------------

    ls->langCatalan             = "Catalan";
    ls->langChineseSimplified   = "Chino simplificado";
    ls->langChineseTraditional  = "Chino tradicional";
    ls->langDutch               = "Holand�s";
    ls->langEnglish             = "Ingl�s";
    ls->langFinnish             = "Finland�s";
    ls->langFrench              = "Franc�s";
    ls->langGerman              = "Alem�n";
    ls->langItalian             = "Italiano";
    ls->langJapanese            = "Japon�s";
    ls->langKorean              = "Coreano";
    ls->langPolish              = "Polaco";
    ls->langPortuguese          = "Portugu�s";
    ls->langRussian             = "Russian";            // v2.8
    ls->langSpanish             = "Espa�ol";
    ls->langSwedish             = "Sueco";


    //----------------------
    // Generic lines
    //----------------------

    ls->textDevice              = "Tipo:"; 
    ls->textFilename            = "Nombre:"; 
    ls->textFile                = "Archivo"; 
    ls->textNone                = "Ninguno"; 
    ls->textUnknown             = "Desconocido";                            


    //----------------------
    // Warning and Error lines
    //----------------------

    ls->warningTitle             = "blueMSX - Advertencia";
    ls->warningDiscardChanges   = "Quieres descartar cambios de la configuraci�n actual?"; 
    ls->warningOverwriteFile    = "Usted desea sobreescribir este archivo?:"; 
    ls->errorTitle              = "blueMSX - Error";
    ls->errorEnterFullscreen    = "Error al intentar Modo Pantalla Completa             \n";
    ls->errorDirectXFailed      = "Error al crear objetos DirectX.           \n.\nComprueba configuraci�n de V�deo.";
    ls->errorNoRomInZip         = "No hay archivo .rom en el archivo zip.";
    ls->errorNoDskInZip         = "No hay archivo .dsk en el archivo zip.";
    ls->errorNoCasInZip         = "No hay archivo .cas en el archivo zip.";
    ls->errorNoHelp             = "Imposible encontrar archivo de ayuda de BlueMSX.";
    ls->errorStartEmu           = "Error al iniciar MSX emulator.";
    ls->errorPortableReadonly   = "El dispositivo portable es s�lo lectura";        


    //----------------------
    // File related lines
    //----------------------

    ls->fileRom                 = "ROM image"; 
    ls->fileAll                 = "Todos los archivos"; 
    ls->fileCpuState            = "Carga CPU"; 
    ls->fileVideoCapture        = "Captura video"; 
    ls->fileDisk                = "Disk Image"; 
    ls->fileCas                 = "Tape Image"; 
    ls->fileAvi                 = "Video Clip";    


    //----------------------
    // Menu related lines
    //----------------------

    ls->menuNoRecentFiles       = "- No hay archivos recientes -";
    ls->menuInsert              = "Insertar";
    ls->menuEject               = "Sacar";

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
    ls->menuCartSCCPlus         = "Cartucho SCC-I";
    ls->menuCartSCC             = "Cartucho SCC";
    ls->menuCartFMPac           = "Cartucho FM-PAC";
    ls->menuCartPac             = "Cartucho PAC";
    ls->menuCartHBI55           = "Cartucho Sony HBI-55"; 
    ls->menuCartInsertSpecial   = "Insertar Especial";                     
    ls->menuCartMegaRam         = "MegaRAM";                            
    ls->menuCartExternalRam     = "RAM externo"; 
    ls->menuCartEseRam          = "Ese-RAM";             // New in 2.7
    ls->menuCartEseSCC          = "Ese-SCC";             // New in 2.7
    ls->menuCartMegaFlashRom    = "Mega Flash ROM";      // New in 2.7

    ls->menuDiskInsertNew       = "Insertar nueva imagen de Disco";              
    ls->menuDiskInsertCdrom     = "Insertar CD-Rom";       // New in 2.7
    ls->menuDiskDirInsert       = "Insertar directorio"; 
    ls->menuDiskAutoStart       = "Reinicio Tras Insertar";
    ls->menuCartAutoReset       = "Reinicio Tras Insertar/Sacar";

    ls->menuCasRewindAfterInsert = "Rebobinar tras Insertar";
    ls->menuCasUseReadOnly       = "Usar Imagen de Cassette S�lo Lectura";
    ls->lmenuCasSaveAs           = "Salvar Imagen de Cassette Como...";
    ls->menuCasSetPosition      = "Posicionar";
    ls->menuCasRewind           = "Rebobinar";

    ls->menuVideoLoad           = "Cargar...";             
    ls->menuVideoPlay           = "Ver la m�s reciente captura";   
    ls->menuVideoRecord         = "Grabar";              
    ls->menuVideoRecording      = "Grabar en curso";           
    ls->menuVideoRecAppend      = "Grabar (a�adir)";     
    ls->menuVideoStop           = "Parada";                
    ls->menuVideoRender         = "Crear video clip";   

    ls->menuPrnFormfeed         = "P�gina siguiente"; 

    ls->menuZoomNormal          = "Tama�o Peque�a";
    ls->menuZoomDouble          = "Tama�o Normal";
    ls->menuZoomFullscreen      = "Pantalla Completa";

    ls->menuPropsEmulation      = "Emulaci�n";
    ls->menuPropsVideo          = "V�deo";
    ls->menuPropsSound          = "Sonido";
    ls->menuPropsControls       = "Controles";
    ls->menuPropsEffects        = "Effects";               // New in 2.9
    ls->menuPropsSettings        = "Configuraciones";
    ls->menuPropsFile           = "Archivo";
    ls->menuPropsDisk           = "Discos";               // New in 2.7
    ls->menuPropsLanguage       = "Idioma";
    ls->menuPropsPorts          = "Puertos"; 

    ls->menuVideoSource         = "Salida V�deo";                   
    ls->menuVideoSourceDefault  = "Salida V�deo no conectada";      
    ls->menuVideoChipAutodetect = "Detecci�n autom�tica";     
    ls->menuVideoInSource       = "Entrada v�deo";                    
    ls->menuVideoInBitmap       = "Archivo Bitmap";                        
    
    ls->menuEthInterface        = "Interfaz De Ethernet"; 

    ls->menuHelpHelp            = "Ayuda";
    ls->menuHelpAbout           = "Acerca De blueMSX";

    ls->menuFileCart            = "Cartucho Slot";
    ls->menuFileDisk            = "Unidad Disco";
    ls->menuFileCas             = "Cassette";
    ls->menuFilePrn             = "Impresora"; 
    ls->menuFileLoadState       = "Estado Carga CPU";
    ls->menuFileSaveState       = "Grabar Estado CPU";
    ls->menuFileQLoadState      = "Carga r�pida Estado";
    ls->menuFileQSaveState      = "Grabaci�n R�pida Estado";
    ls->menuFileCaptureAudio    = "Captura Audio";
    ls->menuFileCaptureVideo    = "Captura Video"; 
    ls->menuFileScreenShot      = "Grabar Pantalla";
    ls->menuFileExit            = "Salir";

    ls->menuFileHarddisk        = "Disco duro";                          
    ls->menuFileHarddiskNoPesent= "No hay controladores";             
    ls->menuFileHarddiskRemoveAll= "Sacar todos los discos duros";    // New in 2.7

    ls->menuRunRun              = "Ejecutar";
    ls->menuRunPause            = "Pausar";
    ls->menuRunStop             = "Parada";
    ls->menuRunSoftReset        = "Reinicio Software";
    ls->menuRunHardReset        = "Reinicio Hardware";
    ls->menuRunCleanReset       = "Reinicio Completo";

    ls->menuToolsMachine        = "Editor de M�quina";
    ls->menuToolsShortcuts      = "Editor de Atajos";
    ls->menuToolsCtrlEditor     = "Editor de controladores/teclado";  
    ls->menuToolsMixer          = "Mezclador de Audio"; 
    ls->menuToolsLoadMemory     = "Carga de Memoria";
    ls->menuToolsDebugger       = "Debugger";               
    ls->menuToolsTrainer        = "Trainer";                
    ls->menuToolsTraceLogger    = "Trace Logger";           

    ls->menuFile                = "Archivo";
    ls->menuRun                 = "Emulaci�n";
    ls->menuWindow              = "Ventana";
    ls->menuOptions             = "Opciones";
    ls->menuTools                = "Herramientas";
    ls->menuHelp                = "Ayuda";


    //----------------------
    // Dialog related lines
    //----------------------

    ls->dlgOK                   = "OK";
    ls->dlgOpen                 = "Open";
    ls->dlgCancel               = "Cancelar";
    ls->dlgSave                 = "Guardar";
    ls->dlgSaveAs               = "Guardar Como...";
    ls->dlgRun                  = "Ejecutar";
    ls->dlgClose                = "Cerrar";

    ls->dlgLoadRom              = "blueMSX - Seleccionar imagen Rom a cargar";
    ls->dlgLoadDsk              = "blueMSX - Seleccionar imagen Dsk a cargar";
    ls->dlgLoadCas              = "blueMSX - Seleccionar imagen Cas a cargar";
    ls->dlgLoadRomDskCas        = "blueMSX - Seleccionar un archivo Rom, Dsk, or Cas a cargar";
    ls->dlgLoadRomDesc          = "Seleccionar imagen Rom a cargar:";
    ls->dlgLoadDskDesc          = "Seleccionar imagen de disco a cargar:";
    ls->dlgLoadCasDesc          = "Seleccionar imagen de cinta a cargar:";
    ls->dlgLoadRomDskCasDesc    = "Seleccionar imagen Rom, Disco, o Cinta a cargar:";
    ls->dlgLoadState            = "Cargar Estado CPU";
    ls->dlgLoadVideoCapture     = "Cargar captura video";      
    ls->dlgSaveState            = "Salvar Estado CPU";
    ls->dlgSaveCassette          = "blueMSX - Salvar Imagen de Cinta";
    ls->dlgSaveVideoClipAs      = "Guardar video clip como...";      
    ls->dlgAmountCompleted      = "Guardar en curso:";          
    ls->dlgInsertRom1           = "Insertar Cartucho ROM en slot 1";
    ls->dlgInsertRom2           = "Insertar Cartucho ROM en slot 2";
    ls->dlgInsertDiskA          = "Insertar imagen de Disco en Unidad A";
    ls->dlgInsertDiskB          = "Insertar imagen de Disco en Unidad B";
    ls->dlgInsertHarddisk       = "Insertar disco duro";                   
    ls->dlgInsertCas            = "Insertar Cinta de cassette";
    ls->dlgRomType              = "Tipo rom:"; 
    ls->dlgDiskSize             = "Tama�o del disco:";             

    ls->dlgTapeTitle            = "blueMSX - Posici�n de la Cinta";
    ls->dlgTapeFrameText        = "Posici�n de la Cinta";
    ls->dlgTapeCurrentPos       = "Posici�n Actual";
    ls->dlgTapeTotalTime        = "Tiempo Total";
    ls->dlgTapeSetPosText        = "Posici�n de la Cinta:";
    ls->dlgTapeCustom            = "Mostrar Archivos Personalizados";
    ls->dlgTabPosition           = "Posici�n";
    ls->dlgTabType               = "Tipo";
    ls->dlgTabFilename           = "Nombre Archivo";
    ls->dlgZipReset             = "Reiniciar Tras Insertar";

    ls->dlgAboutTitle           = "blueMSX - Acerca de";

    ls->dlgLangLangText         = "Seleccionar Idioma";
    ls->dlgLangLangTitle        = "blueMSX - Idioma";

    ls->dlgAboutAbout           = "Acerca de\r\n====";
    ls->dlgAboutVersion         = "Versi�n:";
    ls->dlgAboutBuildNumber     = "Compilaci�n:";
    ls->dlgAboutBuildDate       = "Fecha:";
    ls->dlgAboutCreat           = "Desarrollado por Daniel Vik";
    ls->dlgAboutDevel           = "PROGRAMADORES\r\n========";
    ls->dlgAboutThanks          = "CONTRIBUIDORES\r\n============";       // New in 2.7 (retranslate, see english)
    ls->dlgAboutLisence         = "LICENCIA\r\n"
                                  "======\r\n\r\n"
                                  "Este software se proporciona tal y como es, sin ninguna garant�a."
                                  "En ning�n caso el/los autores ser�n responsablesny de posibles da�os "
                                  "producidos por el uso de este software.\r\n\r\n"
                                  "Para m�s detalles, visita la web www.bluemsx.com.";

    ls->dlgSavePreview          = "Imaginar"; 
    ls->dlgSaveDate             = "Fecha:"; 

    ls->dlgRenderVideoCapture   = "blueMSX - Crear video clip...";  


    //----------------------
    // Properties related lines
    //----------------------

    ls->propTitle               = "blueMSX - Propiedades";
    ls->propEmulation           = "Emulaci�n";
    ls->propVideo               = "Video";
    ls->propSound               = "Sonido";
    ls->propControls            = "Controles";
    ls->propPerformance         = "Rendimiento";
    ls->propEffects             = "Effects";             // New in 2.9
    ls->propSettings             = "Configuraciones";
    ls->propFile                = "Archivo"; 
    ls->propDisk                = "Discos";              // New in 2.7
    ls->propPorts               = "Puertos";

    ls->propEmuGeneralGB        = "General ";
    ls->propEmuFamilyText       = "Familia MSX:";
    ls->propEmuMemoryGB         = "Memoria ";
    ls->propEmuRamSizeText      = "Tama�o RAM:";
    ls->propEmuVramSizeText     = "Tama�o VRAM:";
    ls->propEmuSpeedGB          = "Velocidad de la Emulaci�n ";
    ls->propEmuSpeedText        = "Velocidad de la Emulaci�n:";
    ls->propEmuFrontSwitchGB     = "Botones Panasonic "; 
    ls->propEmuFrontSwitch       = " Bot�n Frontal"; 
    ls->propEmuNoSpriteLimits   = " Disable Sprites Limitation";  // New in 2.9
    ls->propEnableMsxKeyboardQuirk = " Emulate MSX keyboard quirk";  // New in 2.9
    ls->propEmuFdcTiming        = " No sincronizar unidad de disco"; 
    ls->propEmuReversePlay      = " Enable reverse playback"; // New in 2.8.3
    ls->propEmuPauseSwitch      = " Bot�n Pause"; 
    ls->propEmuAudioSwitch       = " Bot�n cartucho MSX-AUDIO"; 
    ls->propVideoFreqText       = "Frecuencia video:"; 
    ls->propVideoFreqAuto       = "Auto"; 
    ls->propSndOversampleText   = "Oversample:"; 
    ls->propSndYkInGB           = "YK-01/YK-10/YK-20 In ";                
    ls->propSndMidiInGB         = "MIDI In "; 
    ls->propSndMidiOutGB        = "MIDI Out "; 
    ls->propSndMidiChannel      = "Canal MIDI:";                      
    ls->propSndMidiAll          = "Todos";                                

    ls->propMonMonGB            = "Monitor ";
    ls->propMonTypeText         = "Tipo de Monitor:";
    ls->propMonEmuText          = "Emulaci�n del Monitor:";
    ls->propVideoTypeText       = "Tipo de Video:";
    ls->propWindowSizeText      = "Tama�o de Ventana:";
    ls->propMonHorizStretch      = " Estiramiento Horizontal";
    ls->propMonVertStretch       = " Estiramiento Vertical";
    ls->propMonDeInterlace      = " De-entrelace";
    ls->propBlendFrames         = " Mezclar frames consecutivas";           
    ls->propMonBrightness       = "Brillo:";
    ls->propMonContrast         = "Contraste:";
    ls->propMonSaturation       = "Saturaci�n:";
    ls->propMonGamma            = "Gamma:";
    ls->propMonScanlines        = " Scanlines:";
    ls->propMonColorGhosting    = " Modulador RF:"; 
    ls->propMonEffectsGB        = "Efectos  "; 

    ls->propPerfVideoDrvGB      = "Controlador de Video ";
    ls->propPerfVideoDispDrvText= "Controlador de Pantalla:";
    ls->propPerfFrameSkipText   = "Omisi�n de Frames:";
    ls->propPerfAudioDrvGB      = "Controlador de Audio ";
    ls->propPerfAudioDrvText    = "Controlador de Sonido:";
    ls->propPerfAudioBufSzText  = "Tama�o del Buffer de sonido:";
    ls->propPerfEmuGB           = "Emulaci�n ";
    ls->propPerfSyncModeText    = "Modo SYNC:";
    ls->propFullscreenResText   = "Resoluci�n pantalla completa:"; 

    ls->propSndChipEmuGB        = "Emulaci�n Chip de Sonido ";
    ls->propSndMsxMusic         = " MSX-MUSIC";
    ls->propSndMsxAudio         = " MSX-AUDIO";
    ls->propSndMoonsound         = " Moonsound";
    ls->propSndMt32ToGm         = " Mapa instrumentos MT-32 a General MIDI"; 

    ls->propPortsLptGB          = "Puerto paralelo "; 
    ls->propPortsComGB          = "Puertos seriales "; 
    ls->propPortsLptText        = "Puerto:"; 
    ls->propPortsCom1Text       = "Puerto 1:"; 
    ls->propPortsNone           = "Ninguno";
    ls->propPortsSimplCovox     = "SiMPL / Covox DAC"; 
    ls->propPortsFile           = "Imprimir en archivo"; 
    ls->propPortsComFile        = "Enviar hacia archivo";
    ls->propPortsOpenLogFile    = "Abrir un archivo de datos"; 
    ls->propPortsEmulateMsxPrn  = "Emulaci�n:"; 

    ls->propSetFileHistoryGB     = "Hist�rico de Archivos ";
    ls->propSetFileHistorySize   = "N�mero de items en Hist�rico de Archivos:";
    ls->propSetFileHistoryClear  = "Borrar Host�rico";
    ls->propFileTypes            = " Asociar algunos tipos de archivo con blueMSX";
    ls->propWindowsEnvGB         = "Ambiente Windows ";
    ls->propSetScreenSaver       = " Deshabilitar Salvapantallas mientras blueMSX est� en ejecuci�n";
    ls->propDisableWinKeys       = " Funci�n MSX autom�tica para las teclas Windows"; 
    ls->propPriorityBoost       = " Dar a blueMSX una elevada prioridad";
    ls->propScreenshotPng       = " Utilizar el formato PNG para las capturas de pantalla";  
    ls->propEjectMediaOnExit    = " Eject media when blueMSX exits";        // New in 2.8
    ls->propClearHistory         = "�Desean realmente borrar host�rico?";
    ls->propOpenRomGB           = "Abrir archivo rom "; 
    ls->propDefaultRomType      = "Tipo por defecto:"; 
    ls->propGuessRomType        = "Conjeturar tipo"; 

    ls->propSettDefSlotGB       = "Deslizar e depositar "; 
    ls->propSettDefSlots        = "Insertar cartucho en:"; 
    ls->propSettDefSlot         = " Slot"; 
    ls->propSettDefDrives       = "Insertar disco en:"; 
    ls->propSettDefDrive        = " Unidad"; 

    ls->propThemeGB             = "Tema ";
    ls->propTheme               = "Tema";

    ls->propCdromGB             = "CD-ROM ";         // New in 2.7
    ls->propCdromMethod         = "M�todo de acceso:";  // New in 2.7
    ls->propCdromMethodNone     = "Ninguno";            // New in 2.7
    ls->propCdromMethodIoctl    = "IOCTL";           // New in 2.7
    ls->propCdromMethodAspi     = "ASPI";            // New in 2.7
    ls->propCdromDrive          = "Unidad:";          // New in 2.7

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

    ls->enumVideoMonColor       = "Color";
    ls->enumVideoMonGrey        = "Blanco y Negro";
    ls->enumVideoMonGreen       = "Verde";
    ls->enumVideoMonAmber       = "Ambar"; 

    ls->enumVideoTypePAL        = "PAL";
    ls->enumVideoTypeNTSC       = "NTSC";

    ls->enumVideoEmuNone        = "Ninguno";
    ls->enumVideoEmuYc          = "Cable Y/C";
    ls->enumVideoEmuMonitor     = "Monitor"; 
    ls->enumVideoEmuYcBlur      = "Cable Y/C ruidoso";
    ls->enumVideoEmuComp        = "Compuesto";
    ls->enumVideoEmuCompBlur    = "Compuesto Ruidoso";
    ls->enumVideoEmuScale2x     = "Escala 2x";
    ls->enumVideoEmuHq2x        = "Hq2x"; 

    ls->enumVideoSize1x         = "Normal - 320x200";
    ls->enumVideoSize2x         = "Doble - 640x400";
    ls->enumVideoSizeFullscreen = "Pantalla Completa";

    ls->enumVideoDrvDirectDrawHW = "DirectDraw HW acel.";
    ls->enumVideoDrvDirectDraw  = "DirectDraw";
    ls->enumVideoDrvGDI         = "GDI";
    ls->enumVideoDrvD3D         = "Direct3D";

    ls->enumVideoFrameskip0     = "Ninguno";
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

    ls->enumSoundDrvNone        = "Sin Sonido";
    ls->enumSoundDrvWMM         = "Controlador WMM";
    ls->enumSoundDrvDirectX     = "Controlador DirectX";

    ls->enumEmuSync1ms          = "Sinc sobre MSX refresh"; 
    ls->enumEmuSyncAuto         = "Auto (r�pido)"; 
    ls->enumEmuSyncNone         = "Ninguno"; 
    ls->enumEmuSyncVblank       = "Sinc sobre PC Vertical Blank"; 
    ls->enumEmuAsyncVblank      = "Asincr�nico PC Vblank";             

    ls->enumControlsJoyNone     = "Ninguno";
    ls->enumControlsJoyMouse    = "Rat�n";
    ls->enumControlsJoyTetris2Dongle = "Tetris 2 Dongle"; 
    ls->enumControlsJoyTMagicKeyDongle = "MagicKey Dongle";             
    ls->enumControlsJoy2Button = "2-button Joystick";                   
    ls->enumControlsJoyGunstick  = "Gun Stick";                         
    ls->enumControlsJoyAsciiLaser="ASCII Plus-X Terminator Laser";      
    ls->enumControlsArkanoidPad  ="Arkanoid Pad";                   // New in 2.7.1
    ls->enumControlsJoyColeco = "ColecoVision Joystick";                

    ls->enumDiskMsx35Dbl9Sect    = "MSX 3.5\" doble cara, 9 sectores";     
    ls->enumDiskMsx35Dbl8Sect    = "MSX 3.5\" doble cara, 8 sectores";     
    ls->enumDiskMsx35Sgl9Sect    = "MSX 3.5\" simple cara, 9 sectores";     
    ls->enumDiskMsx35Sgl8Sect    = "MSX 3.5\" simple cara, 8 sectores";     
    ls->enumDiskSvi525Dbl        = "SVI-328 5.25\" doble cara";           
    ls->enumDiskSvi525Sgl        = "SVI-328 5.25\" simple cara";  
    ls->enumDiskSf3Sgl           = "Sega SF-7000 3\" simple cara";           


    //----------------------
    // Configuration related lines
    //----------------------

    ls->confTitle                = "blueMSX - Editor de Configuraci�n de M�quina";
    ls->confConfigText           = "Configuraci�n";
    ls->confSlotLayout           = "Esquema del Slot";
    ls->confMemory               = "Memoria";
    ls->confChipEmulation        = "Emulaci�n de Chip";
    ls->confChipExtras          = "Extras"; 

    ls->confOpenRom             = "Abrirse ROM image"; 
    ls->confSaveTitle            = "blueMSX - Guardar Configuraci�n";
    ls->confSaveText             = "Usted desea sobreescribir la configuraci�n de m�quina?:";
    ls->confSaveAsTitle         = "Guardar Como..."; 
    ls->confSaveAsMachineName    = "Nombre de M�quina:";
    ls->confDiscardTitle         = "blueMSX - Configuraci�n";
    ls->confExitSaveTitle        = "blueMSX - Salir del Editor de Configuraci�n";
    ls->confExitSaveText         = "Quieres descartar cambios de la configuraci�n actual?";

    ls->confSlotLayoutGB         = "Esquema del Slot ";
    ls->confSlotExtSlotGB        = "Slots Externos ";
    ls->confBoardGB             = "Sistema "; 
    ls->confBoardText           = "Sistema tipo:"; 
    ls->confSlotPrimary          = "Primario";
    ls->confSlotExpanded         = "Expandido (cuator subslots)";

    ls->confSlotCart             = "Cartucho";
    ls->confSlot                = "Slot"; 
    ls->confSubslot             = "Subslot"; 

    ls->confMemAdd               = "A�adir...";
    ls->confMemEdit              = "Editar...";
    ls->confMemRemove            = "Borrar";
    ls->confMemSlot              = "Slot";
    ls->confMemAddresss          = "Direcci�n";
    ls->confMemType              = "Tipo";
    ls->confMemRomImage          = "Imagen Rom";
    
    ls->confChipVideoGB          = "Video ";
    ls->confChipVideoChip        = "Chip Video:";
    ls->confChipVideoRam         = "RAM Video:";
    ls->confChipSoundGB          = "Sonido ";
    ls->confChipPsgStereoText    = " PSG Stereo";

    ls->confCmosGB               = "CMOS "; 
    ls->confCmosEnable           = " Activar el CMOS"; 
    ls->confCmosBattery          = " Utilizar una Bater�a Cargada";

    ls->confCpuFreqGB            = "Frecuencia CPU "; 
    ls->confZ80FreqText          = "Frecuencia Z80:"; 
    ls->confR800FreqText         = "Frecuencia R800:"; 
    ls->confFdcGB                = "Regulador De Diskette "; 
    ls->confCFdcNumDrivesText    = "N�mero de unidades:"; 

    ls->confEditMemTitle         = "blueMSX - Editar Mapa";
    ls->confEditMemGB            = "Detalles Mapa ";
    ls->confEditMemType          = "Tipo:";
    ls->confEditMemFile          = "Archivo:";
    ls->confEditMemAddress       = "Direcci�n";
    ls->confEditMemSize          = "Tama�o";
    ls->confEditMemSlot          = "Slot";


    //----------------------
    // Shortcut lines
    //----------------------

    ls->shortcutKey             = "Tecla r�pida"; 
    ls->shortcutDescription     = "Atajo"; 

    ls->shortcutSaveConfig      = "blueMSX -  - Guardar Configuraci�n";
    ls->shortcutOverwriteConfig = "Usted desea sobreescribir la configuraci�n del atajo?:";
    ls->shortcutExitConfig      = "blueMSX - Salir del Editor de Atajos";
    ls->shortcutDiscardConfig   = "Quieres descartar cambios de la configuraci�n actual?";
    ls->shortcutSaveConfigAs    = "blueMSX - Guardar Configuraci�n de Atajos como...";
    ls->shortcutConfigName      = "Nombre de la configuraci�n:";
    ls->shortcutNewProfile      = "< Nuevo Perfil >";
    ls->shortcutConfigTitle     = "blueMSX - Editor de la tarjeta de los atajos";
    ls->shortcutAssign          = "Asigne";
    ls->shortcutPressText       = "Apoyar en la(s) tecla(s) del atajo";
    ls->shortcutScheme          = "Disposici�n:";
    ls->shortcutCartInsert1     = "Insertar Cartucho ROM en slot 1";
    ls->shortcutCartRemove1     = "Sacar Cartucho ROM en slot 1";
    ls->shortcutCartInsert2     = "Insertar Cartucho ROM en slot 2";
    ls->shortcutCartRemove2     = "Sacar Cartucho ROM en slot 2";
    ls->shortcutSpecialMenu1    = "Mostrar el men� especial para cartucho 1 ROM en slot 1";
    ls->shortcutSpecialMenu2    = "Mostrar el men� especial para cartucho 1 ROM en slot 2";
    ls->shortcutCartAutoReset   = "Reiniciar Tras Insertar Cartucho ROM";
    ls->shortcutDiskInsertA     = "Insertar imagen de Disco en Unidad A";
    ls->shortcutDiskDirInsertA  = "Insertar un directorio como disco A"; 
    ls->shortcutDiskRemoveA     = "Sacar imagen de Disco en Unidad A";
    ls->shortcutDiskChangeA     = "Cambiar r�pidamente de Disco en Unidad A";
    ls->shortcutDiskAutoResetA  = "Reiniciar Tras Insertar Disco en Unidad A";
    ls->shortcutDiskInsertB     = "Insertar imagen de Disco en Unidad B";
    ls->shortcutDiskDirInsertB  = "Insertar un directorio como disco B";
    ls->shortcutDiskRemoveB     = "Sacar imagen de Disco en Unidad B";
    ls->shortcutCasInsert       = "Insertar Cinsta de cassette";
    ls->shortcutCasEject        = "Sacar Cinsta de cassette";
    ls->shortcutCasAutorewind   = "Rebobinado Autom�tico o no de Cassette";
    ls->shortcutCasReadOnly     = "Cassette en m�todo s�lo Lectura o no";
    ls->shortcutCasSetPosition  = "Posicionar Cassette";
    ls->shortcutCasRewind       = "Rebobinar Cassette";
    ls->shortcutCasSave         = "Salvar Imagen de Cassette";
    ls->shortcutPrnFormFeed     = "Paso a la p�gina siguiente"; 
    ls->shortcutCpuStateLoad    = "Cargar Estado CPU";
    ls->shortcutCpuStateSave    = "Grabar Estado CPU";
    ls->shortcutCpuStateQload   = "Cargar r�pida Estado CPU";
    ls->shortcutCpuStateQsave   = "Grabar r�pida Estado CPU";
    ls->shortcutAudioCapture    = "Iniciar/Pausar captura audio";
    ls->shortcutScreenshotOrig  = "Grabar Pantalla";
    ls->shortcutScreenshotSmall = "Peque�a captura de la pantalla sin filtro";
    ls->shortcutScreenshotLarge = "Gran captura de la pantalla sin filtro";
    ls->shortcutQuit            = "Salir blueMSX";
    ls->shortcutRunPause        = "Ejecutar/Pausar emulaci�n";
    ls->shortcutStop            = "Parada emulaci�n";
    ls->shortcutResetHard       = "Reinicio Hardware";
    ls->shortcutResetSoft       = "Reinicio Software";
    ls->shortcutResetClean      = "Reinicio Completo";
    ls->shortcutSizeSmall       = "Pasar en m�todo ventana tama�o peque�a";
    ls->shortcutSizeNormal      = "Pasar en m�todo ventana tama�o normal";
    ls->shortcutSizeFullscreen  = "Pasar en m�todo pantalla completa";
    ls->shortcutSizeMinimized   = "Reducir la ventana"; 
    ls->shortcutToggleFullscren = "Balanza m�todo ventana/m�todo pantalla completa";
    ls->shortcutVolumeIncrease  = "Aumentar el volumen sonoro";
    ls->shortcutVolumeDecrease  = "Disminuir el volumen sonoro";
    ls->shortcutVolumeMute      = "Parada el sonido";
    ls->shortcutVolumeStereo    = "Balanza mono/stereo";
    ls->shortcutSwitchMsxAudio  = "Impulsar el bot�n cartucho MSX-AUDIO";
    ls->shortcutSwitchFront     = "Impulsar el bot�n frontal Panasonic";
    ls->shortcutSwitchPause     = "Impulsar el bot�n Pause"; 
    ls->shortcutToggleMouseLock = "Activar/desactivar el bloqueo del rat�n";
    ls->shortcutEmuSpeedMax     = "Velocidad m�xima de la emulaci�n";
    ls->shortcutEmuPlayReverse  = "Rewind emulation";                     // New in 2.8.3
    ls->shortcutEmuSpeedToggle  = "Balanza velocitad m�xima de la emulaci�n"; 
    ls->shortcutEmuSpeedNormal  = "Velocidad normal de la emulaci�n";
    ls->shortcutEmuSpeedInc     = "Aumentar la velocidad de la emulaci�n";
    ls->shortcutEmuSpeedDec     = "Disminuir la velocidad de la emulaci�n";
    ls->shortcutThemeSwitch     = "Cambiar de tema";
    ls->shortcutShowEmuProp     = "Mostrar las propiedades de la emulaci�n";
    ls->shortcutShowVideoProp   = "Mostraz las propiedades video";
    ls->shortcutShowAudioProp   = "Mostrar las propiedades de sonido";
    ls->shortcutShowCtrlProp    = "Mostrar las propiedades de los controles";
    ls->shortcutShowEffectsProp = "Show Effects Properties";     // New in 2.9
    ls->shortcutShowSettProp    = "Mostrar las propiedades de los ajustes";
    ls->shortcutShowPorts       = "Mostrar las propriedades de los puertos";
    ls->shortcutShowLanguage    = "Mostrar di�logo de la idioma";
    ls->shortcutShowMachines    = "Mostrar editor de la m�quina";
    ls->shortcutShowShortcuts   = "Mostrar editor de atajos";
    ls->shortcutShowKeyboard    = "Mostrar editor de controladores/teclado"; 
    ls->shortcutShowMixer       = "Mostrar Mezclador de Audio"; 
    ls->shortcutShowDebugger    = "Mostrar Debugger"; 
    ls->shortcutShowTrainer     = "Mostrar Trainer"; 
    ls->shortcutShowHelp        = "Ver la ayuda";
    ls->shortcutShowAbout       = "Ver la r�brica acerca de blueMSX";
    ls->shortcutShowFiles       = "Mostrar las propiedades de los archivos";
    ls->shortcutToggleSpriteEnable = "Mostrar/ocultar los sprites";
    ls->shortcutToggleFdcTiming = "Sincronizar o no unidade disco"; 
    ls->shortcutToggleNoSpriteLimits = "Toggle Sprites Limitation";                 // New in 2.9
    ls->shortcutEnableMsxKeyboardQuirk = "Emulate MSX Keyboard Quirk";              // New in 2.9
    ls->shortcutToggleCpuTrace  = "Activar/Desactivar Rastro de la CPU"; 
    ls->shortcutVideoLoad       = "Cargar captura video";             
    ls->shortcutVideoPlay       = "Ver la m�s reciente captura video";   
    ls->shortcutVideoRecord     = "Grabar captura video";              
    ls->shortcutVideoStop       = "Parada captura video";                
    ls->shortcutVideoRender     = "Crear video clip";   


    //----------------------
    // Keyboard config lines
    //----------------------

    ls->keyconfigSelectedKey    = "Tecla MSX:"; 
    ls->keyconfigMappedTo       = "Tecla PC :"; 
    ls->keyconfigMappingScheme  = "Configuraci�n del teclado:"; 

    
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

    ls->aboutScrollThanksTo     = "Gracias especiales a: ";
    ls->aboutScrollAndYou       = "y USTED !!!!";
};

#endif
