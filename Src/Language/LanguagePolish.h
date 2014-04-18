/*****************************************************************************
** $Source: /cygdrive/d/Private/_SVNROOT/bluemsx/blueMSX/Src/Language/LanguagePolish.h,v $
**
** $Revision: 1.49 $
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
#ifndef LANGUAGE_POLISH_H
#define LANGUAGE_POLISH_H

#include "LanguageStrings.h"
 
void langInitPolish(LanguageStrings* ls) 
{
    //----------------------
    // Language lines
    //----------------------

    ls->langCatalan             = "Catalan";
    ls->langChineseSimplified   = "Chinese Simplified";
    ls->langChineseTraditional  = "Chinese Traditional";
    ls->langDutch               = "Dutch";
    ls->langEnglish             = "English";
    ls->langFinnish             = "Finnish";
    ls->langFrench              = "French";
    ls->langGerman              = "German";
    ls->langItalian             = "Italian";
    ls->langJapanese            = "Japanese";
    ls->langKorean              = "Korean";
    ls->langPolish              = "Polish";
    ls->langPortuguese          = "Portuguese";
    ls->langRussian             = "Russian";            // v2.8
    ls->langSpanish             = "Spanish";
    ls->langSwedish             = "Swedish";


    //----------------------
    // Generic lines
    //----------------------

    ls->textDevice              = "Urz�dzenie:";
    ls->textFilename            = "Nazwa pliku:";
    ls->textFile                = "Plik";
    ls->textNone                = "Brak";
    ls->textUnknown             = "Nieznany";                            


    //----------------------
    // Warning and Error lines
    //----------------------

    ls->warningTitle             = "blueMSX - Uwaga";
    ls->warningDiscardChanges   = "Czy chcesz zniszczy� zmiany?";
    ls->warningOverwriteFile    = "Czy chcesz nadpisa� plik:"; 
    ls->errorTitle              = "blueMSX - b��d";
    ls->errorEnterFullscreen    = "Nie mog� prze��czy� na pe�ny ekran.           \n";
    ls->errorDirectXFailed      = "Nie mog� stworzy� obiekt�w DirectX.           \nPrze��czam w tryb GDI.\nSprawd� w�a�ciwo�ci wideo.";
    ls->errorNoRomInZip         = "Nie znaleziono pliku .rom w archiwum zip.";
    ls->errorNoDskInZip         = "Nie znaleziono pliku .dsk w archiwum zip.";
    ls->errorNoCasInZip         = "Nie znaleziono pliku .cas w archiwum zip.";
    ls->errorNoHelp             = "Nie znaleziono pliku pomocy blueMSX.";
    ls->errorStartEmu           = "Nie uda�o si� uruchomi� emulatora MSX.";
    ls->errorPortableReadonly   = "Urz�dzenie przeno�ne - tylko do odczytu";        


    //----------------------
    // File related lines
    //----------------------

    ls->fileRom                 = "ROM image";
    ls->fileAll                 = "Wszystkie pliki";
    ls->fileCpuState            = "Stan CPU";
    ls->fileVideoCapture        = "Video Capture"; // New in 2.6
    ls->fileDisk                = "Obraz dysku";
    ls->fileCas                 = "Obraz ta�my";
    ls->fileAvi                 = "Video Clip";    // New in 2.6


    //----------------------
    // Menu related lines
    //----------------------

    ls->menuNoRecentFiles       = "- brak ostatnich plik�w -";
    ls->menuInsert              = "Wybierz";
    ls->menuEject               = "Wysu�";

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
    ls->menuCartSCCPlus         = "SCC-I Kartrid�";
    ls->menuCartFMPac           = "Kartrid� FM-PAC";
    ls->menuCartPac             = "Kartrid� PAC";
    ls->menuCartHBI55           = "Sony HBI-55 Cartridge";
    ls->menuCartInsertSpecial   = "W�� inny";                     
    ls->menuCartMegaRam         = "MegaRAM";                            
    ls->menuCartExternalRam     = "Zewn�trzny RAM";
    ls->menuCartEseRam          = "Ese-RAM";             // New in 2.7
    ls->menuCartEseSCC          = "Ese-SCC";             // New in 2.7
    ls->menuCartMegaFlashRom    = "Mega Flash ROM";      // New in 2.7

    ls->menuDiskInsertNew       = "W�� nowy obraz dysku";              
    ls->menuDiskInsertCdrom     = "Insert CD-Rom";       // New in 2.7
    ls->menuDiskDirInsert       = "Podepnij folder";
    ls->menuDiskAutoStart       = "Resetuj po zmianie dyskietki";
    ls->menuCartAutoReset       = "Resetuj po zmianie kartrid�a";
    
    ls->menuCasRewindAfterInsert = "Najpierw przewi� do pocz�tku";
    ls->menuCasUseReadOnly       = "U�ywaj kaset 'tylko do odczytu'";
    ls->lmenuCasSaveAs           = "Zapisz kaset� jako...";
    ls->menuCasSetPosition      = "Ustaw pozycj�";
    ls->menuCasRewind           = "Przewi� do pocz�tku";

    ls->menuVideoLoad           = "Load...";             // New in 2.6
    ls->menuVideoPlay           = "Play Last Capture";   // New in 2.6
    ls->menuVideoRecord         = "Record";              // New in 2.6
    ls->menuVideoRecording      = "Recording";           // New in 2.6
    ls->menuVideoRecAppend      = "Record (append)";     // New in 2.6
    ls->menuVideoStop           = "Stop";                // New in 2.6
    ls->menuVideoRender         = "Render Video File";   // New in 2.6

    ls->menuPrnFormfeed         = "Wysu� papier";

    ls->menuZoomNormal          = "Standardowe";
    ls->menuZoomDouble          = "Podw�jne";
    ls->menuZoomFullscreen      = "Pe�ny ekran";
    
    ls->menuPropsEmulation      = "Emulacja";
    ls->menuPropsVideo          = "Obraz";
    ls->menuPropsSound          = "D�wi�k";
    ls->menuPropsControls       = "Sterowanie";
    ls->menuPropsEffects        = "Effects";               // New in 2.9
    ls->menuPropsSettings        = "Ustawienia";
    ls->menuPropsFile           = "Pliki";
    ls->menuPropsDisk           = "Disks";               // New in 2.7
    ls->menuPropsLanguage       = "J�zyk";
    ls->menuPropsPorts          = "Porty";
    
    ls->menuVideoSource         = "�r�d�o wyj�cia 'Video Out'";                   
    ls->menuVideoSourceDefault  = "Brak �r�d�a dla 'Video Out'";      
    ls->menuVideoChipAutodetect = "Autodetekcja ko�ci obrazu";    
    ls->menuVideoInSource       = "�r�d�o 'Video In'";                    
    ls->menuVideoInBitmap       = "Plik bitmapy";                        
    
    ls->menuEthInterface        = "Ethernet Interface"; // New in 2.6

    ls->menuHelpHelp            = "Tematy pomocy";
    ls->menuHelpAbout           = "O blueMSX...";

    ls->menuFileCart            = "Kartrid�";
    ls->menuFileDisk            = "Stacja dyskietek";
    ls->menuFileCas             = "Kaseta";
    ls->menuFilePrn             = "Drukarka";
    ls->menuFileLoadState       = "Wczytaj stan CPU";
    ls->menuFileSaveState       = "Zapisz stan CPU";
    ls->menuFileQLoadState      = "Szybki odczyt stanu";
    ls->menuFileQSaveState      = "Szybki zapis stanu";
    ls->menuFileCaptureAudio    = "Przechwy� d�wi�k";
    ls->menuFileCaptureVideo    = "Video Capture"; // New in 2.6
    ls->menuFileScreenShot      = "Zapisz ekran";
    ls->menuFileExit            = "Wyj�cie";

    ls->menuFileHarddisk        = "Dysk Twardy";                          
    ls->menuFileHarddiskNoPesent= "Brak sterownika";             
    ls->menuFileHarddiskRemoveAll= "Eject All Harddisk";    // New in 2.7

    ls->menuRunRun              = "Uruchom";
    ls->menuRunPause            = "Pauza";
    ls->menuRunStop             = "Zatrzymaj";
    ls->menuRunSoftReset        = "Mi�kki reset";
    ls->menuRunHardReset        = "Twardy reset";
    ls->menuRunCleanReset       = "Pe�ny reset";

    ls->menuToolsMachine         = "Edytor komputer�w";
    ls->menuToolsCtrlEditor     = "Controllers / Keyboard Editor"; // New in 2.6
    ls->menuToolsKeyboard       = "Edytor klawiatury";
    ls->menuToolsMixer          = "Mikser";
    ls->menuToolsLoadMemory     = "Pamiec obciazenia";
    ls->menuToolsDebugger       = "Debugger";               
    ls->menuToolsTrainer        = "Trainer";                
    ls->menuToolsTraceLogger    = "Trace Logger";           

    ls->menuFile                = "Plik";
    ls->menuRun                 = "Uruchamianie";
    ls->menuWindow              = "Okno";
    ls->menuOptions             = "Opcje";
    ls->menuTools                = "Narz�dzia";
    ls->menuHelp                = "Pomoc";
    

    //----------------------
    // Dialog related lines
    //----------------------

    ls->dlgOK                   = "OK";
    ls->dlgOpen                 = "Otw�rz";
    ls->dlgCancel               = "Anuluj";
    ls->dlgSave                 = "Zapisz";
    ls->dlgSaveAs               = "Zapisz jako...";
    ls->dlgRun                  = "Uruchom";
    ls->dlgClose                = "Zamknij";

    ls->dlgLoadRom              = "blueMSX - Wybierz plik rom do wczytania";
    ls->dlgLoadDsk              = "blueMSX - Wybierz plik dsk do wczytania";
    ls->dlgLoadCas              = "blueMSX - Wybierz plik cas do wczytania";
    ls->dlgLoadRomDskCas        = "blueMSX - Wybierz plik rom, dsk lub cas do wczytania";
    ls->dlgLoadRomDesc          = "Wybierz rom do wczytania:";
    ls->dlgLoadDskDesc          = "Wybierz dyskietk� do wczytania:";
    ls->dlgLoadCasDesc          = "Wybierz ta�m� do wczytania:";
    ls->dlgLoadRomDskCasDesc    = "Wybierz rom, dyskietk� lub ta�m� do wczytania:";
    ls->dlgLoadState            = "Wczytaj stan CPU";
    ls->dlgLoadVideoCapture     = "Load video capture";      // New in 2.6
    ls->dlgSaveState            = "Zapisz stan CPU";
    ls->dlgSaveCassette          = "blueMSX - Zapisz obraz kasety";
    ls->dlgSaveVideoClipAs      = "Save video clip as...";      // New in 2.6
    ls->dlgAmountCompleted      = "Amount completed:";          // New in 2.6
    ls->dlgInsertRom1           = "Wybierz kartrid� ROM dla slotu 1";
    ls->dlgInsertRom2           = "Wybierz kartrid� ROM dla slotu 2";
    ls->dlgInsertDiskA          = "Wybierz dyskietk� dla stacji A";
    ls->dlgInsertDiskB          = "Wybierz dyskietk� dla stacji B";
    ls->dlgInsertHarddisk       = "Pod��cz Twardy Dysk";                   
    ls->dlgInsertCas            = "Wybierz kaset�";
    ls->dlgRomType              = "Typ romu:";
    ls->dlgDiskSize             = "Disk Size:";             // New in 2.6

    ls->dlgTapeTitle            = "blueMSX - Pozycja ta�my";
    ls->dlgTapeFrameText        = "Pozycja ta�my";
    ls->dlgTapeCurrentPos       = "Obecna pozycja";
    ls->dlgTapeTotalTime        = "Czas ca�kowity";
    ls->dlgTapeSetPosText        = "Pozycja ta�my:";
    ls->dlgTapeCustom            = "Poka� dowolne pliki";
    ls->dlgTabPosition           = "Pozycja";
    ls->dlgTabType               = "Typ";
    ls->dlgTabFilename           = "Nazwa pliku";
    ls->dlgZipReset             = "Resettuj po zmianie";

    ls->dlgAboutTitle           = "blueMSX - O programie";

    ls->dlgLangLangText         = "Wybierz j�zyk dla blueMSX";
    ls->dlgLangLangTitle        = "blueMSX - J�zyk";

    ls->dlgAboutAbout           = "O programie\r\n====";
    ls->dlgAboutVersion         = "Wersja:";
    ls->dlgAboutBuildNumber     = "Kompilacja:";
    ls->dlgAboutBuildDate       = "Data:";
    ls->dlgAboutCreat           = "Program Daniela Vika";
    ls->dlgAboutDevel           = "PROGRAMI�CI\r\n========";
    ls->dlgAboutThanks          = "SPECJALNE PODZI�KOWANIA DLA\r\n============";       // New in 2.7 (retranslate, see english)
    ls->dlgAboutLisence         = "LICENSE\r\n"
                                  "======\r\n\r\n"
                                  "This software is provided 'as-is', without any express or implied "
                                  "warranty. In no event will the author(s) be held liable for any damages "
                                  "arising from the use of this software.\r\n\r\n"
                                  "Visit www.bluemsx.com for more details.";

    ls->dlgSavePreview          = "Poka� podgl�d";
    ls->dlgSaveDate             = "Czas zapisu:";

    ls->dlgRenderVideoCapture   = "blueMSX - Rendering Video Capture...";  // New in 2.6


    //----------------------
    // Properties related lines
    //----------------------

    ls->propTitle               = "blueMSX - W�a�ciwo�ci";
    ls->propEmulation           = "Emulacja";
    ls->propVideo               = "Obraz";
    ls->propSound               = "D�wi�k";
    ls->propControls            = "Sterowanie";
    ls->propPerformance         = "Wydajno��";
    ls->propEffects             = "Effects";             // New in 2.9
    ls->propSettings             = "Ustawienia";
    ls->propFile                = "Pliki";
    ls->propDisk                = "Disks";              // New in 2.7
    ls->propPorts               = "Porty";
    
    ls->propEmuGeneralGB        = "Og�lne ";
    ls->propEmuFamilyText       = "Typ MSX:";
    ls->propEmuMemoryGB         = "Pami�� ";
    ls->propEmuRamSizeText      = "Rozmiar RAMu:";
    ls->propEmuVramSizeText     = "Rozmiar VRAMu:";
    ls->propEmuSpeedGB          = "Szybko�� emulacji ";
    ls->propEmuSpeedText        = "Szybko�� emulacji:";
    ls->propEmuFrontSwitchGB     = "Prze��czniki Panasonic ";
    ls->propEmuFrontSwitch       = " Prze��cznik g��wny";
    ls->propEmuNoSpriteLimits   = " Disable Sprites Limitation";  // New in 2.9
    ls->propEnableMsxKeyboardQuirk = " Emulate MSX keyboard quirk";  // New in 2.9
    ls->propEmuFdcTiming        = " Wy��cz timing stacji dyskietek";
    ls->propEmuReversePlay      = " Enable reverse playback"; // New in 2.8.3
    ls->propEmuPauseSwitch      = " Prze��cznik pauzy";
    ls->propEmuAudioSwitch       = " Prze��cznik kartrid�a MSX-AUDIO";
    ls->propVideoFreqText       = "Cz�stotliwo�� obrazu:";
    ls->propVideoFreqAuto       = "Auto";
    ls->propSndOversampleText   = "Oversampling:";
    ls->propSndYkInGB           = "Wej�cie YK-01/YK-10/YK-20 ";                
    ls->propSndMidiInGB         = "MIDI In ";
    ls->propSndMidiOutGB        = "MIDI Out ";
    ls->propSndMidiChannel      = "Kana� MIDI:";                      
    ls->propSndMidiAll          = "Wszystkie";                                

    ls->propMonMonGB            = "Monitor ";
    ls->propMonTypeText         = "Typ monitora:";
    ls->propMonEmuText          = "Emulacja monitora:";
    ls->propVideoTypeText       = "Typ obrazu:";
    ls->propWindowSizeText      = "Rozmiar okna:";
    ls->propMonHorizStretch      = " Rozci�gaj w poziomie";
    ls->propMonVertStretch       = " Rozci�gaj w pionie";
    ls->propMonDeInterlace      = " Usuwaj przeplot";
    ls->propBlendFrames         = " Zlej ze sob� kolejne klatki";           
    ls->propMonBrightness       = "Jasno��:";
    ls->propMonColorGhosting    = " Modulator RF:";
    ls->propMonContrast         = "Kontrast:";
    ls->propMonSaturation       = "Nasycenie:";
    ls->propMonGamma            = "Gamma:";
    ls->propMonScanlines        = " Przeplot:";
    ls->propMonEffectsGB        = "Efekty ";

    ls->propPerfVideoDrvGB      = "Ustawienia Video ";
    ls->propPerfVideoDispDrvText= "Sterownik obrazu:";
    ls->propPerfFrameSkipText   = "Gubienie klatek:";
    ls->propPerfAudioDrvGB      = "Ustawienia Audio ";
    ls->propPerfAudioDrvText    = "Sterownik d�wi�ku:";
    ls->propPerfAudioBufSzText  = "Rozmiar bufora d�wi�ku:";
    ls->propPerfEmuGB           = "Emulacja ";
    ls->propPerfSyncModeText    = "Tryb synchronizacji:";
    ls->propFullscreenResText   = "Pe�ny ekran:";

    ls->propSndChipEmuGB        = "Emulacja d�wi�ku ";
    ls->propSndMsxMusic         = " MSX-MUSIC";
    ls->propSndMsxAudio         = " MSX-AUDIO";
    ls->propSndMoonsound         = " Moonsound";
    ls->propSndMt32ToGm         = " Mapuj instrumenty MT-32 na General MIDI";

    ls->propPortsLptGB          = "Port r�wnoleg�y ";
    ls->propPortsComGB          = "Port szeregowy ";
    ls->propPortsLptText        = "Port:";
    ls->propPortsCom1Text       = "Port 1:";
    ls->propPortsNone           = "Brak";
    ls->propPortsSimplCovox     = "SiMPL / Covox DAC";
    ls->propPortsFile           = "Drukuj do pliku";
    ls->propPortsComFile        = "Send to File";
    ls->propPortsOpenLogFile    = "Otw�rz plik logu";
    ls->propPortsEmulateMsxPrn  = "Emulacja:";

    ls->propSetFileHistoryGB     = "Historia plik�w ";
    ls->propSetFileHistorySize   = "Ilo�c element�w w historii plik�w:";
    ls->propSetFileHistoryClear  = "Wyczy�� histori�";
    ls->propFileTypes            = " Skoja� pliki z blueMSX (.rom, .dsk, .cas, .sta)";
    ls->propWindowsEnvGB         = "Otoczenie Windows "; 
    ls->propSetScreenSaver       = " Wy��cz wygaszacz podczas pracy blueMSX";
    ls->propDisableWinKeys       = " Automatyczna konfiguracja klawiszy Windows w MSX"; 
    ls->propPriorityBoost       = " Podnie� priorytet blueMSX";
    ls->propScreenshotPng       = " u�ywaj PNG do zapisywania ekran�w";  
    ls->propEjectMediaOnExit    = " Eject media when blueMSX exits";        // New in 2.8
    ls->propClearHistory         = "Na pewno wyczy�ci� histori� plik�w?";
    ls->propOpenRomGB           = "Okno wyboru romu ";
    ls->propDefaultRomType      = "Domy�lny typ romu:";
    ls->propGuessRomType        = "Odgadnij typ romu";

    ls->propSettDefSlotGB       = "Przeci�gnij-i-upu�� ";
    ls->propSettDefSlots        = "W�� rom do:";
    ls->propSettDefSlot         = " Slot";
    ls->propSettDefDrives       = "W�� dyskietk� do:";
    ls->propSettDefDrive        = " Stacji";

    ls->propThemeGB             = "Temat ";
    ls->propTheme               = "Temat:";

    ls->propCdromGB             = "CD-ROM ";         // New in 2.7
    ls->propCdromMethod         = "Access Method:";  // New in 2.7
    ls->propCdromMethodNone     = "None";            // New in 2.7
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

    ls->enumVideoMonColor       = "Kolorowy";
    ls->enumVideoMonGrey        = "Czarno-bia�y";
    ls->enumVideoMonGreen       = "Zielony";
    ls->enumVideoMonAmber       = "Bursztynowy";

    ls->enumVideoTypePAL        = "PAL";
    ls->enumVideoTypeNTSC       = "NTSC";

    ls->enumVideoEmuNone        = "Brak";
    ls->enumVideoEmuYc          = "Kabel Y/C (ostry)";
    ls->enumVideoEmuMonitor     = "Monitor";
    ls->enumVideoEmuYcBlur      = "Zaszumiony kabel Y/C (ostry)";
    ls->enumVideoEmuComp        = "Kompozytowe (rozmyte)";
    ls->enumVideoEmuCompBlur    = "Zaszumione kompozytowe (rozmyte)";
    ls->enumVideoEmuScale2x     = "Skalowanie 2x";
    ls->enumVideoEmuHq2x        = "Hq2x";

    ls->enumVideoSize1x         = "Pojedyncza - 320x200";
    ls->enumVideoSize2x         = "Podw�jna - 640x400";
    ls->enumVideoSizeFullscreen = "Pe�ny ekran";

    ls->enumVideoDrvDirectDrawHW = "DirectDraw (sprz�towy)"; 
    ls->enumVideoDrvDirectDraw  = "DirectDraw";
    ls->enumVideoDrvGDI         = "GDI";
    ls->enumVideoDrvD3D         = "Direct3D";

    ls->enumVideoFrameskip0     = "Brak";
    ls->enumVideoFrameskip1     = "1 klatka";
    ls->enumVideoFrameskip2     = "2 klatki";
    ls->enumVideoFrameskip3     = "3 klatki";
    ls->enumVideoFrameskip4     = "4 klatki";
    ls->enumVideoFrameskip5     = "5 klatek";

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

    ls->enumSoundDrvNone        = "Brak d�wi�ku";
    ls->enumSoundDrvWMM         = "Driver WMM";
    ls->enumSoundDrvDirectX     = "Driver DirectX";

    ls->enumEmuSync1ms          = "Synchronizuj z od�wie�aniem MSX";
    ls->enumEmuSyncAuto         = "Auto (szybkie)";
    ls->enumEmuSyncNone         = "None";
    ls->enumEmuSyncVblank       = "Synchronizuj z synchronizacj� pionow� PC";
    ls->enumEmuAsyncVblank      = "Asynchronous PC Vblank";             

    ls->enumControlsJoyNone     = "Brak";
    ls->enumControlsJoyMouse    = "Mysz";
    ls->enumControlsJoyTetris2Dongle = "Dongle Tetris 2";
    ls->enumControlsJoyTMagicKeyDongle = "MagicKey Dongle";             
    ls->enumControlsJoy2Button = "D�ojstik 2-przyciskowy";                   
    ls->enumControlsJoyGunstick  = "Gun Stick";                         
    ls->enumControlsJoyAsciiLaser="ASCII Plus-X Terminator Laser";      
    ls->enumControlsArkanoidPad  ="Arkanoid Pad";                   // New in 2.7.1
    ls->enumControlsJoyColeco = "D�ojstik ColecoVision";                

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

    ls->confTitle                = "blueMSX - Edytor Konfiguracji Komputer�w";
    ls->confConfigText           = "Konfiguracja";
    ls->confSlotLayout           = "Uk�ad slot�w";
    ls->confMemory               = "Pami��";
    ls->confChipEmulation        = "Uk�ad obrazu";
    ls->confChipExtras          = "Extras";

    ls->confOpenRom             = "Otw�rz ROM";
    ls->confSaveTitle            = "blueMSX - Zapis konfiguracji";
    ls->confSaveText             = "Czy chcesz nadpisa� konfiguracj�:";
    ls->confSaveAsTitle         = "Zapisz konfiguracj� jako...";
    ls->confSaveAsMachineName    = "Nazwa komputera:";
    ls->confDiscardTitle         = "blueMSX - Konfiguracja";
    ls->confExitSaveTitle        = "blueMSX - Wyjd� z Edytora Konfiguracj";
    ls->confExitSaveText         = "Czy chcesz zignorowa� zmiany w bierz�cej konfiguracji?";

    ls->confSlotLayoutGB         = "Uk�ad slot�w ";
    ls->confSlotExtSlotGB        = "Zewn�trzne sloty ";
    ls->confBoardGB             = "Board ";
    ls->confBoardText           = "Board Type:";
    ls->confSlotPrimary          = "Podstawowy";
    ls->confSlotExpanded         = "Rozszerzone (cztery sub-sloty)";

    ls->confSlotCart             = "Kartrid�";
    ls->confSlot                = "Slot";
    ls->confSubslot             = "Podslot";

    ls->confMemAdd               = "Dodaj...";
    ls->confMemEdit              = "Edytuj...";
    ls->confMemRemove            = "Usu�";
    ls->confMemSlot              = "Slot";
    ls->confMemAddresss          = "Adres";
    ls->confMemType              = "Typ";
    ls->confMemRomImage          = "Obraz rom";
    
    ls->confChipVideoGB          = "Obraz ";
    ls->confChipVideoChip        = "Ko�� obrazu:";
    ls->confChipVideoRam         = "Pami�� RAM obrazu:";
    ls->confChipSoundGB          = "D�wi�k ";
    ls->confChipPsgStereoText    = " PSG Stereo";

    ls->confCmosGB                = "CMOS ";
    ls->confCmosEnable            = " Enable CMOS";
    ls->confCmosBattery           = " Use Charged Battery";

    ls->confCpuFreqGB            = "CPU Frequency ";
    ls->confZ80FreqText          = "Z80 Frequency:";
    ls->confR800FreqText         = "R800 Frequency:";
    ls->confFdcGB                = "Floppy Disk Controller ";
    ls->confCFdcNumDrivesText    = "Number of Drives:";

    ls->confEditMemTitle         = "blueMSX - Edytuj Mapper";
    ls->confEditMemGB            = "Konfiguracja Mappera ";
    ls->confEditMemType          = "Typ:";
    ls->confEditMemFile          = "Plik:";
    ls->confEditMemAddress       = "Adres";
    ls->confEditMemSize          = "Rozmiar";
    ls->confEditMemSlot          = "Slot";


    //----------------------
    // Shortcut lines
    //----------------------

    ls->shortcutKey             = "Hotkey";
    ls->shortcutDescription     = "Skr�t";

    ls->shortcutSaveConfig      = "blueMSX - Zapisz konfiguracj�";
    ls->shortcutOverwriteConfig = "Chcesz nadpisa� konfiguracj� skr�t�w?:";
    ls->shortcutExitConfig      = "blueMSX - Wyjd� z edytora skr�t�w";
    ls->shortcutDiscardConfig   = "Czy chcesz zignorowa� zmiany w bierz�cej konfiguracji?";
    ls->shortcutSaveConfigAs    = "blueMSX - Zapisz konfiguracj� skr�t�w jako...";
    ls->shortcutConfigName      = "Nazwa konfiguracji:";
    ls->shortcutNewProfile      = "< Nowy profil >";
    ls->shortcutConfigTitle     = "blueMSX - Edytor Mapowania Skr�t�w";
    ls->shortcutAssign          = "Przypisz";
    ls->shortcutPressText       = "Naci�nij przycisk(i) skr�tu:";
    ls->shortcutScheme          = "Schemat mapowania:";
    ls->shortcutCartInsert1     = "W�� kartrid� 1";
    ls->shortcutCartRemove1     = "Wyjmij kartrid� 1";
    ls->shortcutCartInsert2     = "W�� kartrid� 2";
    ls->shortcutCartRemove2     = "Wyjmij kartrid� 2";
    ls->shortcutSpecialMenu1    = "Wy�wietl specjalne menu 1-go kartrid�a";
    ls->shortcutSpecialMenu2    = "Wy�wietl specjalne menu 2-go kartrid�a";
    ls->shortcutCartAutoReset   = "Resetuj emulator przy wk�adaniu kartrid�a";
    ls->shortcutDiskInsertA     = "W�� dyskietk� A";
    ls->shortcutDiskDirInsertA  = "Pod��cz folder jako dyskietk� A";
    ls->shortcutDiskRemoveA     = "Wyjmij dyskietk� A";
    ls->shortcutDiskChangeA     = "Szybka zmiana dyskietki A";
    ls->shortcutDiskAutoResetA  = "Resetuj emulator przy wk�adaniu dyskietki A";
    ls->shortcutDiskInsertB     = "W�� dyskietk� B";
    ls->shortcutDiskDirInsertB  = "Pod��cz folder jako dyskietk� B";
    ls->shortcutDiskRemoveB     = "Wyjmij dyskietk� B";
    ls->shortcutCasInsert       = "W�� kaset�";
    ls->shortcutCasEject        = "Wyjmij kaset�";
    ls->shortcutCasAutorewind   = "Prze��cz auto-przewijanie kasety";
    ls->shortcutCasReadOnly     = "Prze��cz kaset� na 'tylko do odczytu'";
    ls->shortcutCasSetPosition  = "Ustaw pozycj� kasety";
    ls->shortcutCasRewind       = "Przewi� kaset�";
    ls->shortcutCasSave         = "Zapisz obraz kasety";
    ls->shortcutPrnFormFeed     = "Wysu� kartk� z drukarki";
    ls->shortcutCpuStateLoad    = "Wczytaj stan CPU";
    ls->shortcutCpuStateSave    = "Zapisz stan CPU";
    ls->shortcutCpuStateQload   = "Szybkie wczytanie stanu CPU";
    ls->shortcutCpuStateQsave   = "Szybki zapis stanu CPU";
    ls->shortcutAudioCapture    = "Uruchom/zatrzymaj zapis d�wi�ku";
    ls->shortcutScreenshotOrig  = "Zapisanie zrzutu ekranu";
    ls->shortcutScreenshotSmall = "Ma�y, niefiltrowany zrzut ekranu";
    ls->shortcutScreenshotLarge = "Du�y, niefiltrowany zrzut ekranu";
    ls->shortcutQuit            = "Wyj�cie z blueMSX";
    ls->shortcutRunPause        = "Uruchom/zpauzuj emulacj�";
    ls->shortcutStop            = "Zatrzymaj emulacje";
    ls->shortcutResetHard       = "Twardy Reset";
    ls->shortcutResetSoft       = "Mi�kki Reset";
    ls->shortcutResetClean      = "Og�lny Reset";
    ls->shortcutSizeSmall       = "Ustaw ma�y rozmiar okna";
    ls->shortcutSizeNormal      = "Ustaw normalny rozmiar okna";
    ls->shortcutSizeFullscreen  = "Ustaw pe�ny ekran";
    ls->shortcutSizeMinimized   = "Minimalizuj okno";
    ls->shortcutToggleFullscren = "Prze��czaj pe�ny ekran";
    ls->shortcutVolumeIncrease  = "Podg�o�nij d�wi�k";
    ls->shortcutVolumeDecrease  = "�cisz d�wi�k";
    ls->shortcutVolumeMute      = "Wy��cz d�wi�k";
    ls->shortcutVolumeStereo    = "Prze��cz mono/stereo";
    ls->shortcutSwitchMsxAudio  = "Prze��cznik MSX-AUDIO";
    ls->shortcutSwitchFront     = "Prze��cznik g��wny Panasonic";
    ls->shortcutSwitchPause     = "Pauza";
    ls->shortcutToggleMouseLock = "Przechwytywanie myszy";
    ls->shortcutEmuSpeedMax     = "Maksymalna pr�dko�� emulacji";
    ls->shortcutEmuPlayReverse  = "Rewind emulation";                     // New in 2.8.3
    ls->shortcutEmuSpeedToggle  = "Prze��cz maksymaln� pr�dko�� emulacji";
    ls->shortcutEmuSpeedNormal  = "Normalna pr�dko�� emulacji";
    ls->shortcutEmuSpeedInc     = "Zwi�ksz pr�dko�� emulacji";
    ls->shortcutEmuSpeedDec     = "Zmniejsz pr�dko�� emulacji";
    ls->shortcutThemeSwitch     = "Zmie� temat :)";
    ls->shortcutShowEmuProp     = "Wy�wietl okno w�a�ciwo�ci";
    ls->shortcutShowVideoProp   = "Wy�wietl ustawienia obrazu";
    ls->shortcutShowAudioProp   = "Wy�wietl ustawienia d�wi�ku";
    ls->shortcutShowCtrlProp    = "Wy�wietl ustawienia sterowania";
    ls->shortcutShowEffectsProp = "Show Effects Properties";     // New in 2.9
    ls->shortcutShowSettProp    = "Wy�wietl ustawienia";
    ls->shortcutShowPorts       = "Wy�wietl w�a�ciwo�ci port�w";
    ls->shortcutShowLanguage    = "Wy�wietl ustawienia j�zyka";
    ls->shortcutShowMachines    = "Wy�wietl Edytor Komputer�w";
    ls->shortcutShowShortcuts   = "Wy�wietl Edytor Skr�t�w";
    ls->shortcutShowKeyboard    = "Poka� edytor klawiatury";
    ls->shortcutShowMixer       = "Poka� mikser";
    ls->shortcutShowDebugger    = "Poka� Debugger";
    ls->shortcutShowTrainer     = "Wy�wietl Trainer";
    ls->shortcutShowHelp        = "Wy�wietl Pomoc";
    ls->shortcutShowAbout       = "Wy�wietl informacje O programie";
    ls->shortcutShowFiles       = "Poka� w�a�ciwo�ci pliku";
    ls->shortcutToggleSpriteEnable = "Poka�/ukryj sprite'y";
    ls->shortcutToggleFdcTiming = "W�./wy�. timing stacji dyskietek";
    ls->shortcutToggleNoSpriteLimits = "Toggle Sprites Limitation";                 // New in 2.9
    ls->shortcutEnableMsxKeyboardQuirk = "Emulate MSX Keyboard Quirk";              // New in 2.9
    ls->shortcutToggleCpuTrace  = "W�./wy�. �ledzenie CPU";
    ls->shortcutVideoLoad       = "Load...";             // New in 2.6
    ls->shortcutVideoPlay       = "Play Last Capture";   // New in 2.6
    ls->shortcutVideoRecord     = "Record";              // New in 2.6
    ls->shortcutVideoStop       = "Stop";                // New in 2.6
    ls->shortcutVideoRender     = "Render Video File";   // New in 2.6


    //----------------------
    // Keyboard config lines
    //----------------------

    ls->keyconfigSelectedKey    = "Wybrany klawisz:";
    ls->keyconfigMappedTo       = "Zmapowany na:";
    ls->keyconfigMappingScheme  = "Schemat mapowania:";

    
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

    ls->aboutScrollThanksTo     = "Special thanks to: ";
    ls->aboutScrollAndYou       = "and YOU !!!!";
};

#endif
