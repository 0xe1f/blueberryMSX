/*****************************************************************************
** $Source: /cygdrive/d/Private/_SVNROOT/bluemsx/blueMSX/Src/Language/LanguageCatalan.h,v $
**
** $Revision: 1.8 $
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
#ifndef LANGUAGE_CATALAN_H
#define LANGUAGE_CATALAN_H

#include "LanguageStrings.h"
 
void langInitCatalan(LanguageStrings* ls) 
{
    //----------------------
    // Language lines
    //----------------------

    ls->langCatalan             = "Catal�";
    ls->langChineseSimplified   = "Xin�s simplificat";
    ls->langChineseTraditional  = "Xin�s tradicional";
    ls->langDutch               = "Neerland�s";
    ls->langEnglish             = "Angl�s";
    ls->langFinnish             = "Finland�s";
    ls->langFrench              = "Franc�s";
    ls->langGerman              = "Alemany";
    ls->langItalian             = "Itali�";
    ls->langJapanese            = "Japon�s";
    ls->langKorean              = "Kore�";
    ls->langPolish              = "Polon�s";
    ls->langPortuguese          = "Portugu�s";
    ls->langRussian             = "Rus";            // v2.8
    ls->langSpanish             = "Espanyol";
    ls->langSwedish             = "Suec";


    //----------------------
    // Generic lines
    //----------------------

    ls->textDevice              = "Dispositiu:";
    ls->textFilename            = "Nom del fitxer:";
    ls->textFile                = "Fitxer";
    ls->textNone                = "Cap";
    ls->textUnknown             = "Desconegut";


    //----------------------
    // Warning and Error lines
    //----------------------

    ls->warningTitle            = "blueMSX - Av�s";
    ls->warningDiscardChanges   = "Voleu descartar els canvis?";
    ls->warningOverwriteFile    = "Voleu sobreescriure el fitxer?:";
    ls->errorTitle              = "blueMSX - Error";
    ls->errorEnterFullscreen    = "No s'ha pogut entrar en el mode pantalla completa.           \n";
    ls->errorDirectXFailed      = "No s'ha pogut crear els objectes DirectX.           \nFent servir GDI.\nComprobeu les propietat del v�deo.";
    ls->errorNoRomInZip         = "No s'ha pogut trobar un fitxer .rom dins de l'arxiu zip.";
    ls->errorNoDskInZip         = "No s'ha pogut trobar un fitxer .dsk dins de l'arxiu zip.";
    ls->errorNoCasInZip         = "No s'ha pogut trobar un fitxer .cas dins de l'arxiu zip.";
    ls->errorNoHelp             = "No s'ha pogut trobar el fitxer d'ajuda de blueMSX.";
    ls->errorStartEmu           = "No s'ha pogut iniciar l'emulador MSX.";
    ls->errorPortableReadonly   = "El dispositiu port�til �s de nom�s lectura";


    //----------------------
    // File related lines
    //----------------------

    ls->fileRom                 = "Imatge ROM";
    ls->fileAll                 = "Tots els fitxers";
    ls->fileCpuState            = "Estat de la CPU";
    ls->fileVideoCapture        = "Captura de v�deo"; 
    ls->fileDisk                = "Imatge de disc";
    ls->fileCas                 = "Imatge de cinta";
    ls->fileAvi                 = "Videoclip";    


    //----------------------
    // Menu related lines
    //----------------------

    ls->menuNoRecentFiles       = "- no hi ha fitxers recents -";
    ls->menuInsert              = "Insereix";
    ls->menuEject               = "Expulsa";

    ls->menuCartGameReader      = "Game Reader";
    ls->menuCartIde             = "IDE";
    ls->menuCartBeerIde         = "Beer";
    ls->menuCartGIde            = "GIDE";
    ls->menuCartSunriseIde      = "Sunrise";  
    ls->menuCartScsi            = "SCSI";                // New in 2.7
    ls->menuCartMegaSCSI        = "MEGA-SCSI";           // New in 2.7
    ls->menuCartWaveSCSI        = "WAVE-SCSI";           // New in 2.7
    ls->menuCartGoudaSCSI       = "Gouda SCSI";          // New in 2.7
    ls->menuJoyrexPsg           = "Cartutx Joyrex PSG"; // New in 2.9
    ls->menuCartSCC             = "Cartutx SCC";
    ls->menuCartSCCPlus         = "Cartutx SCC-I";
    ls->menuCartFMPac           = "Cartutx FM-PAC";
    ls->menuCartPac             = "Cartutx PAC";
    ls->menuCartHBI55           = "Cartutx Sony HBI-55";
    ls->menuCartInsertSpecial   = "Insereix Especial";
    ls->menuCartMegaRam         = "MegaRAM";
    ls->menuCartExternalRam     = "RAM externa";
    ls->menuCartEseRam          = "Ese-RAM";             // New in 2.7
    ls->menuCartEseSCC          = "Ese-SCC";             // New in 2.7
    ls->menuCartMegaFlashRom    = "Mega Flash ROM";      // New in 2.7

    ls->menuDiskInsertNew       = "Insereix una nova imatge de disc";
    ls->menuDiskInsertCdrom     = "Insereix un CD-Rom";       // New in 2.7
    ls->menuDiskDirInsert       = "Insereix directori";
    ls->menuDiskAutoStart       = "Reinicia despr�s de la inserci�";
    ls->menuCartAutoReset       = "Reinicia despr�s de la inserci�/expulsi�";

    ls->menuCasRewindAfterInsert= "Rebobina despr�s de la inserci�";
    ls->menuCasUseReadOnly      = "Utilitza una imatge de casset nom�s lectura";
    ls->lmenuCasSaveAs          = "Anomena i desa la imatge de casset...";
    ls->menuCasSetPosition      = "Estableix la posici�";
    ls->menuCasRewind           = "Rebobina";

    ls->menuVideoLoad           = "Carrega...";             
    ls->menuVideoPlay           = "Reprodueix la darrera captura";   
    ls->menuVideoRecord         = "Enregistra";              
    ls->menuVideoRecording      = "Enregistrant";           
    ls->menuVideoRecAppend      = "Enregistra (afig)";     
    ls->menuVideoStop           = "Atura";                
    ls->menuVideoRender         = "Renderitza el fitxer de v�deo";   

    ls->menuPrnFormfeed         = "P�gina seg�ent";

    ls->menuZoomNormal          = "Finestra petita";
    ls->menuZoomDouble          = "Finestra normal";
    ls->menuZoomFullscreen      = "Pantalla completa";
    
    ls->menuPropsEmulation      = "Emulaci�";
    ls->menuPropsVideo          = "V�deo";
    ls->menuPropsSound          = "So";
    ls->menuPropsControls       = "Controls";
    ls->menuPropsEffects        = "Effects";               // New in 2.9
    ls->menuPropsSettings       = "Par�metres";
    ls->menuPropsFile           = "Fitxers";
    ls->menuPropsDisk           = "Discs";               // New in 2.7
    ls->menuPropsLanguage       = "Idioma";
    ls->menuPropsPorts          = "Ports";
    
    ls->menuVideoSource         = "Font de la sortida de v�deo";
    ls->menuVideoSourceDefault  = "No hi ha conectada cap font de sortida de v�deo";
    ls->menuVideoChipAutodetect = "Detecci� autom�tica del xip de v�deo";
    ls->menuVideoInSource       = "Font de la entrada de v�deo";
    ls->menuVideoInBitmap       = "Fitxer de mapa de bits";
    
    ls->menuEthInterface        = "Interf�cie Ethernet"; 

    ls->menuHelpHelp            = "Temes d'ajuda";
    ls->menuHelpAbout           = "Al voltant de blueMSX";

    ls->menuFileCart            = "Ranura de cartutx";
    ls->menuFileDisk            = "Unitat de disc";
    ls->menuFileCas             = "Casset";
    ls->menuFilePrn             = "Impressora";
    ls->menuFileLoadState       = "Carrega l'estat de la CPU";
    ls->menuFileSaveState       = "Desa l'estat de la CPU";
    ls->menuFileQLoadState      = "Carrega r�pid l'estat";
    ls->menuFileQSaveState      = "Desa r�pid l'estat";
    ls->menuFileCaptureAudio    = "Captura d'�udio";
    ls->menuFileCaptureVideo    = "Captura de v�deo"; 
    ls->menuFileScreenShot      = "Desa la captura de pantalla";
    ls->menuFileExit            = "Surt";

    ls->menuFileHarddisk        = "Disc dur";
    ls->menuFileHarddiskNoPesent= "No hi ha controladors";
    ls->menuFileHarddiskRemoveAll= "Expulsa tots els discs durs";    // New in 2.7

    ls->menuRunRun              = "Executa";
    ls->menuRunPause            = "Posa en pausa";
    ls->menuRunStop             = "Atura";
    ls->menuRunSoftReset        = "Reinicialitzaci� suau";
    ls->menuRunHardReset        = "Reinicialitzaci� dura";
    ls->menuRunCleanReset       = "Reinicialitzaci� completa";

    ls->menuToolsMachine        = "Editor m�quina";
    ls->menuToolsShortcuts      = "Editor de drecera";
    ls->menuToolsCtrlEditor     = "Controladors / editor de teclat"; 
    ls->menuToolsMixer          = "Mesclador";
    ls->menuToolsLoadMemory     = "Carrega de mem�ria";
    ls->menuToolsDebugger       = "Debugger";               
    ls->menuToolsTrainer        = "Trainer";                
    ls->menuToolsTraceLogger    = "Trace Logger";           

    ls->menuFile                = "Fitxer";
    ls->menuRun                 = "Emulaci�";
    ls->menuWindow              = "Finestra";
    ls->menuOptions             = "Opcions";
    ls->menuTools               = "Eines";
    ls->menuHelp                = "Ajuda";
    

    //----------------------
    // Dialog related lines
    //----------------------

    ls->dlgOK                   = "D'acord";
    ls->dlgOpen                 = "Obri";
    ls->dlgCancel               = "Cancel�la";
    ls->dlgSave                 = "Desa";
    ls->dlgSaveAs               = "Anomena i desa...";
    ls->dlgRun                  = "Executa";
    ls->dlgClose                = "Tanca";

    ls->dlgLoadRom              = "blueMSX - Selecciona i carrega una imatge rom";
    ls->dlgLoadDsk              = "blueMSX - Selecciona i carrega una imatge dsk";
    ls->dlgLoadCas              = "blueMSX - Selecciona i carrega una imatge cas";
    ls->dlgLoadRomDskCas        = "blueMSX - Selecciona i carrega una imatge rom, dsk, o cas";
    ls->dlgLoadRomDesc          = "Tria i carrega una imatge rom:";
    ls->dlgLoadDskDesc          = "Tria i carrega una imatge de disc:";
    ls->dlgLoadCasDesc          = "Tria i carrega una imatge de cinta:";
    ls->dlgLoadRomDskCasDesc    = "Tria i carrega una imatge rom, de disc o de cinta:";
    ls->dlgLoadState            = "Carrega l'estat";
    ls->dlgLoadVideoCapture     = "Load video capture";      
    ls->dlgSaveState            = "Anomena i desa l'estat...";
    ls->dlgSaveCassette         = "blueMSX - Desa la imatge de cinta";
    ls->dlgSaveVideoClipAs      = "Desa i anomena el videoclip...";      
    ls->dlgAmountCompleted      = "Quantitat completada:";          
    ls->dlgInsertRom1           = "Insereix el cartutx ROM en la ranura 1";
    ls->dlgInsertRom2           = "Insereix el cartutx ROM en la ranura 2";
    ls->dlgInsertDiskA          = "Insereix la imatge de disc en la unitat A";
    ls->dlgInsertDiskB          = "Insereix la imatge de disc en la unitat B";
    ls->dlgInsertHarddisk       = "Insereix el disc dur";
    ls->dlgInsertCas            = "Insereix una cinta de casset";
    ls->dlgRomType              = "Tipus de Rom:";
    ls->dlgDiskSize             = "Mida del disc:";             

    ls->dlgTapeTitle            = "blueMSX - Posici� de la cinta";
    ls->dlgTapeFrameText        = "Posici� de la cinta";
    ls->dlgTapeCurrentPos       = "Posci� actual";
    ls->dlgTapeTotalTime        = "Temps total";
    ls->dlgTapeSetPosText       = "Posici� de la cinta:";
    ls->dlgTapeCustom           = "Mostra els fitxers personalitzats";
    ls->dlgTabPosition          = "Posici�";	
    ls->dlgTabType              = "Tipus";
    ls->dlgTabFilename          = "Nom del fitxer:";
    ls->dlgZipReset             = "Reinicia despr�s de la inserci�";

    ls->dlgAboutTitle           = "blueMSX - Al voltant de";

    ls->dlgLangLangText         = "Trieu el idioma que blueMSX emprar�";
    ls->dlgLangLangTitle        = "blueMSX - Idioma";

    ls->dlgAboutAbout           = "AL VOLTANT DE\r\n====";
    ls->dlgAboutVersion         = "Versi�:";
    ls->dlgAboutBuildNumber     = "Muntatge:";
    ls->dlgAboutBuildDate       = "Data:";
    ls->dlgAboutCreat           = "Creat per Daniel Vik";
    ls->dlgAboutDevel           = "DESENVOLUPADORS\r\n========";
    ls->dlgAboutThanks          = "COL�LABORADORS\r\n==========";       // New in 2.7 (retranslate, see english)
    ls->dlgAboutLisence         = "LLIC�NSIA\r\n"
                                  "======\r\n\r\n"
                                  "This software is provided 'as-is', without any express or implied "
                                  "warranty. In no event will the author(s) be held liable for any damages "
                                  "arising from the use of this software.\r\n\r\n"
                                  "Visit www.bluemsx.com for more details.";

    ls->dlgSavePreview          = "Mostra previsualitzaci�";
    ls->dlgSaveDate             = "Temps desat:";

    ls->dlgRenderVideoCapture   = "blueMSX - Rendering Video Capture...";  


    //----------------------
    // Properties related lines
    //----------------------

    ls->propTitle               = "blueMSX - Propietats";
    ls->propEmulation           = "Emulaci�";
    ls->propVideo               = "V�deo";
    ls->propSound               = "So";
    ls->propControls            = "Controls";
    ls->propPerformance         = "Rendiment";
    ls->propEffects             = "Effects";             // New in 2.9
    ls->propSettings            = "Par�metres";
    ls->propFile                = "Fitxers";
    ls->propDisk                = "Discs";              // New in 2.7
    ls->propPorts               = "Ports";
    
    ls->propEmuGeneralGB        = "General ";
    ls->propEmuFamilyText       = "M�quina MSX:";
    ls->propEmuMemoryGB         = "Mem�ria ";
    ls->propEmuRamSizeText      = "Mida de la RAM:";
    ls->propEmuVramSizeText     = "Mida de la VRAM:";
    ls->propEmuSpeedGB          = "Velocitat d'emulaci� ";
    ls->propEmuSpeedText        = "Velocitat d'emulaci�:";
    ls->propEmuFrontSwitchGB    = "Commutadors Panasonic ";
    ls->propEmuFrontSwitch      = " Commutador frontal";
    ls->propEmuNoSpriteLimits   = " Disable Sprites Limitation";  // New in 2.9
    ls->propEnableMsxKeyboardQuirk = " Emulate MSX keyboard quirk";  // New in 2.9
    ls->propEmuFdcTiming        = " Desactiva la sincronitzaci� de la unitat de disc";
    ls->propEmuReversePlay      = " Enable reverse playback"; // New in 2.8.3
    ls->propEmuPauseSwitch      = " Commutador de pausa";
    ls->propEmuAudioSwitch      = " Commutador del cartutx MSX-AUDIO";
    ls->propVideoFreqText       = "Freq��ncia de v�deo:";
    ls->propVideoFreqAuto       = "Auto";
    ls->propSndOversampleText   = "Sobremostra:";
    ls->propSndYkInGB           = "YK-01/YK-10/YK-20 In ";
    ls->propSndMidiInGB         = "MIDI In ";
    ls->propSndMidiOutGB        = "MIDI Out ";
    ls->propSndMidiChannel      = "Canal MIDI:";
    ls->propSndMidiAll          = "Tot";

    ls->propMonMonGB            = "Monitor ";
    ls->propMonTypeText         = "Tipus de monitor:";
    ls->propMonEmuText          = "Emulaci� del monitor:";
    ls->propVideoTypeText       = "Tipus de v�deo:";
    ls->propWindowSizeText      = "Mida de la finestra:";
    ls->propMonHorizStretch     = " Ampliaci� horitzontal";
    ls->propMonVertStretch      = " Ampliaci� vertical";
    ls->propMonDeInterlace      = " Desentrella�at";
    ls->propBlendFrames         = " Barreja els marcs consecutius";
    ls->propMonBrightness       = "Lluminositat:";
    ls->propMonContrast         = "Contrast:";
    ls->propMonSaturation       = "Saturaci�:";
    ls->propMonGamma            = "Gamma:";
    ls->propMonScanlines        = " L�nies d'exploraci�:";
    ls->propMonColorGhosting    = " Modulador RF:";
    ls->propMonEffectsGB        = "Efectes ";

    ls->propPerfVideoDrvGB      = "Controlador de v�deo ";
    ls->propPerfVideoDispDrvText= "Controlador de visualitzaci�:";
    ls->propPerfFrameSkipText   = "Omissi� de marcs:";
    ls->propPerfAudioDrvGB      = "Controlador d'�udio ";
    ls->propPerfAudioDrvText    = "Controlador de so:";
    ls->propPerfAudioBufSzText  = "Mida de la mem�ria interm�dia de so:";
    ls->propPerfEmuGB           = "Emulaci� ";
    ls->propPerfSyncModeText    = "Mode SYNC:";
    ls->propFullscreenResText   = "Resoluci� a pantalla completa:";

    ls->propSndChipEmuGB        = "Emulaci� del xip de so ";
    ls->propSndMsxMusic         = " MSX-MUSIC";
    ls->propSndMsxAudio         = " MSX-AUDIO";
    ls->propSndMoonsound        = " Moonsound";
    ls->propSndMt32ToGm         = " Mapeja MT-32 instruments a General MIDI";

    ls->propPortsLptGB          = "Port paral�lel ";
    ls->propPortsComGB          = "Ports s�rie ";
    ls->propPortsLptText        = "Port:";
    ls->propPortsCom1Text       = "Port 1:";
    ls->propPortsNone           = "Cap";
    ls->propPortsSimplCovox     = "SiMPL / Covox DAC";
    ls->propPortsFile           = "Imprimeix a un fitxer";
    ls->propPortsComFile        = "Envia a un fitxer";
    ls->propPortsOpenLogFile    = "Obri el fitxer de registre";
    ls->propPortsEmulateMsxPrn  = "Emulaci�";

    ls->propSetFileHistoryGB    = "Historial del fitxer ";
    ls->propSetFileHistorySize  = "Nombre d'elements en el historial del fitxer:";
    ls->propSetFileHistoryClear = "Neteja l'historial";
    ls->propFileTypes           = " Registra els tipus de fitxer amb blueMSX (.rom, .dsk, .cas, .sta)";
    ls->propWindowsEnvGB        = "Entorn Windows "; 
    ls->propSetScreenSaver      = " Desactiva l'estalvi de pantalla quan s'execute blueMSX";
    ls->propDisableWinKeys      = " Funci� autom�tica MSX per les tecles de men� de Windows";  
    ls->propPriorityBoost       = " Augmenta la prioritat de blueMSX";
    ls->propScreenshotPng       = " Empra captures de pantalla Portable Network Graphics (.png)";
    ls->propEjectMediaOnExit    = " Eject media when blueMSX exits";        // New in 2.8
    ls->propClearHistory        = "Esteu segur que voleu buidar l'historial del fitxer?";
    ls->propOpenRomGB           = "Obri el di�log Rom ";
    ls->propDefaultRomType      = "Tipus predeterminat de Rom:";
    ls->propGuessRomType        = "Endevina el tipus de Rrom";

    ls->propSettDefSlotGB       = "Arrossega i deixa anar ";
    ls->propSettDefSlots        = "Insereix el Rom en:";
    ls->propSettDefSlot         = " Ranura";
    ls->propSettDefDrives       = "Insereix el disquet en:";
    ls->propSettDefDrive        = " Unitat";

    ls->propThemeGB             = "Tema ";
    ls->propTheme               = "Tema:";

    ls->propCdromGB             = "CD-ROM ";         // New in 2.7
    ls->propCdromMethod         = "M�tode d'acc�s:";  // New in 2.7
    ls->propCdromMethodNone     = "Cap";            // New in 2.7
    ls->propCdromMethodIoctl    = "IOCTL";           // New in 2.7
    ls->propCdromMethodAspi     = "ASPI";            // New in 2.7
    ls->propCdromDrive          = "Unitat:";          // New in 2.7

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
    ls->enumVideoMonGrey        = "Blanc i negre";
    ls->enumVideoMonGreen       = "Verd";
    ls->enumVideoMonAmber       = "Ambre";

    ls->enumVideoTypePAL        = "PAL";
    ls->enumVideoTypeNTSC       = "NTSC";

    ls->enumVideoEmuNone        = "Cap";
    ls->enumVideoEmuYc          = "Cable Y/C (n�tid)";
    ls->enumVideoEmuMonitor     = "Monitor";
    ls->enumVideoEmuYcBlur      = "Cable Y/C soroll�s (n�tid)";
    ls->enumVideoEmuComp        = "Compost (borr�s)";
    ls->enumVideoEmuCompBlur    = "Compost soroll�s (borr�s)";
    ls->enumVideoEmuScale2x     = "Escala 2x";
    ls->enumVideoEmuHq2x        = "Hq2x";

    ls->enumVideoSize1x         = "Normal - 320x200";
    ls->enumVideoSize2x         = "Doble - 640x400";
    ls->enumVideoSizeFullscreen = "Pantalla completa";

    ls->enumVideoDrvDirectDrawHW= "Acceleraci� DirectDraw de maquinari";  
    ls->enumVideoDrvDirectDraw  = "DirectDraw";
    ls->enumVideoDrvGDI         = "GDI";
    ls->enumVideoDrvD3D         = "Direct3D";

    ls->enumVideoFrameskip0     = "Cap";
    ls->enumVideoFrameskip1     = "1 marc";
    ls->enumVideoFrameskip2     = "2 marcs";
    ls->enumVideoFrameskip3     = "3 marcs";
    ls->enumVideoFrameskip4     = "4 marcs";
    ls->enumVideoFrameskip5     = "5 marcs";

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

    ls->enumSoundDrvNone        = "Sense so";
    ls->enumSoundDrvWMM         = "Controlador WMM";
    ls->enumSoundDrvDirectX     = "Controlador DirectX";

    ls->enumEmuSync1ms          = "Sincronitza al refresc de MSX";
    ls->enumEmuSyncAuto         = "Auto (r�pid)";
    ls->enumEmuSyncNone         = "Cap";
    ls->enumEmuSyncVblank       = "Sincronitzaci� sobre PC Vertical Blank";
    ls->enumEmuAsyncVblank      = "Desincronitzaci� PC Vblank";             

    ls->enumControlsJoyNone     = "Cap";
    ls->enumControlsJoyMouse    = "Ratol�";
    ls->enumControlsJoyTetris2Dongle = "Tetris 2 Dongle";
    ls->enumControlsJoyTMagicKeyDongle = "MagicKey Dongle";
    ls->enumControlsJoy2Button = "Palanca de control de 2 botons";                   
    ls->enumControlsJoyGunstick  = "Gun Stick";                         
    ls->enumControlsJoyAsciiLaser="ASCII Plus-X Terminator Laser";      
    ls->enumControlsArkanoidPad  ="Palanca de control de Arkanoid Pad";                   // New in 2.7.1
    ls->enumControlsJoyColeco = "Palanca de control de ColecoVision";                

    ls->enumDiskMsx35Dbl9Sect    = "MSX 3.5\" Dues cares, 9 Sectors";     
    ls->enumDiskMsx35Dbl8Sect    = "MSX 3.5\" Dues cares, 8 Sectors";     
    ls->enumDiskMsx35Sgl9Sect    = "MSX 3.5\" Una cara, 9 Sectors";     
    ls->enumDiskMsx35Sgl8Sect    = "MSX 3.5\" Una cara, 8 Sectors";     
    ls->enumDiskSvi525Dbl        = "SVI-328 5.25\" Dues cares";           
    ls->enumDiskSvi525Sgl        = "SVI-328 5.25\" Una cara"; 
    ls->enumDiskSf3Sgl           = "Sega SF-7000 3\" Una cara";            


    //----------------------
    // Configuration related lines
    //----------------------

    ls->confTitle               = "blueMSX - Editor de configuraci� de la m�quina";
    ls->confConfigText          = "Nom del perfil";
    ls->confSlotLayout          = "Format de la ranura";
    ls->confMemory              = "Mem�ria";
    ls->confChipEmulation       = "Emulaci� del xip";
    ls->confChipExtras          = "Extras";

    ls->confOpenRom             = "Obri la imatge ROM";
    ls->confSaveTitle           = "blueMSX - Desa la configuraci�";
    ls->confSaveText            = "Voleu sobreescriure la configuraci� de la m�quina? :";
    ls->confSaveAsTitle         = "Anomena i desa la configuraci�...";
    ls->confSaveAsMachineName   = "Nom de la m�quina:";
    ls->confDiscardTitle        = "blueMSX - Configuraci�";
    ls->confExitSaveTitle       = "blueMSX - Surt de l'editor de configuraci�";
    ls->confExitSaveText        = "Voleu descartar els canvis de la configuraci� actual?";

    ls->confSlotLayoutGB        = "Format de la ranura ";
    ls->confSlotExtSlotGB       = "Ranures externes ";
    ls->confBoardGB             = "Placa ";
    ls->confBoardText           = "Tipus de placa:";
    ls->confSlotPrimary         = "Prim�ria";
    ls->confSlotExpanded        = "Expandida (quatre subranures)";

    ls->confSlotCart            = "Cartutx";
    ls->confSlot                = "Ranura";
    ls->confSubslot             = "Subranura";

    ls->confMemAdd              = "Afegeix...";
    ls->confMemEdit             = "Edita...";
    ls->confMemRemove           = "Elimina";
    ls->confMemSlot             = "Ranura";
    ls->confMemAddresss         = "Adre�a";
    ls->confMemType             = "Tipus";
    ls->confMemRomImage         = "Imatge rom";

    ls->confChipVideoGB          = "V�deo ";
    ls->confChipVideoChip        = "Xip de v�deo:";
    ls->confChipVideoRam         = "RAM de v�deo:";
    ls->confChipSoundGB          = "So ";
    ls->confChipPsgStereoText    = " PSG est�reo";

    ls->confCmosGB               = "CMOS ";
    ls->confCmosEnable           = " Activa la CMOS";
    ls->confCmosBattery          = " Utilitza la bateria carregada";

    ls->confCpuFreqGB            = "Freq��ncia de la CPU ";
    ls->confZ80FreqText          = "Freq��ncia del Z80:";
    ls->confR800FreqText         = "Freq��ncia del R800:";
    ls->confFdcGB                = "Controlador del disquet ";
    ls->confCFdcNumDrivesText    = "Nombre d'unitats:";

    ls->confEditMemTitle         = "blueMSX - Edita el mapejador";
    ls->confEditMemGB            = "Detalls del mapejador ";
    ls->confEditMemType          = "Tipus:";
    ls->confEditMemFile          = "Fitxer:";
    ls->confEditMemAddress       = "Adre�a";
    ls->confEditMemSize          = "Mida";
    ls->confEditMemSlot          = "Ranura";


    //----------------------
    // Shortcut lines
    //----------------------

    ls->shortcutKey             = "Acci�";
    ls->shortcutDescription     = "Drecera";

    ls->shortcutSaveConfig      = "blueMSX - Desa la configuraci�";
    ls->shortcutOverwriteConfig = "Voleu sobreescriure la configuraci� de drecera? :";
    ls->shortcutExitConfig      = "blueMSX - Surt de l'editor de drecera";
    ls->shortcutDiscardConfig   = "Voleu descartar els canvis de la configuraci� actual?";
    ls->shortcutSaveConfigAs    = "blueMSX - Anomena i desa la configuraci� de drecera...";
    ls->shortcutConfigName      = "Nom de la configuraci�:";
    ls->shortcutNewProfile      = "< Nou perfil >";
    ls->shortcutConfigTitle     = "blueMSX - Editor de mapatge de drecera";
    ls->shortcutAssign          = "Assigna";
    ls->shortcutPressText       = "Prem la tecla(es) de drecera:";
    ls->shortcutScheme          = "Esquema de mapatge:";
    ls->shortcutCartInsert1     = "Inserta el cartutx 1";
    ls->shortcutCartRemove1     = "Trau el cartutx 1";
    ls->shortcutCartInsert2     = "Inserta el cartutx 2";
    ls->shortcutCartRemove2     = "Trau el cartutx 2";
    ls->shortcutSpecialMenu1    = "Mostra el men� especial per al cartutx 1";
    ls->shortcutSpecialMenu2    = "Mostra el men� especial per al cartutx 2";
    ls->shortcutCartAutoReset   = "Reinicia l'emulador quan s'inserisca el cartutx";
    ls->shortcutDiskInsertA     = "Inserta el disquet A";
    ls->shortcutDiskDirInsertA  = "Inserta el directori com a disquet A";
    ls->shortcutDiskRemoveA     = "Expulsa el disquet A";
    ls->shortcutDiskChangeA     = "Expulsa r�pid el disquet A";
    ls->shortcutDiskAutoResetA  = "Reinicia l'emulador quan s'inserisca el disquet";
    ls->shortcutDiskInsertB     = "Inserta el disquet B";
    ls->shortcutDiskDirInsertB  = "Inserta el directori com a disquet B";
    ls->shortcutDiskRemoveB     = "Expulsa el disquet B";
    ls->shortcutCasInsert       = "Inserta el casset";
    ls->shortcutCasEject        = "Expulsa el casset";
    ls->shortcutCasAutorewind   = "Commuta el rebobinat autom�tic en el casset";
    ls->shortcutCasReadOnly     = "Commuta el casset nom�s de lectura";
    ls->shortcutCasSetPosition  = "Estableix la posici� de la cinta";
    ls->shortcutCasRewind       = "Rebobina el casset";
    ls->shortcutCasSave         = "Desa la imatge del casset";
    ls->shortcutPrnFormFeed     = "Pas a la p�gina seg�ent";
    ls->shortcutCpuStateLoad    = "Carrega l'estat de la CPU";
    ls->shortcutCpuStateSave    = "Desa l'estat de la CPU";
    ls->shortcutCpuStateQload   = "Carrega r�pid l'estat de la CPU";
    ls->shortcutCpuStateQsave   = "Desa r�pid l'estat de la CPU";
    ls->shortcutAudioCapture    = "Inicia/atura la captura d'�udio";
    ls->shortcutScreenshotOrig  = "Fes una captura de pantalla";
    ls->shortcutScreenshotSmall = "Captura de pantalla petita no filtrada";
    ls->shortcutScreenshotLarge = "Captura de pantalla gran no filtrada";
    ls->shortcutQuit            = "Surt de blueMSX";
    ls->shortcutRunPause        = "Executa/posa en pausa l'emulaci�";
    ls->shortcutStop            = "Atura l'emulaci�";
    ls->shortcutResetHard       = "Reinicialitzaci� dura";
    ls->shortcutResetSoft       = "Reinicialitzaci� suau";
    ls->shortcutResetClean      = "Reinicialitzaci� completa";
    ls->shortcutSizeSmall       = "Fixa la dimensi� de finestra petita";
    ls->shortcutSizeNormal      = "Fixa la dimensi� de finestra normal";
    ls->shortcutSizeFullscreen  = "Fixa la pantalla completa";
    ls->shortcutSizeMinimized   = "Minimitza la finestra";
    ls->shortcutToggleFullscren = "Commuta la pantalla completa";
    ls->shortcutVolumeIncrease  = "Augmenta el volum";
    ls->shortcutVolumeDecrease  = "Redueix el volum";
    ls->shortcutVolumeMute      = "Silencia el so";
    ls->shortcutVolumeStereo    = "Commuta mono/est�reo";
    ls->shortcutSwitchMsxAudio  = "Commuta el commutador MSX-AUDIO";
    ls->shortcutSwitchFront     = "Commuta el commutador frontal Panasonic";
    ls->shortcutSwitchPause     = "Commuta el commutador de pausa";
    ls->shortcutToggleMouseLock = "Commuta el blocatge del ratol�";
    ls->shortcutEmuSpeedMax     = "Velocitat d'emulaci� m�xima";
    ls->shortcutEmuPlayReverse  = "Rewind emulation";                     // New in 2.8.3
    ls->shortcutEmuSpeedToggle  = "Commuta la velocitat d'emulaci� m�xima";
    ls->shortcutEmuSpeedNormal  = "Velocitat d'emulaci� normal";
    ls->shortcutEmuSpeedInc     = "Augmenta la velocitat d'emulaci�";
    ls->shortcutEmuSpeedDec     = "Redueix la velocitat d'emulaci�";
    ls->shortcutThemeSwitch     = "Commuta el tema";
    ls->shortcutShowEmuProp     = "Mostra les propietats d'emulaci�";
    ls->shortcutShowVideoProp   = "Mostra les propietats de v�deo";
    ls->shortcutShowAudioProp   = "Mostra les propietats d'�udio";
    ls->shortcutShowCtrlProp    = "Mostra les propietats dels controls";
    ls->shortcutShowEffectsProp = "Show Effects Properties";     // New in 2.9
    ls->shortcutShowSettProp    = "Mostra les propietats dels par�metres";
    ls->shortcutShowPorts       = "Mostra les propietats dels ports";
    ls->shortcutShowLanguage    = "Mostra el di�log de l'idioma";
    ls->shortcutShowMachines    = "Mostra l'editor de la m�quina";
    ls->shortcutShowShortcuts   = "Mostra l'editor de drecera";
    ls->shortcutShowKeyboard    = "Mostra l'editor de controladors / teclat";
    ls->shortcutShowMixer       = "Mostra el mesclador";
    ls->shortcutShowDebugger    = "Mostra el depurador";
    ls->shortcutShowTrainer     = "Mostrar Trainer";
    ls->shortcutShowHelp        = "Mostra el di�log d'ajuda";
    ls->shortcutShowAbout       = "Mostra el di�log 'Quant a'";    
    ls->shortcutShowFiles       = "Mostra les propietats dels fitxers";
    ls->shortcutToggleSpriteEnable = "Mostra/Amaga els Sprites";
    ls->shortcutToggleFdcTiming = "Activa/Desactiva la sincronitzaci� de la unitat de disc";
    ls->shortcutToggleNoSpriteLimits = "Toggle Sprites Limitation";                 // New in 2.9
    ls->shortcutEnableMsxKeyboardQuirk = "Emulate MSX Keyboard Quirk";              // New in 2.9
    ls->shortcutToggleCpuTrace  = "Activa/Desactiva el rastre de la CPU";
    ls->shortcutVideoLoad       = "Carrega la captura de v�deo";             
    ls->shortcutVideoPlay       = "Reprodueix la darrera captura de v�deo";   
    ls->shortcutVideoRecord     = "Enregistra la captura de v�deo";              
    ls->shortcutVideoStop       = "Atura la captura de v�deo";                
    ls->shortcutVideoRender     = "Renderitza el fitxer de v�deo";   


    //----------------------
    // Keyboard config lines
    //----------------------    
 
    ls->keyconfigSelectedKey    = "Tecla seleccionada:";
    ls->keyconfigMappedTo       = "Mapejat a:";
    ls->keyconfigMappingScheme  = "Esquema de mapatge:";

    
    //----------------------
    // Rom type lines
    //----------------------

    ls->romTypeStandard         = "Est�ndard";
    ls->romTypeZenima80         = "Zemina 80 in 1";
    ls->romTypeZenima90         = "Zemina 90 in 1";
    ls->romTypeZenima126        = "Zemina 126 in 1";
    ls->romTypeSccMirrored      = "SCC replicat";
    ls->romTypeSccExtended      = "SCC est�s";
    ls->romTypeKonamiGeneric    = "Konami Generic";
    ls->romTypeMirrored         = "ROM replicat";
    ls->romTypeNormal           = "ROM normal";
    ls->romTypeDiskPatch        = "Normal + peda� de disc";
    ls->romTypeCasPatch         = "Normal + peda� de casset";
    ls->romTypeTc8566afFdc      = "Controladora de disc TC8566AF";
    ls->romTypeTc8566afTrFdc    = "TC8566AF Turbo-R Disk Controller";
    ls->romTypeMicrosolFdc      = "Controladora de disc Microsol";
    ls->romTypeNationalFdc      = "Controladora de disc National";
    ls->romTypePhilipsFdc       = "Controladora de disc Philips";
    ls->romTypeSvi707Fdc        = "Controladora de disc SVI-707";
    ls->romTypeSvi738Fdc        = "Controladora de disc SVI-738";
    ls->romTypeMappedRam        = "RAM mapejada";
    ls->romTypeMirroredRam1k    = "1kB de RAM replicada";
    ls->romTypeMirroredRam2k    = "2kB Mirrored RAM";
    ls->romTypeNormalRam        = "RAM normal";
    ls->romTypeTurborPause      = "Pausa del Turbo-R";
    ls->romTypeF4deviceNormal   = "Dispositiu F4 normal";
    ls->romTypeF4deviceInvert   = "Dispositiu F4 invertit";
    ls->romTypeTurborTimer      = "Temporitzador del Turbo-R";
    ls->romTypeNormal4000       = "Normal 4000h";
    ls->romTypeNormalC000       = "Normal C000h";
    ls->romTypeExtRam           = "RAM externa";
    ls->romTypeExtRam16         = "16kB externa de RAM";
    ls->romTypeExtRam32         = "32kB externa de RAM";
    ls->romTypeExtRam48         = "48kB externa de RAM";
    ls->romTypeExtRam64         = "64kB externa de RAM";
    ls->romTypeExtRam512        = "RAM externa de 512kB";
    ls->romTypeExtRam1mb        = "RAM externa de 1MB";
    ls->romTypeExtRam2mb        = "RAM externa de 2MB";
    ls->romTypeExtRam4mb        = "RAM externa de 4MB";
    ls->romTypeSvi328Cart       = "Cartutx del SVI-328";
    ls->romTypeSvi328Fdc        = "Controladora de disc del SVI-328";
    ls->romTypeSvi328Prn        = "Impressora del SVI-328";
    ls->romTypeSvi328Uart       = "Port s�rie del SVI-328";
    ls->romTypeSvi328col80      = "Tarja de 80 columnes del SVI-328 80";
    ls->romTypeSvi727col80      = "Tarja de 80 columnes del SVI-727";
    ls->romTypeColecoCart       = "Cartutx Coleco";
    ls->romTypeSg1000Cart       = "Cartutx SG-1000";
    ls->romTypeSc3000Cart       = "Cartutx SC-3000";
    ls->romTypeMsxPrinter       = "Impressora MSX";
    ls->romTypeTurborPcm        = "Xip PCM del Turbo-R";
    ls->romTypeNms8280Digitiz   = "Digitalitzador del Philips NMS-8280";
    ls->romTypeHbiV1Digitiz     = "Digitalitzador del Sony HBI-V1";
    
    
    //----------------------
    // Debug type lines
    // Note: Only needs translation if debugger is translated
    //----------------------

    ls->dbgMemVisible           = "Mem�ria visible";
    ls->dbgMemRamNormal         = "Normal";
    ls->dbgMemRamMapped         = "Mapejat";
    ls->dbgMemYmf278            = "RAM de mostra del YMF278";
    ls->dbgMemAy8950            = "RAM de mosstra del AY8950";
    ls->dbgMemScc               = "Mem�ria";

    ls->dbgCallstack            = "Callstack";

    ls->dbgRegs                 = "Registres";
    ls->dbgRegsCpu              = "Registres de la CPU";
    ls->dbgRegsYmf262           = "Registres del YMF262";
    ls->dbgRegsYmf278           = "Registres del YMF278";
    ls->dbgRegsAy8950           = "Registres del AY8950";
    ls->dbgRegsYm2413           = "Registres del YM2413";

    ls->dbgDevRamMapper         = "Mapejador de RAM";
    ls->dbgDevRam               = "RAM";
    ls->dbgDevF4Device          = "Dispositiu F4";
    ls->dbgDevKorean80          = "80 core�";
    ls->dbgDevKorean90          = "90 core�";
    ls->dbgDevKorean128         = "128 core�";
    ls->dbgDevFdcMicrosol       = "Microsol FDC";
    ls->dbgDevPrinter           = "Impressora";
    ls->dbgDevSviFdc            = "SVI FDC";
    ls->dbgDevSviPrn            = "Impressora del SVI";
    ls->dbgDevSvi80Col          = "80 columnes del SVI";
    ls->dbgDevRtc               = "RTC";
    ls->dbgDevTrPause           = "Pausa del TR";


    //----------------------
    // Debug type lines
    // Note: Can only be translated to european languages
    //----------------------

    ls->aboutScrollThanksTo     = "Agra�ments especials a: ";
    ls->aboutScrollAndYou       = "i a TU !!!!";
};

#endif
