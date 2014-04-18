/*****************************************************************************
** $Source: /cygdrive/d/Private/_SVNROOT/bluemsx/blueMSX/Src/Language/LanguageSwedish.h,v $
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
#ifndef LANGUAGE_SWEDISH_H
#define LANGUAGE_SWEDISH_H

#include "LanguageStrings.h"

void langInitSwedish(LanguageStrings* ls) 
{
    //----------------------
    // Language lines
    //----------------------

    ls->langCatalan             = "Catalan";
    ls->langChineseSimplified   = "Kinesiska F�renklad";
    ls->langChineseTraditional  = "Kinesiska Traditionell";
    ls->langDutch               = "Holl�ndska";
    ls->langEnglish             = "Engelska";
    ls->langFinnish             = "Finska";
    ls->langFrench              = "Franska";
    ls->langGerman              = "Tyska";
    ls->langItalian             = "Italienska";
    ls->langJapanese            = "Japanska";
    ls->langKorean              = "Koreanska";
    ls->langPolish              = "Polska";
    ls->langPortuguese          = "Portugisiska";
    ls->langRussian             = "Ryska";            // v2.8
    ls->langSpanish             = "Spanska";
    ls->langSwedish             = "Svenska";


    //----------------------
    // Generic lines
    //----------------------

    ls->textDevice              = "Enhet:";
    ls->textFilename            = "Filnamn:";
    ls->textFile                = "Fil";
    ls->textNone                = "Ingen";
    ls->textUnknown             = "Ok�nd";


    //----------------------
    // Warning and Error lines
    //----------------------

    ls->warningTitle            = "blueMSX - Varning";
    ls->warningDiscardChanges   = "Vill du st�nga verktyget utan att spara dina �ndringar?";
    ls->warningOverwriteFile    = "Vill du skriva �ver filen:";
    ls->errorTitle              = "blueMSX - Fel";
    ls->errorEnterFullscreen    = "Misslyckades att byta till fullsk�rm.           \n";
    ls->errorDirectXFailed      = "Misslyckades att skapa DirectX objekt.          \nAnv�nder GDI ist�llet.\nKontrollera video inst�llningarna.";
    ls->errorNoRomInZip         = "Kunde inte hitta en .rom fil i zip arkivet.";
    ls->errorNoDskInZip         = "Kunde inte hitta en .dsk fil i zip arkivet.";
    ls->errorNoCasInZip         = "Kunde inte hitta en .cas fil i zip arkivet.";
    ls->errorNoHelp             = "Kunde inte hitta hj�lpfilen.";
    ls->errorStartEmu           = "Misslyckades att starta emulatorn.";
    ls->errorPortableReadonly   = "Flyttbar enhet �r inte skrivbar";


    //----------------------
    // File related lines
    //----------------------

    ls->fileRom                 = "Rom fil";
    ls->fileAll                 = "Alla Filer";
    ls->fileCpuState            = "CPU-tillst�nd";
    ls->fileVideoCapture        = "Videoinspelning"; 
    ls->fileDisk                = "Diskettfil";
    ls->fileCas                 = "Kassettfil";
    ls->fileAvi                 = "Videofil";    


    //----------------------
    // Menu related lines
    //----------------------

    ls->menuNoRecentFiles       = "- ingen filhistoria -";
    ls->menuInsert              = "S�tt in";
    ls->menuEject               = "Ta ur";

    ls->menuCartGameReader      = "Game Reader";
    ls->menuCartIde             = "IDE";
    ls->menuCartBeerIde         = "Beer";
    ls->menuCartGIde            = "GIDE";
    ls->menuCartSunriseIde      = "Sunrise";  
    ls->menuCartScsi            = "SCSI";                // New in 2.7
    ls->menuCartMegaSCSI        = "MEGA-SCSI";           // New in 2.7
    ls->menuCartWaveSCSI        = "WAVE-SCSI";           // New in 2.7
    ls->menuCartGoudaSCSI       = "Gouda SCSI";          // New in 2.7
    ls->menuJoyrexPsg           = "Joyrex PSG Cartridge"; // New in 2.9
    ls->menuCartSCC             = "SCC Cartridge";
    ls->menuCartSCCPlus         = "SCC-I Cartridge";
    ls->menuCartFMPac           = "FM-PAC Cartridge";
    ls->menuCartPac             = "PAC Cartridge";
    ls->menuCartHBI55           = "Sony HBI-55 Cartridge";
    ls->menuCartInsertSpecial   = "S�tt in Special";
    ls->menuCartMegaRam         = "MegaRAM";
    ls->menuCartExternalRam     = "Externt RAM";
    ls->menuCartEseRam          = "Ese-RAM";             // New in 2.7
    ls->menuCartEseSCC          = "Ese-SCC";             // New in 2.7
    ls->menuCartMegaFlashRom    = "Mega Flash ROM";      // New in 2.7

    ls->menuDiskInsertNew       = "S�tt in ny diskett fil";
    ls->menuDiskInsertCdrom     = "S�tt in CD-Rom";      // New in 2.7
    ls->menuDiskDirInsert       = "S�tt in mapp";
    ls->menuDiskAutoStart       = "Starta om efter ins�ttning/urdragning";
    ls->menuCartAutoReset       = "Starta om efter ins�ttning/urdragning";

    ls->menuCasRewindAfterInsert= "Spola tillbaka vid ins�ttning";
    ls->menuCasUseReadOnly      = "Till�t endast l�sning av kassett";
    ls->lmenuCasSaveAs          = "Spara kassett som...";
    ls->menuCasSetPosition      = "S�tt position";
    ls->menuCasRewind           = "Spola tillbaka";

    ls->menuVideoLoad           = "Ladda...";             
    ls->menuVideoPlay           = "Spela upp senaste";   
    ls->menuVideoRecord         = "Spela in";              
    ls->menuVideoRecording      = "Spelar in";           
    ls->menuVideoRecAppend      = "Spela in (l�gg till)";     
    ls->menuVideoStop           = "Stopp";                
    ls->menuVideoRender         = "Spara videofil";   

    ls->menuPrnFormfeed         = "Pappersmatning";

    ls->menuZoomNormal          = "Normal storlek";
    ls->menuZoomDouble          = "Dubbel storlek";
    ls->menuZoomFullscreen      = "Fullsk�rm";
    
    ls->menuPropsEmulation      = "Emulering";
    ls->menuPropsVideo          = "Video";
    ls->menuPropsSound          = "Ljud";
    ls->menuPropsControls       = "Kontroller";
    ls->menuPropsEffects        = "Effekter";               // New in 2.9
    ls->menuPropsSettings       = "Inst�llningar";
    ls->menuPropsFile           = "Filer";
    ls->menuPropsDisk           = "Enheter";               // New in 2.7
    ls->menuPropsLanguage       = "Spr�k";
    ls->menuPropsPorts          = "Portar";
    
    ls->menuVideoSource         = "Video ut k�lla";
    ls->menuVideoSourceDefault  = "Ingen videok�lla inkopplad";
    ls->menuVideoChipAutodetect = "Automatisk detektering av video chip";    
    ls->menuVideoInSource       = "Video in k�lla";
    ls->menuVideoInBitmap       = "Bitmap fil";
    
    ls->menuEthInterface        = "N�tverksanslutning"; 

    ls->menuHelpHelp            = "Hj�lp";
    ls->menuHelpAbout           = "Om blueMSX";

    ls->menuFileCart            = "Cartridge slot";
    ls->menuFileDisk            = "Diskettstation";
    ls->menuFileCas             = "Kassett";
    ls->menuFilePrn             = "Skrivare";
    ls->menuFileLoadState       = "L�s in CPU-tillst�nd";
    ls->menuFileSaveState       = "Spara CPU-tillst�nd";
    ls->menuFileQLoadState      = "Snabbladda CPU-tillst�nd";
    ls->menuFileQSaveState      = "Snabbspara CPU-tillst�nd";
    ls->menuFileCaptureAudio    = "Spara ljud";
    ls->menuFileCaptureVideo    = "Videoinspelning"; 
    ls->menuFileScreenShot      = "Spara sk�rmdump";
    ls->menuFileExit            = "Avsluta";

    ls->menuFileHarddisk        = "H�rddisk";
    ls->menuFileHarddiskNoPesent= "Inga enheter tillg�ngliga";
    ls->menuFileHarddiskRemoveAll= "Ta ur alla h�rddiskar";    // New in 2.7

    ls->menuRunRun              = "K�r";
    ls->menuRunPause            = "Paus";
    ls->menuRunStop             = "Stanna";
    ls->menuRunSoftReset        = "Mjuk Omstart";
    ls->menuRunHardReset        = "H�rd Omstart";
    ls->menuRunCleanReset       = "Full Omstart";

    ls->menuToolsMachine        = "Konfigureringsverktyg";
    ls->menuToolsShortcuts      = "Kortkommando Verktyg";
    ls->menuToolsKeyboard       = "Tangentbordseditor";
    ls->menuToolsCtrlEditor     = "Kontrollers / Tangenbordseditor"; 
    ls->menuToolsMixer          = "Mixer";
    ls->menuToolsLoadMemory     = "Ladda Minne";
    ls->menuToolsDebugger       = "Avlusare";               
    ls->menuToolsTrainer        = "Spelfusk";                
    ls->menuToolsTraceLogger    = "Sp�rutskrift";           

    ls->menuFile                = "Arkiv";
    ls->menuRun                 = "Emulering";
    ls->menuWindow              = "F�nster";
    ls->menuOptions             = "Egenskaper";
    ls->menuTools               = "Verktyg";
    ls->menuHelp                = "Hj�lp";
    

    //----------------------
    // Dialog related lines
    //----------------------

    ls->dlgOK                   = "OK";
    ls->dlgOpen                 = "�ppna";
    ls->dlgCancel               = "Avbryt";
    ls->dlgSave                 = "Spara";
    ls->dlgSaveAs               = "Spara Som...";
    ls->dlgRun                  = "K�r";
    ls->dlgClose                = "St�ng";

    ls->dlgLoadRom              = "blueMSX - Ladda en rom fil";
    ls->dlgLoadDsk              = "blueMSX - Ladda en dsk fil";
    ls->dlgLoadCas              = "blueMSX - Ladda en cas fil";
    ls->dlgLoadRomDskCas        = "blueMSX - Ladda en rom, dsk eller cas fil";
    ls->dlgLoadRomDesc          = "V�lj en cartridge fil:";
    ls->dlgLoadDskDesc          = "V�lj en diskett fil:";
    ls->dlgLoadCasDesc          = "V�lj en kassett fil:";
    ls->dlgLoadRomDskCasDesc    = "V�lj en fil:";
    ls->dlgLoadState            = "Ladda CPU-tillst�nd";
    ls->dlgLoadVideoCapture     = "Ladda videoinspelning";      
    ls->dlgSaveState            = "Spara CPU-tillst�nd";
    ls->dlgSaveCassette         = "blueMSX - Spara Kassett";
    ls->dlgSaveVideoClipAs      = "Spara videoinspeling som...";      
    ls->dlgAmountCompleted      = "Andel f�rdigt:";          
    ls->dlgInsertRom1           = "S�tt in ROM cartridge i slot 1";
    ls->dlgInsertRom2           = "S�tt in ROM cartridge i slot 2";
    ls->dlgInsertDiskA          = "S�tt in diskett i diskettstation A";
    ls->dlgInsertDiskB          = "S�tt in diskett i diskettstation B";
    ls->dlgInsertHarddisk       = "S�tt in h�rddisk";
    ls->dlgInsertCas            = "S�tt in kassettband";
    ls->dlgRomType              = "Rom Typ:";
    ls->dlgDiskSize             = "Diskettstorlek:";             

    ls->dlgTapeTitle            = "blueMSX - Kassettposition";
    ls->dlgTapeFrameText        = "Kassettposition";
    ls->dlgTapeCurrentPos       = "Aktuell position";
    ls->dlgTapeTotalTime        = "Total l�ngd";
    ls->dlgTapeSetPosText       = "Kassettposition:";
    ls->dlgTapeCustom           = "Visa Specialfiler";
    ls->dlgTabPosition          = "Position";
    ls->dlgTabType              = "Typ";
    ls->dlgTabFilename          = "Filnamn";
    ls->dlgZipReset             = "Starta om efter ins�ttning";
    
    ls->dlgAboutTitle           = "blueMSX - Information";

    ls->dlgLangLangText         = "V�lj spr�k som blueMSX ska anv�nda";
    ls->dlgLangLangTitle        = "blueMSX - Spr�k";

    ls->dlgAboutAbout           = "INFORMATION\r\n========";
    ls->dlgAboutVersion         = "Version:";
    ls->dlgAboutBuildNumber     = "Bygge:";
    ls->dlgAboutBuildDate       = "Datum:";
    ls->dlgAboutCreat           = "Skapat av Daniel Vik";
    ls->dlgAboutDevel           = "UTVECKLARE\r\n========";
    ls->dlgAboutThanks          = "BIDRAGARE\r\n=======";       // New in 2.7 (retranslate, see english)
    ls->dlgAboutLisence         = "LICENS\r\n"
                                  "=====\r\n\r\n"
                                  "Denna programvara �r erbjuden 'som den �r', utan n�gon explicit eller "
                                  "implicit garanti. Inte av n�gon h�ndelse kommer f�rfattaren/na att h�llas "
                                  "ansvariga f�r n�gra skador orsakade av detta program.\r\n\r\n"
                                  "Bes�k www.bluemsx.com for mer information.";

    ls->dlgSavePreview          = "F�rvisning";
    ls->dlgSaveDate             = "Tid Sparad:";

    ls->dlgRenderVideoCapture   = "blueMSX - Generera videofil...";  


    //----------------------
    // Properties related lines
    //----------------------

    ls->propTitle               = "blueMSX - Egenskaper";
    ls->propEmulation           = "Emulering";
    ls->propVideo               = "Video";
    ls->propSound               = "Ljud";
    ls->propControls            = "Kontroller";
    ls->propPerformance         = "Prestanda";
    ls->propEffects             = "Effekter";             // New in 2.9
    ls->propSettings            = "Inst�llningar";
    ls->propFile                = "Filer";
    ls->propDisk                = "Enheter";              // New in 2.7
    ls->propPorts               = "Portar";

    ls->propEmuGeneralGB        = "Allm�nt ";
    ls->propEmuFamilyText       = "MSX familj:";
    ls->propEmuMemoryGB         = "Minne ";
    ls->propEmuRamSizeText      = "RAM storlek:";
    ls->propEmuVramSizeText     = "VRAM storlek:";
    ls->propEmuSpeedGB          = "Emuleringshastighet ";
    ls->propEmuSpeedText        = "Emuleringshastighet:";
    ls->propEmuFrontSwitchGB    = "Panasonicbrytare ";
    ls->propEmuFrontSwitch      = " Frontbrytare";
    ls->propEmuNoSpriteLimits   = " Ignorera sprite begr�nsning";  // New in 2.9
    ls->propEnableMsxKeyboardQuirk = " Emulera MSX tangentbordsfel";  // New in 2.9
    ls->propEmuFdcTiming        = " Sl� av diskettstationstiming";
    ls->propEmuReversePlay      = " Till�t bakl�nges uppspelning";
    ls->propEmuPauseSwitch      = " Pausbrytare";
    ls->propEmuAudioSwitch      = " MSX-AUDIO cartridge switch";
    ls->propVideoFreqText       = "Videofrekvens:";
    ls->propVideoFreqAuto       = "Automatisk";
    ls->propSndOversampleText   = "�versampling:";
    ls->propSndYkInGB           = "YK-01/YK-10/YK-20 In ";              
    ls->propSndMidiInGB         = "MIDI In ";
    ls->propSndMidiOutGB        = "MIDI Ut ";
    ls->propSndMidiChannel      = "MIDI Channel:";                      
    ls->propSndMidiAll          = "Alla";                               

    ls->propMonMonGB            = "Monitor ";
    ls->propMonTypeText         = "Monitor typ:";
    ls->propMonEmuText          = "Monitoremulering:";
    ls->propVideoTypeText       = "Videotyp:";
    ls->propWindowSizeText      = "F�nsterstorlek:";
    ls->propMonHorizStretch     = " Horizontell utstr�ckning";
    ls->propMonVertStretch      = " Vertikal utstr�ckning";
    ls->propMonDeInterlace      = " De-interlace";
    ls->propBlendFrames         = " Blanda efterf�ljande bilder";           
    ls->propMonBrightness       = "Ljusstyrka:";
    ls->propMonContrast         = "Kontrast:";
    ls->propMonSaturation       = "F�rgm�ttnad:";
    ls->propMonGamma            = "Gamma:";
    ls->propMonScanlines        = " Scanlinjer:";
    ls->propMonColorGhosting    = " RF-modulering:";
    ls->propMonEffectsGB        = "Effekter ";

    ls->propPerfVideoDrvGB      = "Videodriver ";
    ls->propPerfVideoDispDrvText= "Sk�rmdriver:";
    ls->propPerfFrameSkipText   = "Frame skipping:";
    ls->propPerfAudioDrvGB      = "Lkuddriver ";
    ls->propPerfAudioDrvText    = "Ljuddriver:";
    ls->propPerfAudioBufSzText  = "Storlek p� ljudbuffer:";
    ls->propPerfEmuGB           = "Emulering ";
    ls->propPerfSyncModeText    = "Synkronisering:";
    ls->propFullscreenResText   = "Fullsk�rmsuppl�sning:";

    ls->propSndChipEmuGB        = "Emulering av ljudchip ";
    ls->propSndMsxMusic         = " MSX-MUSIC";
    ls->propSndMsxAudio         = " MSX-AUDIO";
    ls->propSndMoonsound        = " Moonsound";
    ls->propSndMt32ToGm         = " Konvertera MT-32 instrument till General MIDI";

    ls->propPortsLptGB          = "Parallellport ";
    ls->propPortsComGB          = "Serieportar ";
    ls->propPortsLptText        = "Port:";
    ls->propPortsCom1Text       = "Port 1:";
    ls->propPortsNone           = "Ingen";
    ls->propPortsSimplCovox     = "SiMPL / Covox DAC";
    ls->propPortsFile           = "Skriv till Fil";
    ls->propPortsComFile        = "Skicka till Fil";
    ls->propPortsOpenLogFile    = "�ppna Logfil";
    ls->propPortsEmulateMsxPrn  = "Emulering:";

    ls->propSetFileHistoryGB    = "Filhistoria ";
    ls->propSetFileHistorySize  = "Antal element i filhistorian:";
    ls->propSetFileHistoryClear = "Rensa historia";
    ls->propFileTypes           = " Registrera filtyper med blueMSX (.rom, .dsk, .cas, .sta)";
    ls->propWindowsEnvGB        = "Windows Milj� ";
    ls->propSetScreenSaver      = " Deaktivera sk�rmsl�ckare n�r blueMSX k�r";
    ls->propDisableWinKeys      = " Avaktivera Windows menyer n�r emulatorn k�r";
    ls->propPriorityBoost       = " H�j prioriteten p� blueMSX";
    ls->propScreenshotPng       = " Anv�nd Portable Network Graphics (.png) sk�rmdump";
    ls->propEjectMediaOnExit    = " Ta ur media n�r blueMSX avslutas";
    ls->propClearHistory        = "Vill du verkligen radera filhistorien?";
    ls->propOpenRomGB           = "�ppna Rom Dialog ";
    ls->propDefaultRomType      = "Default Rom Typ:";
    ls->propGuessRomType        = "Gissa Rom Typ";

    ls->propSettDefSlotGB       = "Dra och Sl�pp ";
    ls->propSettDefSlots        = "S�tt in Rom i:";
    ls->propSettDefSlot         = " Slot";
    ls->propSettDefDrives       = "S�tt in Diskett i:";
    ls->propSettDefDrive        = " Drive";

    ls->propThemeGB             = "Tema ";
    ls->propTheme               = "Tema";

    ls->propCdromGB             = "CD-ROM ";         // New in 2.7
    ls->propCdromMethod         = "�tkomstmetod:";   // New in 2.7
    ls->propCdromMethodNone     = "Ingen";           // New in 2.7
    ls->propCdromMethodIoctl    = "IOCTL";           // New in 2.7
    ls->propCdromMethodAspi     = "ASPI";            // New in 2.7
    ls->propCdromDrive          = "Enhet:";          // New in 2.7

    ls->propD3DParametersGB         = "Parametrar ";                // New in 2.9
    ls->propD3DAspectRatioText      = "Aspect ratio";               // New in 2.9
    ls->propD3DLinearFilteringText  = " Linj�rt filter";          // New in 2.9
    ls->propD3DForceHighResText     = " Tvinga h�guppl�sning";     // New in 2.9
    ls->propD3DExtendBorderColorText    = " Expandera ramf�rger";   // New in 2.9

    ls->propD3DCroppingGB               = "Trimning ";              // New in 2.9
    ls->propD3DCroppingTypeText         = "Trimningstyp:";         // New in 2.9
    ls->propD3DCroppingLeftText         = "V�nster:";                  // New in 2.9
    ls->propD3DCroppingRightText        = "H�ger:";                 // New in 2.9
    ls->propD3DCroppingTopText          = "Upptill:";                   // New in 2.9
    ls->propD3DCroppingBottomText       = "Nertill:";                // New in 2.9


    //----------------------
    // Dropdown related lines
    //----------------------

    ls->enumVideoMonColor       = "F�rg";
    ls->enumVideoMonGrey        = "Svartvit";
    ls->enumVideoMonGreen       = "Gr�n";
    ls->enumVideoMonAmber       = "Orange";

    ls->enumVideoTypePAL        = "PAL";
    ls->enumVideoTypeNTSC       = "NTSC";

    ls->enumVideoEmuNone        = "Ingen";
    ls->enumVideoEmuYc          = "Y/C kabel (skarp)";
    ls->enumVideoEmuMonitor     = "Monitor";
    ls->enumVideoEmuYcBlur      = "Brusig Y/C kabel (skarp)";
    ls->enumVideoEmuComp        = "Kompositkabel (suddig)";
    ls->enumVideoEmuCompBlur    = "Brusig komposit (suddig)";
    ls->enumVideoEmuScale2x     = "Scale 2x";
    ls->enumVideoEmuHq2x        = "Hq2x";

    ls->enumVideoSize1x         = "Normal - 320x200";
    ls->enumVideoSize2x         = "Dubbel - 640x400";
    ls->enumVideoSizeFullscreen = "Fullsk�rm";

    ls->enumVideoDrvDirectDrawHW= "DirectDraw HW accel.";
    ls->enumVideoDrvDirectDraw  = "DirectDraw";
    ls->enumVideoDrvGDI         = "GDI";
    ls->enumVideoDrvD3D         = "Direct3D";

    ls->enumVideoFrameskip0     = "Ingen";
    ls->enumVideoFrameskip1     = "1 bild";
    ls->enumVideoFrameskip2     = "2 bilder";
    ls->enumVideoFrameskip3     = "3 bilder";
    ls->enumVideoFrameskip4     = "4 bilder";
    ls->enumVideoFrameskip5     = "5 bilder";

    ls->enumD3DARAuto           = "Automatisk";           // New in 2.9
    ls->enumD3DARStretch        = "Utstr�ckt";        // New in 2.9
    ls->enumD3DARPAL            = "PAL";            // New in 2.9
    ls->enumD3DARNTSC           = "NTSC";           // New in 2.9
    ls->enumD3DAR11             = "1:1";            // New in 2.9

    ls->enumD3DCropNone         = "Ingen";           // New in 2.9
    ls->enumD3DCropMSX1         = "MSX1";           // New in 2.9
    ls->enumD3DCropMSX1Plus8    = "MSX1+8";         // New in 2.9
    ls->enumD3DCropMSX2         = "MSX2";           // New in 2.9
    ls->enumD3DCropMSX2Plus8    = "MSX2+8";         // New in 2.9
    ls->enumD3DCropCustom       = "Individuell";         // New in 2.9

    ls->enumSoundDrvNone        = "Inget ljud";
    ls->enumSoundDrvWMM         = "WMM driver";
    ls->enumSoundDrvDirectX     = "DirectX driver";

    ls->enumEmuSync1ms          = "Synkronisera till MSX refresh";
    ls->enumEmuSyncVblank       = "Synkronisera till PC Vertikal Blank";
    ls->enumEmuAsyncVblank      = "Asynchronous PC Vblank";             
    ls->enumEmuSyncNone         = "Ingen";
    ls->enumEmuSyncAuto         = "Automatisk (snabb)";

    ls->enumControlsJoyNone     = "Ingen";
    ls->enumControlsJoyMouse    = "Mus";
    ls->enumControlsJoyTetris2Dongle = "Tetris 2 dosa";
    ls->enumControlsJoyTMagicKeyDongle = "MagicKey dosa";
    ls->enumControlsJoy2Button = "2-knapps Styrspak";                   
    ls->enumControlsJoyGunstick  = "Gun Stick";                         
    ls->enumControlsJoyAsciiLaser="ASCII Plus-X Terminator Laser";      
    ls->enumControlsArkanoidPad  ="Arkanoid Pad";                   // New in 2.7.1
    ls->enumControlsJoyColeco = "ColecoVision Styrspak";                

    ls->enumDiskMsx35Dbl9Sect    = "MSX 3.5\" Dubbelsidig, 9 Sektorer";     
    ls->enumDiskMsx35Dbl8Sect    = "MSX 3.5\" Dubbelsidig, 8 Sektorer";     
    ls->enumDiskMsx35Sgl9Sect    = "MSX 3.5\" Enkelsidig, 9 Sektorer";     
    ls->enumDiskMsx35Sgl8Sect    = "MSX 3.5\" Enkelsidig, 8 Sektorer";     
    ls->enumDiskSvi525Dbl        = "SVI-328\" 5.25 Dubbelsidig";           
    ls->enumDiskSvi525Sgl        = "SVI-328\" 5.25 Enkelsidig";   
    ls->enumDiskSf3Sgl           = "Sega SF-7000 3\" Enkelsidig";  


    //----------------------
    // Configuration related lines
    //----------------------

    ls->confTitle               = "blueMSX - Konfigureringsverktyg";
    ls->confConfigText          = "Konfigurering:";
    ls->confSlotLayout          = "Slot mappning";
    ls->confMemory              = "Minne";
    ls->confChipEmulation       = "Chipemulering";
    ls->confChipExtras          = "Extra";

    ls->confOpenRom             = "�ppna Rom fil";
    ls->confSaveTitle           = "blueMSX - Spara Konfigurering";
    ls->confSaveText            = "Vill du skriva �ver maskinkonfigureringen? :";
    ls->confSaveAsTitle         = "Spara Konfigurering Som...";
    ls->confSaveAsMachineName   = "Maskinnamn:";
    ls->confDiscardTitle        = "blueMSX - Konfigurering";
    ls->confExitSaveTitle       = "blueMSX - Avsluta Konfigureringsverktyg";
    ls->confExitSaveText        = "Vill du stanga konfigureringsverktyget utan att spara dina �ndringar?";

    ls->confSlotLayoutGB        = "Slot Layout ";
    ls->confSlotExtSlotGB       = "Externa slots ";
    ls->confBoardGB             = "Board ";
    ls->confBoardText           = "Board Typ:";
    ls->confSlotPrimary         = "Prim�r";
    ls->confSlotExpanded        = "Expanderad (4 subslottar)";

    ls->confSlotCart            = "Cartridge:";
    ls->confSlot                = "Slot";
    ls->confSubslot             = "Subslot";

    ls->confMemAdd               = "Ny...";
    ls->confMemEdit              = "�ndra...";
    ls->confMemRemove            = "Ta Bort";
    ls->confMemSlot              = "Slot";
    ls->confMemAddresss          = "Adress";
    ls->confMemType              = "Typ";
    ls->confMemRomImage          = "Rom Fil";
    
    ls->confChipVideoGB          = "Video ";
    ls->confChipVideoChip        = "Video Chip:";
    ls->confChipVideoRam         = "Video RAM:";
    ls->confChipSoundGB          = "Audio ";
    ls->confChipPsgStereoText    = " PSG Stereo";

    ls->confCmosGB               = "CMOS ";
    ls->confCmosEnable           = " Anv�nd CMOS";
    ls->confCmosBattery          = " Anv�nd Laddat Batteri";

    ls->confCpuFreqGB            = "CPU Frekvens ";
    ls->confZ80FreqText          = "Z80 Frekvens:";
    ls->confR800FreqText         = "R800 Frekvens:";
    ls->confFdcGB                = "Kontroller f�r Diskettenhet ";
    ls->confCFdcNumDrivesText    = "Antal Diskettenheter:";

    ls->confEditMemTitle         = "blueMSX - �ndra Minnesmap";
    ls->confEditMemGB            = "Detailjer ";
    ls->confEditMemType          = "Typ:";
    ls->confEditMemFile          = "Fil:";
    ls->confEditMemAddress       = "Adress";
    ls->confEditMemSize          = "Storlek";
    ls->confEditMemSlot          = "Slot";


    //----------------------
    // Shortcut lines
    //----------------------

    ls->shortcutKey             = "Tangentkombination";
    ls->shortcutDescription     = "Kortkommando";

    ls->shortcutSaveConfig      = "blueMSX - Spara Konfigurering";
    ls->shortcutOverwriteConfig = "Vill du skriva �ver kortkommando konfigureringen:";
    ls->shortcutExitConfig      = "blueMSX - Avsluta Kortkommandoverktyget";
    ls->shortcutDiscardConfig   = "Vill du stanga konfigureringsverktyget utan att spara dina �ndringar?";
    ls->shortcutSaveConfigAs    = "blueMSX - Spara Kortkommando Konfigurering Som...";
    ls->shortcutConfigName      = "Konfigurering:";
    ls->shortcutNewProfile      = "< Ny Profil >";
    ls->shortcutConfigTitle     = "blueMSX - Konfigurering av Kortkommandon";
    ls->shortcutAssign          = "Tilldela";
    ls->shortcutPressText       = "Tryck kortkommando:";
    ls->shortcutScheme          = "Kommandoschema:";
    ls->shortcutCartInsert1     = "S�tt in Cartridge 1";
    ls->shortcutCartRemove1     = "Ta ur Cartridge 1";
    ls->shortcutCartInsert2     = "S�tt in Cartridge 2";
    ls->shortcutCartRemove2     = "Ta ur Cartridge 2";
    ls->shortcutSpecialMenu1    = "Visa Specialrom meny f�r Cartridge 1";
    ls->shortcutSpecialMenu2    = "Visa Specialrom meny f�r Cartridge 2";
    ls->shortcutCartAutoReset   = "Starta om efter Ins�ttning av Cartridge";
    ls->shortcutDiskInsertA     = "S�tt in Diskett A";
    ls->shortcutDiskDirInsertA  = "S�tt in Directory som Diskett A";
    ls->shortcutDiskRemoveA     = "Ta ur Diskett A";
    ls->shortcutDiskChangeA     = "Snabbbyt Diskett A";
    ls->shortcutDiskAutoResetA  = "Starta om efter Ins�ttning av Diskett";
    ls->shortcutDiskInsertB     = "S�tt in Diskett B";
    ls->shortcutDiskDirInsertB  = "S�tt in Directory som Diskett B";
    ls->shortcutDiskRemoveB     = "Ta ur Diskett B";
    ls->shortcutCasInsert       = "S�tt in Kassett";
    ls->shortcutCasEject        = "Ta ur Kassett";
    ls->shortcutCasAutorewind   = "Sl� Av/P� Automatisk Tillbakaspolning";
    ls->shortcutCasReadOnly     = "Sl� Av/P� Skrivskydd p� Kassettfiler";
    ls->shortcutCasSetPosition  = "S�tt Kassettposition";
    ls->shortcutCasRewind       = "Spola Tillabaka Kassett";
    ls->shortcutCasSave         = "Spara Kassett till fil";
    ls->shortcutPrnFormFeed     = "Form Feed p� Skrivare";
    ls->shortcutCpuStateLoad    = "Ladda CPU-tillst�nd";
    ls->shortcutCpuStateSave    = "Spara CPU-tillst�nd";
    ls->shortcutCpuStateQload   = "Snabbladda CPU-tillst�nd";
    ls->shortcutCpuStateQsave   = "Snabbspara CPU-tillst�nd";
    ls->shortcutAudioCapture    = "Starta/Stanna Audioinspelning";
    ls->shortcutScreenshotOrig  = "Spar Sk�rmdump";
    ls->shortcutScreenshotSmall = "Spar Liten Ofiltrerad Sk�rmdump";
    ls->shortcutScreenshotLarge = "Spar Stor Ofiltrerad Sk�rmdump";
    ls->shortcutQuit            = "Avsluta blueMSX";
    ls->shortcutRunPause        = "K�r/Pause Emuleringen";
    ls->shortcutStop            = "Stanna Emuleringen";
    ls->shortcutResetHard       = "H�rd Omstart";
    ls->shortcutResetSoft       = "Mjuk Omstart";
    ls->shortcutResetClean      = "Full Omstart";
    ls->shortcutSizeSmall       = "V�xla till Liten F�nsterstorlek";
    ls->shortcutSizeNormal      = "V�xla till Normal F�nsterstorlek";
    ls->shortcutSizeFullscreen  = "V�xla till Fullsk�rm";
    ls->shortcutSizeMinimized   = "Minimera f�nster";
    ls->shortcutToggleFullscren = "V�xla till/fr�n Fullsk�rm";
    ls->shortcutVolumeIncrease  = "�ka Volymen";
    ls->shortcutVolumeDecrease  = "Minska Volymen";
    ls->shortcutVolumeMute      = "St�ng av Volymen";
    ls->shortcutVolumeStereo    = "V�xla mellan mono/stereo";
    ls->shortcutSwitchMsxAudio  = "Sl� om MSX-AUDIO brytare";
    ls->shortcutSwitchFront     = "Sl� om Panasonic Front brytare";
    ls->shortcutSwitchPause     = "Sl� om Pausbrytare";
    ls->shortcutToggleMouseLock = "Sl� om Musl�s";
    ls->shortcutEmuSpeedMax     = "Maximal Emuleringshastighet";
    ls->shortcutEmuPlayReverse  = "Spola tillbaka";                     // New in 2.8.3
    ls->shortcutEmuSpeedToggle  = "V�xla Mellan Normal och Max Emuleringshastighet";
    ls->shortcutEmuSpeedNormal  = "Minska Emuleringhastigheten";
    ls->shortcutEmuSpeedInc     = "�ka Emuleringhastigheten";
    ls->shortcutEmuSpeedDec     = "Minska Emuleringhastigheten";
    ls->shortcutThemeSwitch     = "V�xla f�nstretema";
    ls->shortcutShowEmuProp     = "�ppna Emuleringsf�nstret";
    ls->shortcutShowVideoProp   = "�ppna Videof�nstret";
    ls->shortcutShowAudioProp   = "�ppna Audiof�nstret";
    ls->shortcutShowCtrlProp    = "�ppna Kontrollf�nstret";
    ls->shortcutShowEffectsProp    = "�ppna Effektsf�nstret";
    ls->shortcutShowSettProp    = "�ppna Inst�llningsf�nstret";
    ls->shortcutShowPorts       = "Visa Portegenskaper";
    ls->shortcutShowLanguage    = "�ppna Spr�kf�nstret";
    ls->shortcutShowMachines    = "�ppna Konfigureringsverktyget";
    ls->shortcutShowShortcuts   = "�ppna Kortkommandoverktyget";
    ls->shortcutShowKeyboard    = "Visa Tangentbordseditor";
    ls->shortcutShowDebugger    = "Visa Debugger";
    ls->shortcutShowTrainer     = "Visa Trainer";
    ls->shortcutShowMixer       = "Visa Mixer";
    ls->shortcutShowHelp        = "�ppna Hj�lpf�nstret";
    ls->shortcutShowAbout       = "�ppna \"Om blueMSX\"-f�nstret";
    ls->shortcutShowFiles       = "�ppna Filerf�nstret";
    ls->shortcutToggleSpriteEnable = "Visa/D�lj Sprites";
    ls->shortcutToggleFdcTiming = "Sl� p�/av Diskettstationstiming";
    ls->shortcutToggleNoSpriteLimits = "Sla p�/av Spritebegr�nsning";                 // New in 2.9
    ls->shortcutEnableMsxKeyboardQuirk = "Emulera MSX Keyboardfel";              // New in 2.9
    ls->shortcutToggleCpuTrace  = "Sl� p�/av CPU trace";
    ls->shortcutVideoLoad       = "Ladda...";             
    ls->shortcutVideoPlay       = "Spela upp senaste";   
    ls->shortcutVideoRecord     = "Spela in";              
    ls->shortcutVideoStop       = "Stopp";                
    ls->shortcutVideoRender     = "Spara videofil";   


    //----------------------
    // Keyboard config lines
    //----------------------

    ls->keyconfigSelectedKey    = "V�lj tangent:";
    ls->keyconfigMappedTo       = "Mappad till:";
    ls->keyconfigMappingScheme  = "Mapschema:";

    
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
    ls->romTypeF4deviceNormal   = "F4 Enhet Normal";
    ls->romTypeF4deviceInvert   = "F4 Enhet Inverted";
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
    ls->dbgDevF4Device          = "F4 Enhet";
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
    ls->aboutScrollThanksTo     = "Speciellt tack till: ";
    ls->aboutScrollAndYou       = "och DIG !!!!";
};

#endif
