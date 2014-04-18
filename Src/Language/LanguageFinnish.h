/*****************************************************************************
** $Source: /cygdrive/d/Private/_SVNROOT/bluemsx/blueMSX/Src/Language/LanguageFinnish.h,v $
**
** $Revision: 1.59 $
**
** $Date: 2009-04-04 20:57:19 $
**
** More info: http://www.bluemsx.com
**
** Copyright (C) 2003-2012 Daniel Vik, NYYRIKKI
**
** Translated By : NYYRIKKI 2012
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
#ifndef LANGUAGE_FINNISH_H
#define LANGUAGE_FINNISH_H

#include "LanguageStrings.h"

void langInitFinnish(LanguageStrings* ls)
{
    //----------------------
    // Language lines
    //----------------------

    ls->langCatalan             = "Katalaani";
    ls->langChineseSimplified   = "Kiina, yksinkertaistettu";
    ls->langChineseTraditional  = "Kiina, perinteinen";
    ls->langDutch               = "Hollanti";
    ls->langEnglish             = "Englanti";
    ls->langFinnish             = "Suomi";
    ls->langFrench              = "Ranska";
    ls->langGerman              = "Saksa";
    ls->langItalian             = "Italia";
    ls->langJapanese            = "Japani";
    ls->langKorean              = "Korea";
    ls->langPolish              = "Puola";
    ls->langPortuguese          = "Portugali";
    ls->langRussian             = "Ven�j�";            // v2.8
    ls->langSpanish             = "Espanja";
    ls->langSwedish             = "Ruotsi";


    //----------------------
    // Generic lines
    //----------------------

    ls->textDevice              = "Laite:";
    ls->textFilename            = "Tiedostonimi:";
    ls->textFile                = "Tiedosto";
    ls->textNone                = "Ei k�yt�ss�";
    ls->textUnknown             = "Tuntematon";


    //----------------------
    // Warning and Error lines
    //----------------------

    ls->warningTitle            = "blueMSX - Varoitus";
    ls->warningDiscardChanges   = "Haluatko perua tekem�si muutokset?";
    ls->warningOverwriteFile    = "Haluatko korvata tiedoston:";
    ls->errorTitle              = "blueMSX - Virhe";
    ls->errorEnterFullscreen    = "Siirtyminen kokoruututilaan ep�onnistui.  \n";
    ls->errorDirectXFailed      = "DirectX objektien luonti ep�onnistui.      \nDirectX on korvattu GDI:ll�.\nTarkista video asetukset.";
    ls->errorNoRomInZip         = "Zip paketista ei l�ytynyt .ROM tiedostoa.";
    ls->errorNoDskInZip         = "Zip paketista ei l�ytynyt .DSK tiedostoa.";
    ls->errorNoCasInZip         = "Zip paketista ei l�ytynyt .CAS tiedostoa.";
    ls->errorNoHelp             = "blueMSX:n ohjetiedostoa ei l�ytynyt.";
    ls->errorStartEmu           = "MSX emulaattorin k�ynnistys ep�onnistui.";
    ls->errorPortableReadonly   = "Kannettava laite tukee vain lukemista.";


    //----------------------
    // File related lines
    //----------------------

    ls->fileRom                 = "ROM-tiedosto";
    ls->fileAll                 = "Kaikki tiedostot";
    ls->fileCpuState            = "Tilannetallenne";
    ls->fileVideoCapture        = "Videokaappaus"; 
    ls->fileDisk                = "Levytiedosto";
    ls->fileCas                 = "Kasettitiedosto";
    ls->fileAvi                 = "Videop�tk�";    


    //----------------------
    // Menu related lines
    //----------------------

    ls->menuNoRecentFiles       = "- ei viimeaikaisia tiedostoja -";
    ls->menuInsert              = "Aseta...";
    ls->menuEject               = "Poista";

    ls->menuCartGameReader      = "Game Reader";
    ls->menuCartIde             = "IDE";
    ls->menuCartBeerIde         = "Beer";
    ls->menuCartGIde            = "GIDE";
    ls->menuCartSunriseIde      = "Sunrise";  
    ls->menuCartScsi            = "SCSI";                // New in 2.7
    ls->menuCartMegaSCSI        = "MEGA-SCSI";           // New in 2.7
    ls->menuCartWaveSCSI        = "WAVE-SCSI";           // New in 2.7
    ls->menuCartGoudaSCSI       = "Gouda SCSI";          // New in 2.7
    ls->menuJoyrexPsg           = "Joyrex PSG Moduli"; // New in 2.9
    ls->menuCartSCC             = "SCC Moduli";
    ls->menuCartSCCPlus         = "SCC-I Moduli";
    ls->menuCartFMPac           = "FM-PAC Moduli";
    ls->menuCartPac             = "PAC Moduli";
    ls->menuCartHBI55           = "Sony HBI-55 Moduli";
    ls->menuCartInsertSpecial   = "Erikoismoduli";
    ls->menuCartMegaRam         = "MegaRAM";
    ls->menuCartExternalRam     = "Ulkoinen muisti";
    ls->menuCartEseRam          = "Ese-RAM";             // New in 2.7
    ls->menuCartEseSCC          = "Ese-SCC";             // New in 2.7
    ls->menuCartMegaFlashRom    = "Mega Flash ROM";      // New in 2.7

    ls->menuDiskInsertNew       = "Uusi levytiedosto";
    ls->menuDiskInsertCdrom     = "Aseta CD-ROM";       // New in 2.7
    ls->menuDiskDirInsert       = "Aseta hakemisto";
    ls->menuDiskAutoStart       = "K�ynnist� uudelleen asettamisen j�lkeen";
    ls->menuCartAutoReset       = "K�ynnist� uudelleen muutettaessa";

    ls->menuCasRewindAfterInsert = "Kelaa alkuun asetettaessa";
    ls->menuCasUseReadOnly       = "Kirjoitussuojaa kasetti";
    ls->lmenuCasSaveAs           = "Tallenna kasetti nimell�";
    ls->menuCasSetPosition      = "Valitse kohta";
    ls->menuCasRewind           = "Kelaa alkuun";

    ls->menuVideoLoad           = "Lataa...";             
    ls->menuVideoPlay           = "Toista viimeisin kaappaus";   
    ls->menuVideoRecord         = "Nauhoita";              
    ls->menuVideoRecording      = "Nauhoittaa";           
    ls->menuVideoRecAppend      = "Jatka nauhoitusta";     
    ls->menuVideoStop           = "Pys�yt�";                
    ls->menuVideoRender         = "Koosta videotiedosto";   

    ls->menuPrnFormfeed         = "Paperin vaihto";

    ls->menuZoomNormal          = "Pieni koko";
    ls->menuZoomDouble          = "Normaali koko";
    ls->menuZoomFullscreen      = "Kokoruututila";

    ls->menuPropsEmulation      = "Emulaatio";
    ls->menuPropsVideo          = "Video";
    ls->menuPropsSound          = "��ni";
    ls->menuPropsControls       = "Kontrollit";
    ls->menuPropsEffects        = "Effects";               // New in 2.9
    ls->menuPropsSettings       = "Asetukset";
    ls->menuPropsFile           = "Tiedostot";
    ls->menuPropsDisk           = "Levyt";               // New in 2.7
    ls->menuPropsLanguage       = "Kieli";
    ls->menuPropsPorts          = "Liit�nn�t";
    
    ls->menuVideoSource         = "Videoulostulo";
    ls->menuVideoSourceDefault  = "Videoulostuloa ei ole kytketty.";
    ls->menuVideoChipAutodetect = "Tunnista videopiiri automaattisesti";
    ls->menuVideoInSource       = "Videosis��ntulo";
    ls->menuVideoInBitmap       = "Bittikarttatiedosto";
    
    ls->menuEthInterface        = "Verkkokortti"; 

    ls->menuHelpHelp            = "Ohjeen aiheet";
    ls->menuHelpAbout           = "Tietoja blueMSX:st�";

    ls->menuFileCart            = "Moduliportti";
    ls->menuFileDisk            = "Levyasema";
    ls->menuFileCas             = "Kasetti";
    ls->menuFilePrn             = "Tulostin";
    ls->menuFileLoadState       = "Lataa tila...";
    ls->menuFileSaveState       = "Tallenna tila nimell�";
    ls->menuFileQLoadState      = "Tilan pikalataus";
    ls->menuFileQSaveState      = "Tilan pikatallennus";
    ls->menuFileCaptureAudio    = "Tallenna ��net";
    ls->menuFileCaptureVideo    = "Videokaappaus"; 
    ls->menuFileScreenShot      = "Tallenna kuvaruutukaappaus";
    ls->menuFileExit            = "Poistu";
    ls->menuFileHarddisk        = "Kovalevy";
    ls->menuFileHarddiskNoPesent= "Ohjaimia ei ole kytketty";
    ls->menuFileHarddiskRemoveAll= "Poista kaikki kovalevyt";    // New in 2.7

    ls->menuRunRun              = "K�ynnist�";
    ls->menuRunPause            = "Keskeyt�";
    ls->menuRunStop             = "Pys�yt�";
    ls->menuRunSoftReset        = "L�mmink�ynnistys";
    ls->menuRunHardReset        = "Kylm�k�ynnistys";
    ls->menuRunCleanReset       = "T�ydellinen uudelleenk�ynnistys";

    ls->menuToolsMachine        = "Tietokonemuokkain";
    ls->menuToolsShortcuts      = "Pikan�pp�inasetukset";
    ls->menuToolsCtrlEditor     = "Peliohjaimet / N�pp�imist�kartta"; 
    ls->menuToolsMixer          = "Mikseri";
    ls->menuToolsLoadMemory     = "Lataa muisti";
    ls->menuToolsDebugger       = "Debugger";               
    ls->menuToolsTrainer        = "Trainer";                
    ls->menuToolsTraceLogger    = "Seurantalogi";         

    ls->menuFile                = "Tiedosto";
    ls->menuRun                 = "Emulaatio";
    ls->menuWindow              = "Ikkuna";
    ls->menuOptions             = "Asetukset";
    ls->menuTools                = "Ty�kalut";
    ls->menuHelp                = "Ohje";


    //----------------------
    // Dialog related lines
    //----------------------

    ls->dlgOK                   = "OK";
    ls->dlgOpen                 = "Avaa";
    ls->dlgCancel               = "Peruuta";
    ls->dlgSave                 = "Tallenna";
    ls->dlgSaveAs               = "Tallenna nimell�";
    ls->dlgRun                  = "K�ynnist�";
    ls->dlgClose                = "Sulje";

    ls->dlgLoadRom              = "blueMSX - Lataa rom tiedosto";
    ls->dlgLoadDsk              = "blueMSX - Lataa dsk tiedosto";
    ls->dlgLoadCas              = "blueMSX - Lataa cas tiedosto";
    ls->dlgLoadRomDskCas        = "blueMSX - Valitse ladattava rom, dsk tai cas tiedosto";
    ls->dlgLoadRomDesc          = "Valitse ladattava ROM-tiedosto:";
    ls->dlgLoadDskDesc          = "Valitse ladattava levytiedosto:";
    ls->dlgLoadCasDesc          = "Valitse ladattava kasettitiedosto:";
    ls->dlgLoadRomDskCasDesc    = "Valitse ladattava ROM-, kasetti- tai levytiedosto:";
    ls->dlgLoadState            = "Lataa tila";
    ls->dlgLoadVideoCapture     = "Lataa videokaappaus";      
    ls->dlgSaveState            = "Tallenna tila nimell�";
    ls->dlgSaveCassette         = "blueMSX - Tallenna kasetti";
    ls->dlgSaveVideoClipAs      = "Tallenna videokaappaus nimell�";      
    ls->dlgAmountCompleted      = "Valmiina:";          
    ls->dlgInsertRom1           = "Aseta moduli porttiin 1";
    ls->dlgInsertRom2           = "Aseta moduli porttiin 2";
    ls->dlgInsertDiskA          = "Aseta levy asemaan A";
    ls->dlgInsertDiskB          = "Aseta levy asemaan B";
    ls->dlgInsertHarddisk       = "Aseta kovalevy";
    ls->dlgInsertCas            = "Aseta kasetti";
    ls->dlgRomType              = "ROM-malli:";
    ls->dlgDiskSize             = "Levyn koko:";             

    ls->dlgTapeTitle            = "blueMSX - Kasetin kohta";
    ls->dlgTapeFrameText        = "Kasetin kohta";
    ls->dlgTapeCurrentPos       = "T�m�nhetkinen kohta";
    ls->dlgTapeTotalTime        = "Kokonaispituus";
    ls->dlgTapeSetPosText       = "Kasetin kohta:";
    ls->dlgTapeCustom           = "N�yt� erilliset tiedostojen osat";
    ls->dlgTabPosition          = "Kohta";
    ls->dlgTabType              = "Tyyppi";
    ls->dlgTabFilename          = "Tiedostonimi";
    ls->dlgZipReset             = "Uudelleenk�ynnistys asettamisen j�lkeen";

    ls->dlgAboutTitle           = "Tietoja blueMSX:st�";

    ls->dlgLangLangText         = "Valitse k�ytett�v� kieli";
    ls->dlgLangLangTitle        = "blueMSX - Kielivalinta";

    ls->dlgAboutAbout           = "TIEDOT\r\n====";
    ls->dlgAboutVersion         = "Versio:";
    ls->dlgAboutBuildNumber     = "K��nn�s:";
    ls->dlgAboutBuildDate       = "P�iv�ys:";
    ls->dlgAboutCreat           = "Tekij�: Daniel Vik";
    ls->dlgAboutDevel           = "KEHITT�J�T\r\n=======";
    ls->dlgAboutThanks          = "AVUSTAJAT\r\n===========";       // New in 2.7
    ls->dlgAboutLisence         = "LISENSSI\r\n"
                                  "=====\r\n\r\n"
                                  "T�m� ohjelmisto toimitetaan sellaisenaan ilman mink��nlaista takuuta. "
                                  "Kehitt�j�t eiv�t ota mit��n vastuuta ohjelman kayt�ss� tai k�yt�st� "
                                  "aiheutuneista mahdollisista ongelmista tai vahingoista.\r\n\r\n"
                                  "Lis�tietoja l�yd�t osoitteesta www.bluemsx.com.";

    ls->dlgSavePreview          = "N�yt� esikatselu";
    ls->dlgSaveDate             = "Tallennettu:";

    ls->dlgRenderVideoCapture   = "blueMSX - Videokaappauksen koostaminen...";  


    //----------------------
    // Properties related lines
    //----------------------

    ls->propTitle               = "blueMSX - Ominaisuudet";
    ls->propEmulation           = "Emulaatio";
    ls->propVideo               = "Video";
    ls->propSound               = "��ni";
    ls->propControls            = "Kontrollit";
    ls->propPerformance         = "Suorituskyky";
    ls->propEffects             = "Effects";             // New in 2.9
    ls->propSettings            = "Asetukset";
    ls->propFile                = "Tiedostot";
    ls->propDisk                = "Levyt";              // New in 2.7
    ls->propPorts               = "Liit�nn�t";

    ls->propEmuGeneralGB        = "Yleist� ";
    ls->propEmuFamilyText       = "MSX malli:";
    ls->propEmuMemoryGB         = "Muisti ";
    ls->propEmuRamSizeText      = "RAM koko:";
    ls->propEmuVramSizeText     = "VRAM koko:";
    ls->propEmuSpeedGB          = "Emulaationopeus ";
    ls->propEmuSpeedText        = "Emulaationopeus:";
    ls->propEmuFrontSwitchGB     = "Panasonicin kytkimet ";
    ls->propEmuFrontSwitch       = " Aplikaatiokytkin";
    ls->propEmuNoSpriteLimits   = " Disable Sprites Limitation";  // New in 2.9
    ls->propEnableMsxKeyboardQuirk = " Emulate MSX keyboard quirk";  // New in 2.9
    ls->propEmuFdcTiming        = " Poista k�yt�st� levyaseman ajoitus";
    ls->propEmuReversePlay      = " Salli taaksep�in suoritus"; // New in 2.8.3
    ls->propEmuPauseSwitch      = " PAUSE-n�pp�in";
    ls->propEmuAudioSwitch       = " MSX-AUDIO modulin kytkin";
    ls->propVideoFreqText       = "Videotaajuus:";
    ls->propVideoFreqAuto       = "Automaattinen";
    ls->propSndOversampleText   = "Ylin�ytteistys:";
    ls->propSndYkInGB           = "YK-01/YK-10/YK-20 Sis��n ";                
    ls->propSndMidiInGB         = "MIDI Sis��n ";
    ls->propSndMidiOutGB        = "MIDI Ulos ";
    ls->propSndMidiChannel      = "MIDI-kanava:";                      
    ls->propSndMidiAll          = "Kaikki";                                

    ls->propMonMonGB            = "Monitori ";
    ls->propMonTypeText         = "Monitorin tyyppi:";
    ls->propMonEmuText          = "Monitorin emulointi:";
    ls->propVideoTypeText       = "Videotyyppi:";
    ls->propWindowSizeText      = "Ikkunan koko:";
    ls->propMonHorizStretch     = " Vaakavenytys";
    ls->propMonVertStretch      = " Pystyvenytys";
    ls->propMonDeInterlace      = " Lomituksen purku";
    ls->propBlendFrames         = " Yhdist� per�kk�iset kuvat";
    ls->propMonBrightness       = "Kirkkaus:";
    ls->propMonContrast         = "Kontrasti:";
    ls->propMonSaturation       = "Saturaatio:";
    ls->propMonGamma            = "Gamma:";
    ls->propMonScanlines        = " Juovat:";
    ls->propMonColorGhosting    = " Antennimuunnos:";
    ls->propMonEffectsGB        = "Tehosteet ";

    ls->propPerfVideoDrvGB      = "Videoajuri ";
    ls->propPerfVideoDispDrvText= "N�ytt�ajuri:";
    ls->propPerfFrameSkipText   = "Ruudunp�ivitysten ohitus:";
    ls->propPerfAudioDrvGB      = "��niajuri ";
    ls->propPerfAudioDrvText    = "��niajuri:";
    ls->propPerfAudioBufSzText  = "��nipuskurin koko:";
    ls->propPerfEmuGB           = "Emulaatio ";
    ls->propPerfSyncModeText    = "Tahdistutapa:";
    ls->propFullscreenResText   = "Resoluutio kokoruututilassa:";

    ls->propSndChipEmuGB        = "��nipiirien emulointi ";
    ls->propSndMsxMusic         = " MSX-MUSIC";
    ls->propSndMsxAudio         = " MSX-AUDIO";
    ls->propSndMoonsound        = " Moonsound";
    ls->propSndMt32ToGm         = " Muunna MT-32 soittimet General MIDI soittimiksi";

    ls->propPortsLptGB          = "Rinnakkaisportti ";
    ls->propPortsComGB          = "Sarjaportit ";
    ls->propPortsLptText        = "Portti:";
    ls->propPortsCom1Text       = "Portti 1:";
    ls->propPortsNone           = "Ei mit��n";
    ls->propPortsSimplCovox     = "SiMPL / Covox DAC";
    ls->propPortsFile           = "Tulosta tiedostoon";
    ls->propPortsComFile        = "L�hetys tiedostoon";
    ls->propPortsOpenLogFile    = "Avaa lokitiedosto";
    ls->propPortsEmulateMsxPrn  = "Emulaatio:";

    ls->propSetFileHistoryGB    = "Tiedostohistoria ";
    ls->propSetFileHistorySize  = "Tiedostojen lukum��r�:";
    ls->propSetFileHistoryClear = "Tyhjenn� historia";
    ls->propFileTypes           = " Rekister�i tiedostotyypit blueMSX:��n (.rom, .dsk, .cas, .sta)";
    ls->propWindowsEnvGB        = "Windows Ymp�rist� ";
    ls->propSetScreenSaver      = " Poista ruuduns��st�j� k�yt�st�, kun blueMSX on k�ynniss�";
    ls->propDisableWinKeys      = " Ota Windows-n�pp�imet MSX k�ytt��n";
    ls->propPriorityBoost       = " Nosta blueMSX:n prioriteettia";
    ls->propScreenshotPng       = " Tallenna kuvaruutukaappaukset PNG-muodossa";
    ls->propEjectMediaOnExit    = " Poista mediat kun ohjelma suljetaan";        // New in 2.8
    ls->propClearHistory        = "Oletko varma, ett� haluat poistaa kaikki tiedostohistorian tiedot?";
    ls->propOpenRomGB           = "ROM-tiedostojen avaus ";
    ls->propDefaultRomType      = "Oletus ROM tyyppi:";
    ls->propGuessRomType        = "Arvaa ROM tyyppi";

    ls->propSettDefSlotGB       = "Tiedostojen raahaaminen emulaattoriin ";
    ls->propSettDefSlots        = "Aseta ROM Moduliporttiin:";
    ls->propSettDefSlot         = " Moduliportti";
    ls->propSettDefDrives       = "Aseta levy asemaan:";
    ls->propSettDefDrive        = " Levysema";

    ls->propThemeGB             = "Teemat ";
    ls->propTheme               = "Teema:";

    ls->propCdromGB             = "CD-ROM ";         // New in 2.7
    ls->propCdromMethod         = "K�ytt�tapa:";  // New in 2.7
    ls->propCdromMethodNone     = "None";            // New in 2.7
    ls->propCdromMethodIoctl    = "IOCTL";           // New in 2.7
    ls->propCdromMethodAspi     = "ASPI";            // New in 2.7
    ls->propCdromDrive          = "Asema:";          // New in 2.7

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

    ls->enumVideoMonColor       = "V�rillinen";
    ls->enumVideoMonGrey        = "Mustavalko";
    ls->enumVideoMonGreen       = "Vihermusta";
    ls->enumVideoMonAmber       = "Amber";

    ls->enumVideoTypePAL        = "PAL";
    ls->enumVideoTypeNTSC       = "NTSC";

    ls->enumVideoEmuNone        = "Ei k�yt�ss�";
    ls->enumVideoEmuYc          = "Y/C kaapeli (tarkka)";
    ls->enumVideoEmuMonitor     = "Monitori";
    ls->enumVideoEmuYcBlur      = "Kohiseva Y/C kaapeli (tarkka)";
    ls->enumVideoEmuComp        = "Komposiitti (samea)";
    ls->enumVideoEmuCompBlur    = "Kohiseva Komposiitti (samea)";
    ls->enumVideoEmuScale2x     = "Scale 2x";
    ls->enumVideoEmuHq2x        = "Hq2x";

    ls->enumVideoSize1x         = "Pieni - 320x200";
    ls->enumVideoSize2x         = "Normaali - 640x400";
    ls->enumVideoSizeFullscreen = "Kokoruututila";

    ls->enumVideoDrvDirectDrawHW= "Kiihdytetty DirectDraw";
    ls->enumVideoDrvDirectDraw  = "DirectDraw";
    ls->enumVideoDrvGDI         = "GDI";
    ls->enumVideoDrvD3D         = "Direct3D";

    ls->enumVideoFrameskip0     = "Ei k�yt�ss�";
    ls->enumVideoFrameskip1     = "1 p�ivitys";
    ls->enumVideoFrameskip2     = "2 p�ivityst�";
    ls->enumVideoFrameskip3     = "3 p�ivityst�";
    ls->enumVideoFrameskip4     = "4 p�ivityst�";
    ls->enumVideoFrameskip5     = "5 p�ivityst�";

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

    ls->enumSoundDrvNone        = "Ei ��nt�";
    ls->enumSoundDrvWMM         = "WMM-ajuri";
    ls->enumSoundDrvDirectX     = "DirectX-ajuri";

    ls->enumEmuSync1ms          = "Tahdistus MSX:n ruudunp�ivitykseen";
    ls->enumEmuSyncAuto         = "Automaattinen (nopea)";
    ls->enumEmuSyncNone         = "Ei k�yt�ss�";
    ls->enumEmuSyncVblank       = "Tahdistus PC:n ruudunp�ivitykseen";
    ls->enumEmuAsyncVblank      = "Tahdistamaton PC:n ruudunp�ivitys";           

    ls->enumControlsJoyNone     = "Tyhj�";
    ls->enumControlsJoyMouse    = "Hiiri";
    ls->enumControlsJoyTetris2Dongle = "Tetris 2 Dongle";
    ls->enumControlsJoyTMagicKeyDongle = "MagicKey Dongle";
    ls->enumControlsJoy2Button = "2-n�pp�iminen Joystick";                   
    ls->enumControlsJoyGunstick  = "Gun Stick-valopistooli";                      
    ls->enumControlsJoyAsciiLaser="ASCII Plus-X Terminator Laser";      
    ls->enumControlsArkanoidPad  ="Arkanoid Pad";                   // New in 2.7.1
    ls->enumControlsJoyColeco = "ColecoVision Joystick";                

    ls->enumDiskMsx35Dbl9Sect    = "MSX 3.5\" Kaksipuolinen, 9 Sektoria";
    ls->enumDiskMsx35Dbl8Sect    = "MSX 3.5\" Kaksipuolinen, 8 Sektoria";
    ls->enumDiskMsx35Sgl9Sect    = "MSX 3.5\" Yksipuolinen, 9 Sektoria";
    ls->enumDiskMsx35Sgl8Sect    = "MSX 3.5\" Yksipuolinen, 8 Sektoria";
    ls->enumDiskSvi525Dbl        = "SVI-328 5.25\" Kaksipuolinen";
    ls->enumDiskSvi525Sgl        = "SVI-328 5.25\" Yksipuolinen";
    ls->enumDiskSf3Sgl           = "Sega SF-7000 3\" Yksipuolinen";  


    //----------------------
    // Configuration related lines
    //----------------------

    ls->confTitle               = "blueMSX - Tietokonemuokkain";
    ls->confConfigText          = "Tietokoneprofiili:";
    ls->confSlotLayout          = "Slottij�rjestys";
    ls->confMemory              = "Muisti";
    ls->confChipEmulation       = "Piirien Emulointi";
    ls->confChipExtras          = "Muuta";

    ls->confOpenRom             = "Valitse ROM tiedosto";
    ls->confSaveTitle           = "blueMSX - Tallenna tietokoneprofiili";
    ls->confSaveText            = "Haluatko korvata tietokoneprofiilin:";
    ls->confSaveAsTitle         = "Tallenna tietokoneprofiili nimell�...";
    ls->confSaveAsMachineName   = "Tietokoneprofiili:";
    ls->confDiscardTitle        = "blueMSX - Tietokonemuokkain";
    ls->confExitSaveTitle       = "blueMSX - Poistu tietokonemuokkaimesta";
    ls->confExitSaveText        = "Haluatko hyl�t� tekem�si muutokset nykyiseen tietokoneprofiiliin?";

    ls->confSlotLayoutGB        = "Slotti jako ";
    ls->confSlotExtSlotGB       = "Ulkoiset Slotit ";
    ls->confBoardGB             = "Emolevy ";
    ls->confBoardText           = "Emolevytyyppi:";
    ls->confSlotPrimary         = "Jakamaton";
    ls->confSlotExpanded        = "Jaettu (4 alislottia)";

    ls->confSlotCart            = "Moduliportti";
    ls->confSlot                = "Slotti";
    ls->confSubslot             = "-";

    ls->confMemAdd              = "Lis��...";
    ls->confMemEdit             = "Muuta...";
    ls->confMemRemove           = "Poista";
    ls->confMemSlot             = "Slotti";
    ls->confMemAddresss         = "Muistialue";
    ls->confMemType             = "Tyyppi";
    ls->confMemRomImage         = "ROM tiedosto";

    ls->confChipVideoGB          = "Video ";
    ls->confChipVideoChip        = "Videopiiri:";
    ls->confChipVideoRam         = "Videomuisti:";
    ls->confChipSoundGB          = "��ni ";
    ls->confChipPsgStereoText    = " PSG Stereo";

    ls->confCmosGB               = "Kellopiiri ";
    ls->confCmosEnable           = " Ota kellopiiri k�ytt��n";
    ls->confCmosBattery          = " K�yt� ladattua paristoa";

    ls->confCpuFreqGB            = "Prosessorikellotaajuudet ";
    ls->confZ80FreqText          = "Z80 Kellotaajuus:";
    ls->confR800FreqText         = "R800 Kellotaajuus:";
    ls->confFdcGB                = "Levyasemaohjain ";
    ls->confCFdcNumDrivesText    = "Levyasemien lukum��r�:";

    ls->confEditMemTitle         = "blueMSX - Muistin hallinta";
    ls->confEditMemGB            = "Muistin tiedot ";
    ls->confEditMemType          = "Tyyppi:";
    ls->confEditMemFile          = "Tiedosto:";
    ls->confEditMemAddress       = "Muistialue";
    ls->confEditMemSize          = "Koko";
    ls->confEditMemSlot          = "Slotti";


    //----------------------
    // Shortcut lines
    //----------------------

    ls->shortcutKey             = "Tapahtuma";
    ls->shortcutDescription     = "Pikan�pp�in";

    ls->shortcutSaveConfig      = "blueMSX - Tallenna Asetukset";
    ls->shortcutOverwriteConfig = "Haluatko korvata pikan�pp�inasetukset:";
    ls->shortcutExitConfig      = "blueMSX - Poistu pikan�pp�inasetuksista";
    ls->shortcutDiscardConfig   = "Haluatko hyl�t� tekem�si muutokset pikan�pp�inasetuksiin?";
    ls->shortcutSaveConfigAs    = "blueMSX - Tallenna pikan�pp�inasetukset";
    ls->shortcutConfigName      = "Asetusten nimi:";
    ls->shortcutNewProfile      = "< Uusi profiili >";
    ls->shortcutConfigTitle     = "blueMSX - Pikan�pp�inasetukset";
    ls->shortcutAssign          = "K�yt�";
    ls->shortcutPressText       = "Pikan�pp�in (paina):";
    ls->shortcutScheme          = "Pikan�pp�in profiili:";
    ls->shortcutCartInsert1     = "Aseta moduli 1";
    ls->shortcutCartRemove1     = "Poista moduli 1";
    ls->shortcutCartInsert2     = "Aseta moduli 2";
    ls->shortcutCartRemove2     = "Poista moduli 2";
    ls->shortcutSpecialMenu1    = "N�yt� erikoismodulivalikko moduliportille 1";
    ls->shortcutSpecialMenu2    = "N�yt� erikoismodulivalikko moduliportille 2";
    ls->shortcutCartAutoReset   = "K�ynnist� kone uudelleen modulin asettamisen j�lkeen";
    ls->shortcutDiskInsertA     = "Aseta levytiedosto asemaan A";
    ls->shortcutDiskDirInsertA  = "Aseta hakemisto levyasemaksi A";
    ls->shortcutDiskRemoveA     = "Poista levy levyasemasta A";
    ls->shortcutDiskChangeA     = "Pika vaihda levy A";
    ls->shortcutDiskAutoResetA  = "K�ynnist� kone uudelleen levyn lis��misen j�lkeen asemaan A";
    ls->shortcutDiskInsertB     = "Aseta levytiedosto asemaan B";
    ls->shortcutDiskDirInsertB  = "Aseta hakemisto levyasemaksi B";
    ls->shortcutDiskRemoveB     = "Poista levy levyasemasta B";
    ls->shortcutCasInsert       = "Aseta kasetti";
    ls->shortcutCasEject        = "Poista kasetti";
    ls->shortcutCasAutorewind   = "Muuta kasetin automaattista alkuunkelaustoimintoa";
    ls->shortcutCasReadOnly     = "Muuta kasetin kirjoitussuojausta";
    ls->shortcutCasSetPosition  = "Aseta kasetin kohta";
    ls->shortcutCasRewind       = "Kelaa kasetti alkuun";
    ls->shortcutCasSave         = "Tallenna kasetti-image";
    ls->shortcutPrnFormFeed     = "Vaihda tulostimessa sivua";
    ls->shortcutCpuStateLoad    = "Lataa tila";
    ls->shortcutCpuStateSave    = "Tallenna tila nimell�";
    ls->shortcutCpuStateQload   = "Tilan pikalataus";
    ls->shortcutCpuStateQsave   = "Tilan pikatallennus";
    ls->shortcutAudioCapture    = "K�ynnist�/Pys�yt� ��nen kaappaus";
    ls->shortcutScreenshotOrig  = "Ota ruudunkaappaus";
    ls->shortcutScreenshotSmall = "Pieni filtter�im�t�n ruudunkaappaus";
    ls->shortcutScreenshotLarge = "Suuri filtter�im�t�n ruudunkaappaus";
    ls->shortcutQuit            = "Poistu blueMSX:st�";
    ls->shortcutRunPause        = "K�ynnist�/Keskeyt� emulaatio";
    ls->shortcutStop            = "Pys�yt� emulaatio";
    ls->shortcutResetHard       = "Kylm�k�ynnistys";
    ls->shortcutResetSoft       = "L�mmink�ynnistys";
    ls->shortcutResetClean      = "T�ydellinen uudelleenk�ynnistys";
    ls->shortcutSizeSmall       = "Aseta pieni ikkunan koko";
    ls->shortcutSizeNormal      = "Aseta normaali ikkunan koko";
    ls->shortcutSizeFullscreen  = "Aseta kokoruututila";
    ls->shortcutSizeMinimized   = "Pienenn� ikkuna";
    ls->shortcutToggleFullscren = "Vaihda kokoruututilaa";
    ls->shortcutVolumeIncrease  = "Nosta ��nenvoimakkuutta";
    ls->shortcutVolumeDecrease  = "Laske ��nenvoimakkuutta";
    ls->shortcutVolumeMute      = "Hiljenn� ��net";
    ls->shortcutVolumeStereo    = "Muuta mono/stereo";
    ls->shortcutSwitchMsxAudio  = "Muuta MSX-AUDIO kytkimen tila";
    ls->shortcutSwitchFront     = "Muuta Panasonic aplikaatiokytkimen tila";
    ls->shortcutSwitchPause     = "Muuta Pause-n�pp�imen tilaa";
    ls->shortcutToggleMouseLock = "Muuta hiirenkaappauksen tilaa";
    ls->shortcutEmuSpeedMax     = "Maksimi emulointinopeus";
    ls->shortcutEmuPlayReverse  = "Taaksep�in suoritus";                     // New in 2.8.3
    ls->shortcutEmuSpeedToggle  = "Vaihda maksimi emulointinopeus";
    ls->shortcutEmuSpeedNormal  = "Normaali emulointinopeus";
    ls->shortcutEmuSpeedInc     = "Nopeuta emulointia";
    ls->shortcutEmuSpeedDec     = "Hidasta emulointia";
    ls->shortcutThemeSwitch     = "Vaihda teemaa";
    ls->shortcutShowEmuProp     = "N�yt� emulaatioasetukset";
    ls->shortcutShowVideoProp   = "N�yt� videoasetukset";
    ls->shortcutShowAudioProp   = "N�yt� ��niasetukset";
    ls->shortcutShowCtrlProp    = "N�yt� kontrolliasetukset";
    ls->shortcutShowEffectsProp = "Show Effects Properties";     // New in 2.9
    ls->shortcutShowSettProp    = "N�yt� yleisasetukset";
    ls->shortcutShowPorts       = "N�yt� liit�nt�asetukset";
    ls->shortcutShowLanguage    = "N�yt� kielivalinnat";
    ls->shortcutShowMachines    = "N�yt� tietokonemuokkain";
    ls->shortcutShowShortcuts   = "N�yt� pikan�pp�invalinnat";
    ls->shortcutShowKeyboard    = "N�yt� Peliohjain / N�pp�imist�asetukset";
    ls->shortcutShowMixer       = "N�yt� Mixeri";
    ls->shortcutShowDebugger    = "N�yt� Debugger";
    ls->shortcutShowTrainer     = "N�yt� Trainer";
    ls->shortcutShowHelp        = "N�yt� ohjeet";
    ls->shortcutShowAbout       = "N�yt� Tietoja blueMSX:st�";
    ls->shortcutShowFiles       = "N�yt� tiedosto asetukset";
    ls->shortcutToggleSpriteEnable = "N�yt�/Piilota Spritet";
    ls->shortcutToggleFdcTiming = "Ota k�ytt��n/Poista k�yt�st� levyaseman ajoitus";
    ls->shortcutToggleNoSpriteLimits = "Toggle Sprites Limitation";                 // New in 2.9
    ls->shortcutEnableMsxKeyboardQuirk = "Emulate MSX Keyboard Quirk";              // New in 2.9
    ls->shortcutToggleCpuTrace  = "Ota k�ytt��n/Poista k�yt�st� Prosessorin j�ljitystoiminto";
    ls->shortcutVideoLoad       = "Lataa Videokaappaus";             
    ls->shortcutVideoPlay       = "Toista viimeisin videokaappaus";   
    ls->shortcutVideoRecord     = "Tallenna videokaappaus";              
    ls->shortcutVideoStop       = "Pys�yt� videokaappaus";                
    ls->shortcutVideoRender     = "Koosta videotiedosto";   


    //----------------------
    // Keyboard config lines
    //----------------------

    ls->keyconfigSelectedKey    = "Emuloitava n�pp�in:";
    ls->keyconfigMappedTo       = "PC-n�pp�in:";
    ls->keyconfigMappingScheme  = "N�pp�inkarttaprofiili:";

    
    //----------------------
    // Rom type lines
    //----------------------

    ls->romTypeStandard         = "Standardi";

    ls->romTypeZenima80         = "Zemina 80 in 1";
    ls->romTypeZenima90         = "Zemina 90 in 1";
    ls->romTypeZenima126        = "Zemina 126 in 1";

    ls->romTypeSccMirrored      = "SCC peilattu";
    ls->romTypeSccExtended      = "SCC laajennettu";

    ls->romTypeKonamiGeneric    = "Konami Yleinen";

    ls->romTypeMirrored         = "Peilattu ROM";
    ls->romTypeNormal           = "Tavallinen ROM";
    ls->romTypeDiskPatch        = "Tavallinen + korjaus levylt�";
    ls->romTypeCasPatch         = "Tavallinen + korjaus kasetilta";
    ls->romTypeTc8566afFdc      = "TC8566AF Diskettiasemaohjain";
    ls->romTypeTc8566afTrFdc    = "TC8566AF Turbo-R Diskettiasemaohjain";
    ls->romTypeMicrosolFdc      = "Microsol Diskettiasemaohjain";
    ls->romTypeNationalFdc      = "National Diskettiasemaohjain";
    ls->romTypePhilipsFdc       = "Philips Diskettiasemaohjain";
    ls->romTypeSvi738Fdc        = "SVI-738 Diskettiasemaohjain";
    ls->romTypeMappedRam        = "Mapper RAM";
    ls->romTypeMirroredRam1k    = "1kB peilattu RAM";
    ls->romTypeMirroredRam2k    = "2kB peilattu RAM";
    ls->romTypeNormalRam        = "Tavallinen RAM";

    ls->romTypeTurborPause      = "Turbo-R Pause";
    ls->romTypeF4deviceNormal   = "Tavallinen F4 portti";
    ls->romTypeF4deviceInvert   = "K��nnetty F4 portti";

    ls->romTypeTurborTimer      = "Turbo-R Ajastin";

    ls->romTypeNormal4000       = "Tavallinen #4000";
    ls->romTypeNormalC000       = "Tavallinen #C000";

    ls->romTypeExtRam           = "Ulkoinen RAM";
    ls->romTypeExtRam16         = "16kB Ulkoinen RAM";
    ls->romTypeExtRam32         = "32kB Ulkoinen RAM";
    ls->romTypeExtRam48         = "48kB Ulkoinen RAM";
    ls->romTypeExtRam64         = "64kB Ulkoinen RAM";
    ls->romTypeExtRam512        = "512kB Ulkoinen RAM";
    ls->romTypeExtRam1mb        = "1MB Ulkoinen RAM";
    ls->romTypeExtRam2mb        = "2MB Ulkoinen RAM";
    ls->romTypeExtRam4mb        = "4MB Ulkoinen RAM";

    ls->romTypeSvi328Cart       = "SVI-328 Moduli";
    ls->romTypeSvi328Fdc        = "SVI-328 Levyasemaohjain";
    ls->romTypeSvi328Prn        = "SVI-328 Tulostin";
    ls->romTypeSvi328Uart       = "SVI-328 Sarjaportti";
    ls->romTypeSvi328col80      = "SVI-328 80-merkin kortti";
    ls->romTypeSvi727col80      = "SVI-727 80-merkin kortti";
    ls->romTypeColecoCart       = "Coleco Moduli";
    ls->romTypeSg1000Cart       = "SG-1000 Moduli";
    ls->romTypeSc3000Cart       = "SC-3000 Moduli";

    ls->romTypeMsxPrinter       = "MSX tulostin";
    ls->romTypeTurborPcm        = "Turbo-R PCM piiri";
    
    ls->romTypeNms8280Digitiz   = "Philips NMS-8280 Digitoija";
    ls->romTypeHbiV1Digitiz     = "Sony HBI-V1 Digitoija";
    
    
    //----------------------
    // Debug type lines
    // Note: Only needs translation if debugger is translated
    //----------------------

    ls->dbgMemVisible           = "N�kyv� muisti";
    ls->dbgMemRamNormal         = "Normaali";
    ls->dbgMemRamMapped         = "Sivutettu";
    ls->dbgMemYmf278            = "YMF278 Sample RAM";
    ls->dbgMemAy8950            = "AY8950 Sample RAM";
    ls->dbgMemScc               = "Muisti";
    ls->dbgCallstack            = "Kutsupino";
    ls->dbgRegs                 = "Rekisterit";
    ls->dbgRegsCpu              = "CPU Rekisterit";
    ls->dbgRegsYmf262           = "YMF262 Rekisterit";
    ls->dbgRegsYmf278           = "YMF278 Rekisterit";
    ls->dbgRegsAy8950           = "AY8950 Rekisterit";
    ls->dbgRegsYm2413           = "YM2413 Rekisterit";
    ls->dbgDevRamMapper         = "RAM Mapper";
    ls->dbgDevRam               = "RAM";
    ls->dbgDevF4Device          = "F4 Portti";
    ls->dbgDevKorean80          = "Korea 80";
    ls->dbgDevKorean90          = "Korea 90";
    ls->dbgDevKorean128         = "Korea 128";
    ls->dbgDevFdcMicrosol       = "Microsol levyohjain";

    ls->dbgDevPrinter           = "Tulostin";

    ls->dbgDevSviFdc            = "SVI levyohjain";
    ls->dbgDevSviPrn            = "SVI Tulostin";
    ls->dbgDevSvi80Col          = "SVI 80-merkki�";

    ls->dbgDevRtc               = "Kellopiiri";
    ls->dbgDevTrPause           = "tR Pause";


    //----------------------
    // Debug type lines
    // Note: Can only be translated to european languages
    //----------------------
   ls->aboutScrollThanksTo      = "Kiitoksen ansaitsevat : ";
   ls->aboutScrollAndYou        = "sek� SIN� !!!!";
};

#endif
