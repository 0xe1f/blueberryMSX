/*****************************************************************************
** $Source: /cygdrive/d/Private/_SVNROOT/bluemsx/blueMSX/Src/Language/LanguageGerman.h,v $
**
** $Revision: 1.53 $ 
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
#ifndef LANGUAGE_GERMAN_H
#define LANGUAGE_GERMAN_H

#include "LanguageStrings.h"
 
void langInitGerman(LanguageStrings* ls) 
{
    //----------------------
    // Language lines
    //----------------------

    ls->langCatalan             = "Catalan";
    ls->langChineseSimplified    = "Chinese Simplified";
    ls->langChineseTraditional   = "Chinese Traditional";
    ls->langDutch                = "Dutch";
    ls->langEnglish              = "English";
    ls->langFinnish              = "Finnish";
    ls->langFrench               = "French";
    ls->langGerman               = "German";
    ls->langItalian              = "Italian";
    ls->langJapanese             = "Japanese";
    ls->langKorean               = "Korean";
    ls->langPolish               = "Polish";
    ls->langPortuguese           = "Portuguese";
    ls->langRussian             = "Russian";            // v2.8
    ls->langSpanish              = "Spanish";
    ls->langSwedish              = "Swedish";


    //----------------------
    // Generic lines
    //----------------------

    ls->textDevice               = "Typ:";
    ls->textFilename             = "Filename:";
    ls->textFile                 = "File";
    ls->textNone                 = "Nichts";    
    ls->textUnknown              = "Unbekannt";                            


    //----------------------
    // Warning and Error lines
    //----------------------

    ls->warningTitle             = "blueMSX - Warnung";
    ls->warningDiscardChanges    = "M�chten Sie die �nderungen verwerfen?";
    ls->warningOverwriteFile     = "M�chten Sie das File �berschreiben:"; 
    ls->errorTitle               = "blueMSX - Fehler";
    ls->errorEnterFullscreen     = "Konnte nicht in den Fullscreen-Modus gehen.           \n";
    ls->errorDirectXFailed       = "DirectX objects konnten nicht erzeugt werden.\nBenutze stattdessen GDI.\n�berpr�fe die Video-Eigenschaften.";
    ls->errorNoRomInZip          = "Konnte kein .rom-File im Zip-Archiv finden.";
    ls->errorNoDskInZip          = "Konnte kein .dsk-File im Zip-Archiv finden.";
    ls->errorNoCasInZip          = "Konnte kein .cas-File im Zip-Archiv finden.";
    ls->errorNoHelp              = "Konnte kein blueMSX-Hilfe-File finden.";
    ls->errorStartEmu            = "Der MSX-Emulator konnte nicht gestartet werden.";
    ls->errorPortableReadonly    = "Austauschbarer Datentr�ger ist nur lesbar"; // "Portable device is readonly";        


    //----------------------
    // File related lines
    //----------------------

    ls->fileRom                  = "ROM-Image";
    ls->fileAll                  = "Alle Files";
    ls->fileCpuState             = "CPU-Status";
    ls->fileVideoCapture         = "Video-Capture";     // New in 2.6
    ls->fileDisk                 = "Disketten-Image";
    ls->fileCas                  = "Cassetten-Image";
    ls->fileAvi                  = "Videoclip";         // New in 2.6


    //----------------------
    // Menu related lines
    //----------------------
    
    ls->menuNoRecentFiles        = "- keine neuen Files -";
    ls->menuInsert               = "Einf�gen";
    ls->menuEject                = "Auswurf";

    ls->menuCartGameReader       = "Game Reader";                        
    ls->menuCartIde              = "IDE";                                
    ls->menuCartBeerIde          = "Beer";                               
    ls->menuCartGIde             = "GIDE";                               
    ls->menuCartSunriseIde       = "Sunrise";                              
    ls->menuCartScsi             = "SCSI";                // New in 2.7
    ls->menuCartMegaSCSI         = "MEGA-SCSI";           // New in 2.7
    ls->menuCartWaveSCSI         = "WAVE-SCSI";           // New in 2.7
    ls->menuCartGoudaSCSI        = "Gouda-SCSI";          // New in 2.7
    ls->menuJoyrexPsg            = "Joyrex PSG Cartridge"; // New in 2.9
    ls->menuCartSCC              = "SCC Cartridge";
    ls->menuCartSCCPlus          = "SCC-I Cartridge";
    ls->menuCartFMPac            = "FM-PAC-Cartridge";
    ls->menuCartPac              = "PAC-Cartridge";
    ls->menuCartHBI55            = "Sony HBI-55 Cartridge";
    ls->menuCartInsertSpecial    = "Insert Special";                     
    ls->menuCartMegaRam          = "MegaRAM";                            
    ls->menuCartExternalRam      = "Externes RAM";
    ls->menuCartEseRam           = "Ese-RAM";             // New in 2.7
    ls->menuCartEseSCC           = "Ese-SCC";             // New in 2.7
    ls->menuCartMegaFlashRom     = "Mega Flash-ROM";      // New in 2.7

    ls->menuCasRewindAfterInsert = "Zur�ck nach Einf�gen";
    ls->menuCasUseReadOnly       = "Cassetten-Image nur lesend benutzen";
    ls->lmenuCasSaveAs           = "Speichere Cassetten-Image als ...";
    ls->menuCasSetPosition       = "Positionieren";
    ls->menuCasRewind            = "Zur�ck";

    ls->menuVideoLoad            = "Laden ...";                  // New in 2.6
    ls->menuVideoPlay            = "Letzte Aufnahme abspielen";  // New in 2.6 -- "Play Last Capture";
    ls->menuVideoRecord          = "Aufnehmen";                  // New in 2.6
    ls->menuVideoRecording       = "Nimmt auf ...";              // New in 2.6 -- "Recording";
    ls->menuVideoRecAppend       = "Aufnehmen (anf�gen)";        // New in 2.6
    ls->menuVideoStop            = "Stopp";                      // New in 2.6
    ls->menuVideoRender          = "Videofile wiedergeben";      // New in 2.6 -- "Render Video File";

    ls->menuDiskInsertNew        = "Neues Disk-Image einf�gen";              
    ls->menuDiskInsertCdrom      = "CDROM einf�gen";             // New in 2.7 -- "Insert CD-Rom";
    ls->menuDiskDirInsert        = "Directory einf�gen";
    ls->menuDiskAutoStart        = "Reset nach Einf�gen";
    ls->menuCartAutoReset        = "Reset nach Einf�gen/Entfernen";

    ls->menuPrnFormfeed          = "Seitenvorschub";

    ls->menuZoomNormal           = "Normale Gr��e";
    ls->menuZoomDouble           = "Doppelte Gr��e";
    ls->menuZoomFullscreen       = "Ganzer Bildschirm";
    
    ls->menuPropsEmulation       = "Emulation";
    ls->menuPropsVideo           = "Video";
    ls->menuPropsSound           = "Sound";
    ls->menuPropsControls        = "Controls";
    ls->menuPropsEffects        = "Effects";               // New in 2.9
    ls->menuPropsSettings        = "Einstellungen";
    ls->menuPropsFile            = "Files";
    ls->menuPropsDisk            = "Disks";               // New in 2.7
    ls->menuPropsLanguage        = "Sprache";
    ls->menuPropsPorts           = "Ports";
    
    ls->menuVideoSource          = "Video-Out Source";                      // "Video Out Source";                  
    ls->menuVideoSourceDefault   = "Keine Video-Out Source angeschlossen";  // "No Video Out Source Connected";      
    ls->menuVideoChipAutodetect  = "Selbst�ndige Videochip-Erkennung";      // "Autodetect Video-Chip";   
    ls->menuVideoInSource        = "Video-In Source";                       // "Video In Source";                    
    ls->menuVideoInBitmap        = "Bitmap-File";                        
    
    ls->menuEthInterface         = "Ethernet"; // New in 2.6

    ls->menuHelpHelp             = "Hilfethemen";
    ls->menuHelpAbout            = "�ber blueMSX";

    ls->menuFileCart             = "Cartridge-Slot";
    ls->menuFileDisk             = "Diskettenlaufwerk";    // "Disk-Drive";
    ls->menuFileCas              = "Cassette";
    ls->menuFilePrn              = "Drucker";
    ls->menuFileLoadState        = "Lade CPU-Status";
    ls->menuFileSaveState        = "Speichere CPU-Status";
    ls->menuFileQLoadState       = "QuickLoad-Status";     // "Quick Load State";
    ls->menuFileQSaveState       = "QuickSave-Status";     // "Quick Save State";
    ls->menuFileCaptureAudio     = "Audio-Aufnahme";       // "Capture Audio";
    ls->menuFileCaptureVideo     = "Video-Aufnahme";       // "Video Capture"; -- New in 2.6
    ls->menuFileScreenShot       = "Speichere Screenshot";
    ls->menuFileExit             = "Exit";

    ls->menuFileHarddisk         = "Festplatte";                 // "Hard Disk";                          
    ls->menuFileHarddiskNoPesent = "Keine Controller verf�gbar"; // "No Controllers Present";             
    ls->menuFileHarddiskRemoveAll= "Alle Festplatten auswerfen"; // "Eject All Harddisk"; -- New in 2.7 

    ls->menuRunRun               = "Start";
    ls->menuRunPause             = "Pause";
    ls->menuRunStop              = "Stopp";
    ls->menuRunSoftReset         = "Soft-Reset";
    ls->menuRunHardReset         = "Hard-Reset";
    ls->menuRunCleanReset        = "Allgemeiner Reset";

    ls->menuToolsMachine         = "Maschineneditor";
    ls->menuToolsShortcuts       = "Shortcuts-Editor";
    ls->menuToolsCtrlEditor      = "Controllers / Keyboard-Editor"; // New in 2.6
    ls->menuToolsMixer           = "Audio-Mixer";
    ls->menuToolsLoadMemory      = "Laden Speicher";
    ls->menuToolsDebugger        = "Debugger";               
    ls->menuToolsTrainer         = "Trainer";                
    ls->menuToolsTraceLogger     = "Trace Logger";           

    ls->menuFile                 = "File";
    ls->menuRun                  = "Run";
    ls->menuWindow               = "Window";
    ls->menuOptions              = "Options";
    ls->menuTools                = "Tools";
    ls->menuHelp                 = "Help";


    //----------------------
    // Dialog related lines
    //----------------------

    ls->dlgOK                    = "OK";
    ls->dlgOpen                  = "�ffnen";
    ls->dlgCancel                = "Abbrechen";
    ls->dlgSave                  = "Speichern";
    ls->dlgSaveAs                = "Speichern als ...";
    ls->dlgRun                   = "Start";
    ls->dlgClose                 = "Schlie�en";

    ls->dlgLoadRom               = "blueMSX - W�hle ein ROM-Image aus";
    ls->dlgLoadDsk               = "blueMSX - W�hle ein DSK-Image aus";
    ls->dlgLoadCas               = "blueMSX - W�hle ein CAS-Image aus";
    ls->dlgLoadRomDskCas         = "blueMSX - W�hle ein ROM-, DSK- oder CAS-File zum Laden aus";
    ls->dlgLoadRomDesc           = "W�hle ein ROM-Image aus:";
    ls->dlgLoadDskDesc           = "W�hle ein DISK-Image aus:";
    ls->dlgLoadCasDesc           = "W�hle ein CASSETTEN-Image aus:";
    ls->dlgLoadRomDskCasDesc     = "W�hle ein ROM-, DSK- oder CAS-File zum Laden aus:";
    ls->dlgLoadState             = "Lade CPU-Status";
    ls->dlgLoadVideoCapture      = "Lade Video-Aufnahme";              // New in 2.6
    ls->dlgSaveState             = "Speichere CPU-Status";
    ls->dlgSaveCassette          = "blueMSX - Speichere Tape-Image";
    ls->dlgSaveVideoClipAs       = "Speichere Videoclip als ...";      // New in 2.6 -- "Save video clip as ...";
    ls->dlgAmountCompleted       = "Amount completed:";                // New in 2.6 -- "Amount completed:";
    ls->dlgInsertRom1            = "ROM-Cartridge in Slot 1 einf�gen";
    ls->dlgInsertRom2            = "ROM-Cartridge in Slot 2 einf�gen";
    ls->dlgInsertDiskA           = "Disketten-Image in Laufwerk A einf�gen";
    ls->dlgInsertDiskB           = "Disketten-Image in Laufwerk B einf�gen";
    ls->dlgInsertCas             = "Cassette einf�gen";
    ls->dlgInsertHarddisk        = "Festplatte einf�gen"; // "Harddisk einf�gen";                   
    ls->dlgRomType               = "Typ des ROMs:";
    ls->dlgDiskSize              = "Diskettengr��e:";                  // New in 2.6 -- "Disk Size:";

    ls->dlgTapeTitle             = "blueMSX - Bandposition";
    ls->dlgTapeFrameText         = "Bandposition";
    ls->dlgTapeCurrentPos        = "Aktuelle Position";
    ls->dlgTapeTotalTime         = "Gesamtzeit";
    ls->dlgTapeSetPosText        = "Bandposition:";
    ls->dlgTapeCustom            = "Zeige anwenderspezifische Files";
    ls->dlgTabPosition           = "Position";
    ls->dlgTabType               = "Typ";
    ls->dlgTabFilename           = "Filename";
    ls->dlgZipReset              = "Reset nach Einf�gen";

    ls->dlgAboutTitle            = "�ber blueMSX";

    ls->dlgLangLangText          = "blueMSX - Sprachauswahl"; // "W�hle die Sprache aus, die blueMSX benutzen soll.";
    ls->dlgLangLangTitle         = "blueMSX - Sprache";

    ls->dlgAboutAbout            = "�BER\r\n====";
    ls->dlgAboutVersion          = "Version:";
    ls->dlgAboutBuildNumber      = "Hergestellt:";
    ls->dlgAboutBuildDate        = "Datum:";
    ls->dlgAboutCreat            = "von Daniel Vik";
    ls->dlgAboutDevel            = "ENTWICKLER\r\n========";
    ls->dlgAboutThanks           = "BESONDEREN DANK AN\r\n============";       // New in 2.7 (retranslate, see english)
    ls->dlgAboutLisence          = "LIZENZ\r\n"
                                   "======\r\n\r\n"
                                   "Diese Software wird ''wie sie ist'' zur Verf�gung gestellt, ohne jegliche Garantie. "
                                   "In keinem Fall wird der Autor/werden die Autoren haftpflichtig f�r irgendwelche Sch�den,"
                                   "die aus dem Gebrauch dieser Software entstehen k�nnten.\r\n\r\n"
                                   "Besuchen Sie www.bluemsx.com, um n�here Details zu erfahren.";

    ls->dlgSavePreview           = "Zeige Vorschau";
    ls->dlgSaveDate              = "Eingesparte Zeit:";

    ls->dlgRenderVideoCapture    = "blueMSX - Videowiedergabe ...";  // New in 2.6 -- "blueMSX - Rendering Video Capture ...";


    //----------------------
    // Properties related lines
    //----------------------

    ls->propTitle                = "blueMSX - Eigenschaften";
    ls->propEmulation            = "Emulation";
    ls->propVideo                = "Video";
    ls->propSound                = "Sound";
    ls->propControls             = "Controls";
    ls->propPerformance          = "Performance";
    ls->propEffects              = "Effects";             // New in 2.9
    ls->propSettings             = "Einstellungen";
    ls->propFile                 = "Files";
    ls->propDisk                 = "Disks";              // New in 2.7
    ls->propPorts                = "Ports";
    
    ls->propEmuGeneralGB         = "Allgemeines ";
    ls->propEmuFamilyText        = "MSX-Maschine:";
    ls->propEmuMemoryGB          = "Memory ";
    ls->propEmuRamSizeText       = "RAM-Gr��e:";                      // "RAM size:";
    ls->propEmuVramSizeText      = "VRAM-Gr��e:";                     // "VRAM size:";
    ls->propEmuSpeedGB           = "Emulationsgeschwindigkeit ";
    ls->propEmuSpeedText         = "Emulationsgeschwindigkeit:";
    ls->propEmuFrontSwitchGB     = "Panasonic-Schalter";              // "Panasonic Switches ";
    ls->propEmuFrontSwitch       = " Frontschalter";                  // " Front Switch";
    ls->propEmuNoSpriteLimits   = " Disable Sprites Limitation";  // New in 2.9
    ls->propEnableMsxKeyboardQuirk = " Emulate MSX keyboard quirk";  // New in 2.9
    ls->propEmuFdcTiming         = " Floppy-Drive-Timing sperren";
    ls->propEmuReversePlay      = " Enable reverse playback"; // New in 2.8.3
    ls->propEmuPauseSwitch       = " Unterbrechungstaste";
    ls->propEmuAudioSwitch       = " MSX-AUDIO-Cartridge-Schalter";
    ls->propVideoFreqText        = "Videofrequenz:";
    ls->propVideoFreqAuto        = "Auto";
    ls->propSndOversampleText    = "Oversample:";
    ls->propSndYkInGB            = "YK-01/YK-10/YK-20 In ";                
    ls->propSndMidiInGB          = "MIDI-In ";
    ls->propSndMidiOutGB         = "MIDI-Out ";
    ls->propSndMidiChannel       = "MIDI-Channel:";                      
    ls->propSndMidiAll           = "All";                                

    ls->propMonMonGB             = "Monitor ";
    ls->propMonTypeText          = "Typ des Monitors:";
    ls->propMonEmuText           = "Monitoremulation:";
    ls->propVideoTypeText        = "Videotyp:";
    ls->propWindowSizeText       = "Fenstergr��e:";
    ls->propMonHorizStretch      = " Horizontale Ausdehnung";
    ls->propMonVertStretch       = " Vertikale Ausdehnung";
    ls->propMonDeInterlace       = " De-interlace";
    ls->propBlendFrames          = " Mische aufeinanderfolgende Frames";           
    ls->propMonBrightness        = "Helligkeit:";
    ls->propMonContrast          = "Kontrast:";
    ls->propMonSaturation        = "S�ttigung:";
    ls->propMonGamma             = "Gamma:";
    ls->propMonScanlines         = " Scanlines:";
    ls->propMonColorGhosting     = " RF-Modulator:";
    ls->propMonEffectsGB         = "Effekte ";

    ls->propPerfVideoDrvGB       = "Video-Treiber ";
    ls->propPerfVideoDispDrvText = "Display-Treiber:";
    ls->propPerfFrameSkipText    = "Frame skipping:";
    ls->propPerfAudioDrvGB       = "Audio-Treiber ";
    ls->propPerfAudioDrvText     = "Sound-Treiber:";
    ls->propPerfAudioBufSzText   = "Gr��e des Sound-Buffers:";
    ls->propPerfEmuGB            = "Emulation ";
    ls->propPerfSyncModeText     = "SYNC-Mode:";
    ls->propFullscreenResText    = "Bildschirmaufl�sung:";

    ls->propSndChipEmuGB         = "Emulation des Soundchips ";
    ls->propSndMsxMusic          = " MSX-MUSIC";
    ls->propSndMsxAudio          = " MSX-AUDIO";
    ls->propSndMoonsound         = " Moonsound";
    ls->propSndMt32ToGm          = " Bilde MT-32 Instrumente auf General MIDI ab"; // " Map MT-32 instruments to General MIDI";

    ls->propPortsLptGB           = "Paralleler Port ";
    ls->propPortsComGB           = "Serielle Ports ";
    ls->propPortsLptText         = "Port:";
    ls->propPortsCom1Text        = "Port 1:";
    ls->propPortsNone            = "Nichts";
    ls->propPortsSimplCovox      = "SiMPL / Covox DAC";
    ls->propPortsFile            = "In Datei schreiben";
    ls->propPortsComFile         = "Zu Datei senden";
    ls->propPortsOpenLogFile     = "�ffne Log-Datei";
    ls->propPortsEmulateMsxPrn   = "Emulation:";

    ls->propSetFileHistoryGB     = "File History ";
    ls->propSetFileHistorySize   = "Anzahl der Elemente in der File-History:";
    ls->propSetFileHistoryClear  = "L�sche History";
    ls->propFileTypes            = " Registriere Filetypen mit blueMSX (.rom, .dsk, .cas, .sta)";
    ls->propWindowsEnvGB         = "Windows-Environment "; 
    ls->propSetScreenSaver       = " Bildschirmschoner abschalten, wenn blueMSX l�uft"; // " Schalte den Bildschirmschoner ab, wenn blueMSX l�uft";
    ls->propDisableWinKeys       = " Automatische MSX-Funktion f�r Windows-Men�tasten"; 
    ls->propPriorityBoost        = " Die Priorit�t von blueMSX erh�hen";
    ls->propScreenshotPng        = " Benutze Portable Network Graphics (.png) Screenshots";  
    ls->propEjectMediaOnExit    = " Eject media when blueMSX exits";        // New in 2.8
    ls->propClearHistory         = "Wollen Sie die File-History wirklich l�schen?"; // "Sind Sie sicher, da� Sie die File-History l�schen wollen?";
    ls->propOpenRomGB            = "�ffne ROM-Dialog ";
    ls->propDefaultRomType       = "Voreingestellter ROM-Typ:";
    ls->propGuessRomType         = "ROM-Typ erraten";

    ls->propSettDefSlotGB        = "Ziehen und Ablegen "; // "Drag and Drop ";
    ls->propSettDefSlots         = "ROM einf�gen in:";
    ls->propSettDefSlot          = " Slot";
    ls->propSettDefDrives        = "Disketten einf�gen in:";
    ls->propSettDefDrive         = " Drive";

    ls->propThemeGB              = "Theme ";
    ls->propTheme                = "Theme:";

    ls->propCdromGB              = "CDROM ";            // New in 2.7
    ls->propCdromMethod          = "Zugriffsmethode:";  // New in 2.7 -- "Access Method:";
    ls->propCdromMethodNone      = "Keine";             // New in 2.7 -- "None";
    ls->propCdromMethodIoctl     = "IOCTL";             // New in 2.7
    ls->propCdromMethodAspi      = "ASPI";              // New in 2.7
    ls->propCdromDrive           = "Laufwerk:";         // New in 2.7 -- "Drive:";

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

    ls->enumVideoMonColor        = "Farbe";
    ls->enumVideoMonGrey         = "Schwarzwei�";
    ls->enumVideoMonGreen        = "Gr�n";
    ls->enumVideoMonAmber        = "Amber";

    ls->enumVideoTypePAL         = "PAL";
    ls->enumVideoTypeNTSC        = "NTSC";

    ls->enumVideoEmuNone         = "Nichts";
    ls->enumVideoEmuYc           = "Y/C-Kabel (scharf)";
    ls->enumVideoEmuMonitor      = "Monitor";
    ls->enumVideoEmuYcBlur       = "Verrauschtes Y/C-Kabel (scharf)";
    ls->enumVideoEmuComp         = "Composit-Signal (verwaschen)";
    ls->enumVideoEmuCompBlur     = "Verrauschtes Composit-Signal (verwaschen)";
    ls->enumVideoEmuScale2x      = "Scale 2x";
    ls->enumVideoEmuHq2x         = "Hq2x";

    ls->enumVideoSize1x          = "Normal - 320x200";
    ls->enumVideoSize2x          = "Double - 640x400";
    ls->enumVideoSizeFullscreen  = "Fullscreen";

    ls->enumVideoDrvDirectDrawHW = "DirectDraw HW accel."; 
    ls->enumVideoDrvDirectDraw   = "DirectDraw";
    ls->enumVideoDrvGDI          = "GDI";
    ls->enumVideoDrvD3D         = "Direct3D";

    ls->enumVideoFrameskip0      = "Nichts";
    ls->enumVideoFrameskip1      = "1 Frame";
    ls->enumVideoFrameskip2      = "2 Frames";
    ls->enumVideoFrameskip3      = "3 Frames";
    ls->enumVideoFrameskip4      = "4 Frames";
    ls->enumVideoFrameskip5      = "5 Frames";

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

    ls->enumSoundDrvNone         = "Kein Sound";
    ls->enumSoundDrvWMM          = "WMM-Treiber";
    ls->enumSoundDrvDirectX      = "DirectX-Treiber";

    ls->enumEmuSync1ms           = "Sync am MSX refresh";
    ls->enumEmuSyncAuto          = "Automatisch (schnell)";
    ls->enumEmuSyncNone          = "Nichts";
    ls->enumEmuSyncVblank        = "Sync am PC Vertical Blank";
    ls->enumEmuAsyncVblank       = "Asynchronous PC Vblank";             

    ls->enumControlsJoyNone            = "Nichts";
    ls->enumControlsJoyMouse           = "Maus";
    ls->enumControlsJoyTetris2Dongle   = "Tetris 2-Dongle";
    ls->enumControlsJoyTMagicKeyDongle = "MagicKey-Dongle";             
    ls->enumControlsJoy2Button         = "2-Button-Joystick";                   
    ls->enumControlsJoyGunstick        = "Gun-Stick";                         
    ls->enumControlsJoyAsciiLaser      = "ASCII Plus-X Terminator Laser";      
    ls->enumControlsArkanoidPad  ="Arkanoid Pad";                   // New in 2.7.1
    ls->enumControlsJoyColeco          = "ColecoVision-Joystick";                

    ls->enumDiskMsx35Dbl9Sect    = "MSX 3.5\" Double Sided, 9 Sectors";     
    ls->enumDiskMsx35Dbl8Sect    = "MSX 3.5\" Double Sided, 8 Sectors";     
    ls->enumDiskMsx35Sgl9Sect    = "MSX 3.5\" Single Sided, 9 Sectors";     
    ls->enumDiskMsx35Sgl8Sect    = "MSX 3.5\" Single Sided, 8 Sectors";     
    ls->enumDiskSvi525Dbl        = "SVI-328 5.25\" Double Sided";           
    ls->enumDiskSvi525Sgl        = "SVI-328 5.25\" Single Sided";           
    ls->enumDiskSf3Sgl           = "Sega SF-7000 3\" Single Sided";  // New in 2.6


    //----------------------
    // Configuration related lines
    //----------------------

    ls->confTitle                = "blueMSX - Editor f�r die Maschinenkonfiguration";
    ls->confConfigText           = "Konfiguration";
    ls->confSlotLayout           = "Slot-Layout";
    ls->confMemory               = "Memory";
    ls->confChipEmulation        = "Chip-Emulation";
    ls->confChipExtras           = "Extras";

    ls->confOpenRom              = "�ffne ROM-Image";
    ls->confSaveTitle            = "blueMSX - Speichere Konfiguration";
    ls->confSaveText             = "M�chten Sie die Maschinenkonfiguration �berschreiben?";
    ls->confSaveAsTitle          = "Speichere Konfiguration als ...";
    ls->confSaveAsMachineName    = "Name der Maschine:";
    ls->confDiscardTitle         = "blueMSX - Konfiguration";
    ls->confExitSaveTitle        = "blueMSX - Konfigurationseditor verlassen";
    ls->confExitSaveText         = "M�chten Sie die aktuellen �nderungen der Konfiguration verwerfen?";

    ls->confSlotLayoutGB         = "Slot-Layout ";
    ls->confSlotExtSlotGB        = "Externe Slots ";
    ls->confBoardGB              = "Board ";
    ls->confBoardText            = "Board-Typ:";
    ls->confSlotPrimary          = "Primary";
    ls->confSlotExpanded         = "Expanded (vier Subslots)";

    ls->confSlotCart             = "Cartridge";
    ls->confSlot                 = "Slot";
    ls->confSubslot              = "Subslot";

    ls->confMemAdd               = "Hinzuf�gen ...";
    ls->confMemEdit              = "Editieren ...";
    ls->confMemRemove            = "Entfernen";
    ls->confMemSlot              = "Slot";
    ls->confMemAddresss          = "Addresse";
    ls->confMemType              = "Typ";
    ls->confMemRomImage          = "ROM-Image";
    
    ls->confChipVideoGB          = "Video ";
    ls->confChipVideoChip        = "Videochip:";
    ls->confChipVideoRam         = "Video-RAM:";
    ls->confChipSoundGB          = "Sound ";
    ls->confChipPsgStereoText    = " PSG Stereo";

    ls->confCmosGB               = "CMOS ";
    ls->confCmosEnable           = " CMOS einschalten";
    ls->confCmosBattery          = " Verwende geladene Batterie";

    ls->confCpuFreqGB            = "CPU-Frequenz ";
    ls->confZ80FreqText          = "Z80-Frequenz:";
    ls->confR800FreqText         = "R800-Frequenz:";
    ls->confFdcGB                = "Floppy-Disk-Controller ";
    ls->confCFdcNumDrivesText    = "Anzahl der Laufwerke:";

    ls->confEditMemTitle         = "blueMSX - Edit Mapper";
    ls->confEditMemGB            = "Mapper Details ";
    ls->confEditMemType          = "Typ:";
    ls->confEditMemFile          = "File:";
    ls->confEditMemAddress       = "Addresse";
    ls->confEditMemSize          = "Gr��e";
    ls->confEditMemSlot          = "Slot";


    //----------------------
    // Shortcut lines
    //----------------------

    ls->shortcutKey                = "Kontrollsequenz";
    ls->shortcutDescription        = "Shortcut";

    ls->shortcutSaveConfig         = "blueMSX - Speichere Konfiguration";
    ls->shortcutOverwriteConfig    = "Shortcut-Konfiguration �berschreiben:"; // "M�chten Sie die Shortcut-Konfiguration �berschreiben:";
    ls->shortcutExitConfig         = "blueMSX - Exit Shortcut-Editor";
    ls->shortcutDiscardConfig      = "�nderungen der aktuellen Konfiguration verwerfen?"; // "M�chten Sie die �nderungen an der aktuellen Konfiguration verwerfen?";
    ls->shortcutSaveConfigAs       = "blueMSX - Speichere Shortcut-Konfiguration als ...";
    ls->shortcutConfigName         = "Konfigurationsname:";
    ls->shortcutNewProfile         = "< Neues Profil >";
    ls->shortcutConfigTitle        = "blueMSX - Shortcut Mapping-Editor";
    ls->shortcutAssign             = "Zuweisen";
    ls->shortcutPressText          = "Dr�cke Shortcut-Taste(n):";
    ls->shortcutScheme             = "Mapping Scheme:";
    ls->shortcutCartInsert1        = "Cartridge 1 einf�gen";
    ls->shortcutCartRemove1        = "Cartridge 1 entfernen";
    ls->shortcutCartInsert2        = "Cartridge 2 einf�gen";
    ls->shortcutCartRemove2        = "Cartridge 2 entfernen";
    ls->shortcutSpecialMenu1       = "Zeige spezielles ROM-Men� f�r Cartridge 1";
    ls->shortcutSpecialMenu2       = "Zeige spezielles ROM-Men� f�r Cartridge 2";
    ls->shortcutCartAutoReset      = "Emulator zur�cksetzen, wenn Cartridge eingef�gt wird";
    ls->shortcutDiskInsertA        = "Diskette A einf�gen";
    ls->shortcutDiskDirInsertA     = "Directory als Diskette A einf�gen";
    ls->shortcutDiskRemoveA        = "Diskette A auswerfen";
    ls->shortcutDiskChangeA        = "Schneller Austausch von Diskette A";
    ls->shortcutDiskAutoResetA     = "Emulator zur�cksetzen, wenn Diskette A eingef�gt wird";
    ls->shortcutDiskInsertB        = "Diskette B einf�gen";
    ls->shortcutDiskDirInsertB     = "Directory als Diskette B einf�gen";
    ls->shortcutDiskRemoveB        = "Diskette B auswerfen";
    ls->shortcutCasInsert          = "Cassette einf�gen";
    ls->shortcutCasEject           = "Cassette auswerfen";
    ls->shortcutCasAutorewind      = "Automatischen Bandr�cklauf umschalten";     // "Toggle Auto-rewind on Cassette";
    ls->shortcutCasReadOnly        = "Read-only-Status der Cassette umschalten";  // "Toggle Read-only Cassette";
    ls->shortcutCasSetPosition     = "Bandposition festlegen";
    ls->shortcutCasRewind          = "Cassette zur�ckspulen";
    ls->shortcutCasSave            = "Cassetten-Image speichern";
    ls->shortcutPrnFormFeed        = "Seitenvorschub des Druckers";
    ls->shortcutCpuStateLoad       = "CPU-Status laden";
    ls->shortcutCpuStateSave       = "CPU-Status speichern";
    ls->shortcutCpuStateQload      = "Schnelladen des CPU-Status";
    ls->shortcutCpuStateQsave      = "Schnellspeichern des CPU-Status";
    ls->shortcutAudioCapture       = "Start/stop Audio-Aufnahme";         // "Start/stop audio capture"; // capture = Erfassung, to capture = erfassen ...
    ls->shortcutScreenshotOrig     = "Screenshot-Aufnahme";               // "Screenshot capture";
    ls->shortcutScreenshotSmall    = "Kleiner, ungefilterter Screenshot"; // "Small unfiltered screenshot capture";
    ls->shortcutScreenshotLarge    = "Gro�er, ungefilterter Screenshot";  // "Large unfiltered screenshot capture";
    ls->shortcutQuit               = "blueMSX verlassen";
    ls->shortcutRunPause           = "Start/Unterbrechung der Emulation";
    ls->shortcutStop               = "Emulation stoppen";
    ls->shortcutResetHard          = "Hard-Reset";
    ls->shortcutResetSoft          = "Soft-Reset";
    ls->shortcutResetClean         = "Allgemeiner Reset";
    ls->shortcutSizeSmall          = "Kleine Fenstergr��e einstellen";
    ls->shortcutSizeNormal         = "Normale Fenstergr��e einstellen";
    ls->shortcutSizeFullscreen     = "Volle Bildschirmgr��e einstellen";
    ls->shortcutToggleFullscren    = "Bildschirmgr��e umschalten";
    ls->shortcutSizeMinimized      = "Fenster minimieren";
    ls->shortcutVolumeIncrease     = "Lautst�rke erh�hen";
    ls->shortcutVolumeDecrease     = "Lautst�rke vermindern";
    ls->shortcutVolumeMute         = "Ton abschalten";
    ls->shortcutVolumeStereo       = "Mono/Stereo umschalten";
    ls->shortcutSwitchMsxAudio     = "MSX-AUDIO umschalten";                 // "Toggle MSX-AUDIO switch";
    ls->shortcutSwitchFront        = "Panasonic-Frontschalter umschalten";   // "Toggle Panasonic front switch";
    ls->shortcutSwitchPause        = "Unterbrechungstaste umschalten";
    ls->shortcutToggleMouseLock    = "Maussperre umschalten";
    ls->shortcutEmuSpeedMax        = "Max. Emulationsgeschwindigkeit";
    ls->shortcutEmuPlayReverse  = "Rewind emulation";                     // New in 2.8.3
    ls->shortcutEmuSpeedToggle     = "Max. Emulationsgeschwindigkeit umschalten";
    ls->shortcutEmuSpeedNormal     = "Normale Emulationsgeschwindigkeit";
    ls->shortcutEmuSpeedInc        = "Emulationsgeschwindigkeit erh�hen";
    ls->shortcutEmuSpeedDec        = "Emulationsgeschwindigkeit vermindern";
    ls->shortcutThemeSwitch        = "Anderes Theme";
    ls->shortcutShowEmuProp        = "Zeige Emulationseigenschaften";
    ls->shortcutShowVideoProp      = "Zeige Video-Eigenschaften";
    ls->shortcutShowAudioProp      = "Zeige Audio-Eigenschaften";
    ls->shortcutShowCtrlProp       = "Zeige Control-Eigenschaften";
    ls->shortcutShowEffectsProp = "Show Effects Properties";     // New in 2.9
    ls->shortcutShowSettProp       = "Zeige Einstellungseigenschaften";
    ls->shortcutShowPorts          = "Zeige Ports-Eigenschaften";
    ls->shortcutShowLanguage       = "Zeige Sprachdialog";
    ls->shortcutShowMachines       = "Zeige Maschineneditor";
    ls->shortcutShowShortcuts      = "Zeige Shortcuts-Editor";
    ls->shortcutShowKeyboard       = "Zeige Keyboard-Editor";
    ls->shortcutShowMixer          = "Zeige Audio-Mixer";
    ls->shortcutShowDebugger       = "Zeige Debugger";
    ls->shortcutShowTrainer        = "Zeige Trainer";
    ls->shortcutShowHelp           = "Zeige Hilfe-Dialog";
    ls->shortcutShowAbout          = "Zeige ''About''-Dialog";
    ls->shortcutShowFiles          = "Zeige File-Eigenschaften";
    ls->shortcutToggleSpriteEnable = "Sprites zeigen/verdecken";
    ls->shortcutToggleFdcTiming    = "Freigabe/Sperren des Floppy-Drive-Timings";
    ls->shortcutToggleNoSpriteLimits = "Toggle Sprites Limitation";                 // New in 2.9
    ls->shortcutEnableMsxKeyboardQuirk = "Emulate MSX Keyboard Quirk";              // New in 2.9
    ls->shortcutToggleCpuTrace     = "Freigabe/Sperren des CPU-Trace";   // "Enable/Disable CPU Trace";
    ls->shortcutVideoLoad          = "Video-Aufnahme laden";             // New in 2.6 -- "Load Video Capture";
    ls->shortcutVideoPlay          = "Letzte Video-Aufnahme abspielen";  // New in 2.6 -- "Play Last Video Capture";
    ls->shortcutVideoRecord        = "Video-Aufnahme aufnehmen";         // New in 2.6 -- "Record Video Capture";
    ls->shortcutVideoStop          = "Video-Aufnahme stoppen";           // New in 2.6 -- "Stop Video Capture";
    ls->shortcutVideoRender        = "Videofile wiedergeben";            // New in 2.6 -- "Render Video File";


    //----------------------
    // Keyboard config lines
    //----------------------

    ls->keyconfigSelectedKey     = "Ausgew�hlte Taste:";    // "Selected Key:";
    ls->keyconfigMappedTo        = "Abgebildet auf:";       // "Mapped To:";
    ls->keyconfigMappingScheme   = "Abbildungsschema:";     // "Mapping Scheme:";

    
    //----------------------
    // Rom type lines
    //----------------------

    ls->romTypeStandard          = "Standard";
    ls->romTypeZenima80          = "Zemina 80 in 1";
    ls->romTypeZenima90          = "Zemina 90 in 1";
    ls->romTypeZenima126         = "Zemina 126 in 1";
    ls->romTypeSccMirrored       = "SCC mirrored";
    ls->romTypeSccExtended       = "SCC extended";
    ls->romTypeKonamiGeneric     = "Konami Generic";
    ls->romTypeMirrored          = "Mirrored ROM";
    ls->romTypeNormal            = "Normal ROM";
    ls->romTypeDiskPatch         = "Normal + Disk Patch";
    ls->romTypeCasPatch          = "Normal + Cassette Patch";
    ls->romTypeTc8566afFdc       = "TC8566AF Disk Controller";
    ls->romTypeTc8566afTrFdc     = "TC8566AF Turbo-R Disk Controller";
    ls->romTypeMicrosolFdc       = "Microsol Disk Controller";
    ls->romTypeNationalFdc       = "National Disk Controller";
    ls->romTypePhilipsFdc        = "Philips Disk Controller";
    ls->romTypeSvi707Fdc         = "SVI-707 Disk Controller";
    ls->romTypeSvi738Fdc         = "SVI-738 Disk Controller";
    ls->romTypeMappedRam         = "Mapped RAM";
    ls->romTypeMirroredRam1k     = "1kB Mirrored RAM";
    ls->romTypeMirroredRam2k     = "2kB Mirrored RAM";
    ls->romTypeNormalRam         = "Normal RAM";
    ls->romTypeTurborPause       = "Turbo-R Pause";
    ls->romTypeF4deviceNormal    = "F4 Device Normal";
    ls->romTypeF4deviceInvert    = "F4 Device Inverted";
    ls->romTypeTurborTimer       = "Turbo-R Timer";
    ls->romTypeNormal4000        = "Normal 4000h";
    ls->romTypeNormalC000        = "Normal C000h";
    ls->romTypeExtRam            = "External RAM";
    ls->romTypeExtRam16         = "16kB External RAM";
    ls->romTypeExtRam32         = "32kB External RAM";
    ls->romTypeExtRam48         = "48kB External RAM";
    ls->romTypeExtRam64         = "64kB External RAM";
    ls->romTypeExtRam512         = "512kB External RAM";
    ls->romTypeExtRam1mb         = "1MB External RAM";
    ls->romTypeExtRam2mb         = "2MB External RAM";
    ls->romTypeExtRam4mb         = "4MB External RAM";
    ls->romTypeSvi328Cart        = "SVI-328 Cartridge";
    ls->romTypeSvi328Fdc         = "SVI-328 Disk Controller";
    ls->romTypeSvi328Prn         = "SVI-328 Printer";
    ls->romTypeSvi328Uart        = "SVI-328 Serial Port";
    ls->romTypeSvi328col80       = "SVI-328 80 Column Card";
    ls->romTypeSvi727col80       = "SVI-727 80 Column Card";
    ls->romTypeColecoCart        = "Coleco Cartridge";
    ls->romTypeSg1000Cart        = "SG-1000 Cartridge";
    ls->romTypeSc3000Cart        = "SC-3000 Cartridge";
    ls->romTypeMsxPrinter        = "MSX Printer";
    ls->romTypeTurborPcm         = "Turbo-R PCM Chip";
    ls->romTypeNms8280Digitiz    = "Philips NMS-8280 Digitizer";
    ls->romTypeHbiV1Digitiz      = "Sony HBI-V1 Digitizer";
    
    
    //----------------------
    // Debug type lines
    // Note: Only needs translation if debugger is translated
    //----------------------

    ls->dbgMemVisible            = "Visible Memory";
    ls->dbgMemRamNormal          = "Normal";
    ls->dbgMemRamMapped          = "Mapped";
    ls->dbgMemYmf278             = "YMF278 Sample RAM";
    ls->dbgMemAy8950             = "AY8950 Sample RAM";
    ls->dbgMemScc                = "Memory";

    ls->dbgCallstack             = "Callstack";

    ls->dbgRegs                  = "Registers";
    ls->dbgRegsCpu               = "CPU Registers";
    ls->dbgRegsYmf262            = "YMF262 Registers";
    ls->dbgRegsYmf278            = "YMF278 Registers";
    ls->dbgRegsAy8950            = "AY8950 Registers";
    ls->dbgRegsYm2413            = "YM2413 Registers";

    ls->dbgDevRamMapper          = "RAM Mapper";
    ls->dbgDevRam                = "RAM";
    ls->dbgDevF4Device           = "F4 Device";
    ls->dbgDevKorean80           = "Korean 80";
    ls->dbgDevKorean90           = "Korean 90";
    ls->dbgDevKorean128          = "Korean 128";
    ls->dbgDevFdcMicrosol        = "Microsol FDC";
    ls->dbgDevPrinter            = "Printer";
    ls->dbgDevSviFdc             = "SVI FDC";
    ls->dbgDevSviPrn             = "SVI Printer";
    ls->dbgDevSvi80Col           = "SVI 80 Column";
    ls->dbgDevRtc                = "RTC";
    ls->dbgDevTrPause            = "TR Pause";


    //----------------------
    // Debug type lines
    // Note: Can only be translated to european languages
    //----------------------
    ls->aboutScrollThanksTo      = "Vielen Dank an: ";
    ls->aboutScrollAndYou        = "und SIE !!!!";
};

#endif

