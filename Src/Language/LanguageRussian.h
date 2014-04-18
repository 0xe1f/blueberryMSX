/*****************************************************************************
** $Source: /cygdrive/d/Private/_SVNROOT/bluemsx/blueMSX/Src/Language/LanguageRussian.h,v $
**
** $Revision: 1.9 $
**
** $Date: 2009-04-04 20:57:19 $
**
** More info: http://www.bluemsx.com
**
** Copyright (C) 2003-2008 Daniel Vik
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
#ifndef LANGUAGE_RUSSIAN_H
#define LANGUAGE_RUSSIAN_H

#include "LanguageStrings.h"
 
void langInitRussian(LanguageStrings* ls) 
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
    ls->langRussian             = "Russian";
    ls->langSpanish             = "Spanish";
    ls->langSwedish             = "Swedish";


    //----------------------
    // Generic lines
    //----------------------

    ls->textDevice              = "����������:";
    ls->textFilename            = "�������� �����:";
    ls->textFile                = "����";
    ls->textNone                = "���";
    ls->textUnknown             = "����������";


    //----------------------
    // Warning and Error lines
    //----------------------

    ls->warningTitle            = "blueMSX - ��������";
    ls->warningDiscardChanges   = "�� ������ ���������� �� ���������?";
    ls->warningOverwriteFile    = "�� ������ ������������ ����:";
    ls->errorTitle              = "blueMSX - ������";
    ls->errorEnterFullscreen    = "�� ������� ������� � ������������� �����.           \n";
    ls->errorDirectXFailed      = "�� ������� ������� DirectX �������.           \nUsing GDI instead.\nCheck Video properties.";
    ls->errorNoRomInZip         = "�� ������� .rom ����� � zip ������.";
    ls->errorNoDskInZip         = "�� ������� .dsk ����� � zip ������.";
    ls->errorNoCasInZip         = "�� ������� .cas ����� � zip ������.";
    ls->errorNoHelp             = "�� ������� ����� ������ blueMSX.";
    ls->errorStartEmu           = "�� ������� ������ ��������.";
    ls->errorPortableReadonly   = "����������� ���������� ������ ��� ������";


    //----------------------
    // File related lines
    //----------------------

    ls->fileRom                 = "ROM �����";
    ls->fileAll                 = "��� �����";
    ls->fileCpuState            = "��������� CPU";
    ls->fileVideoCapture        = "������ �����"; 
    ls->fileDisk                = "����� �������";
    ls->fileCas                 = "����� �������";
    ls->fileAvi                 = "����� ����";    


    //----------------------
    // Menu related lines
    //----------------------

    ls->menuNoRecentFiles       = "- ��� ������� ������ -";
    ls->menuInsert              = "��������";
    ls->menuEject               = "������";

    ls->menuCartGameReader      = "Game Reader";
    ls->menuCartIde             = "IDE";
    ls->menuCartBeerIde         = "Beer";
    ls->menuCartGIde            = "GIDE";
    ls->menuCartSunriseIde      = "Sunrise";  
    ls->menuCartScsi            = "SCSI";                // New in 2.7
    ls->menuCartMegaSCSI        = "MEGA-SCSI";           // New in 2.7
    ls->menuCartWaveSCSI        = "WAVE-SCSI";           // New in 2.7
    ls->menuCartGoudaSCSI       = "Gouda SCSI";          // New in 2.7
    ls->menuJoyrexPsg           = "Joyrex PSG ��������"; // New in 2.9
    ls->menuCartSCC             = "SCC ��������";
    ls->menuCartSCCPlus         = "SCC-I ��������";
    ls->menuCartFMPac           = "FM-PAC ��������";
    ls->menuCartPac             = "PAC Cartridge";
    ls->menuCartHBI55           = "Sony HBI-55 Cartridge";
    ls->menuCartInsertSpecial   = "�������� ������";
    ls->menuCartMegaRam         = "MegaRAM";
    ls->menuCartExternalRam     = "������� RAM";
    ls->menuCartEseRam          = "Ese-RAM";             // New in 2.7
    ls->menuCartEseSCC          = "Ese-SCC";             // New in 2.7
    ls->menuCartMegaFlashRom    = "Mega Flash ROM";      // New in 2.7

    ls->menuDiskInsertNew       = "�������� ����� ����� �������";
    ls->menuDiskInsertCdrom     = "�������� CD-Rom ����";       // New in 2.7
    ls->menuDiskDirInsert       = "�������� �����";
    ls->menuDiskAutoStart       = "�������� ����� �������� �������";
    ls->menuCartAutoReset       = "�������� ����� ��������/��������";

    ls->menuCasRewindAfterInsert= "��������� ����� ��������";
    ls->menuCasUseReadOnly      = "����������� ����� ������� ������ ��� ������";
    ls->lmenuCasSaveAs          = "��������� ����� ������� ���...";
    ls->menuCasSetPosition      = "������ �������";
    ls->menuCasRewind           = "���������";

    ls->menuVideoLoad           = "���������...";             
    ls->menuVideoPlay           = "������������� ��������� �����";   
    ls->menuVideoRecord         = "��������";              
    ls->menuVideoRecording      = "������";           
    ls->menuVideoRecAppend      = "��������";     
    ls->menuVideoStop           = "����������";                
    ls->menuVideoRender         = "��������� ����� � ����";   

    ls->menuPrnFormfeed         = "������ ��������";

    ls->menuZoomNormal          = "��������� ����";
    ls->menuZoomDouble          = "������� ����";
    ls->menuZoomFullscreen      = "�� ���� �����";
    
    ls->menuPropsEmulation      = "��������";
    ls->menuPropsVideo          = "�����";
    ls->menuPropsSound          = "����";
    ls->menuPropsControls       = "����������";
    ls->menuPropsEffects        = "Effects";               // New in 2.9
    ls->menuPropsSettings       = "���������";
    ls->menuPropsFile           = "�����";
    ls->menuPropsDisk           = "�������";               // New in 2.7
    ls->menuPropsLanguage       = "����� �����";
    ls->menuPropsPorts          = "�����";
    
    ls->menuVideoSource         = "����� �����������";
    ls->menuVideoSourceDefault  = "�� ��������� �������������";
    ls->menuVideoChipAutodetect = "������������� ������������ ��������";
    ls->menuVideoInSource       = "������� �����������";
    ls->menuVideoInBitmap       = "���� Bitmap";
    
    ls->menuEthInterface        = "������� ���������"; 

    ls->menuHelpHelp            = "������";
    ls->menuHelpAbout           = "� blueMSX";

    ls->menuFileCart            = "���� ��� ���������";
    ls->menuFileDisk            = "��������";
    ls->menuFileCas             = "�������";
    ls->menuFilePrn             = "�������";
    ls->menuFileLoadState       = "��������� ��������� CPU";
    ls->menuFileSaveState       = "��������� ��������� CPU";
    ls->menuFileQLoadState      = "������� ��������";
    ls->menuFileQSaveState      = "������� ����������";
    ls->menuFileCaptureAudio    = "������ �����";
    ls->menuFileCaptureVideo    = "������ �����"; 
    ls->menuFileScreenShot      = "������� ��������";
    ls->menuFileExit            = "�����";

    ls->menuFileHarddisk        = "������� ����";
    ls->menuFileHarddiskNoPesent= "���� ��� �����������";
    ls->menuFileHarddiskRemoveAll= "������� ��� ������� �����";    // New in 2.7

    ls->menuRunRun              = "����";
    ls->menuRunPause            = "�����";
    ls->menuRunStop             = "����������";
    ls->menuRunSoftReset        = "����������� �����";
    ls->menuRunHardReset        = "���������� �����";
    ls->menuRunCleanReset       = "������ ������������";

    ls->menuToolsMachine        = "��������� �����";
    ls->menuToolsShortcuts      = "��������� �������� ������";
    ls->menuToolsCtrlEditor     = "��������� ������������ / ����������"; 
    ls->menuToolsMixer          = "����������";
    ls->menuToolsDebugger       = "��������";               
    ls->menuToolsTrainer        = "����";                
    ls->menuToolsTraceLogger    = "������ ����������";           

    ls->menuFile                = "����";
    ls->menuRun                 = "��������";
    ls->menuWindow              = "����";
    ls->menuOptions             = "�����";
    ls->menuTools               = "�����������";
    ls->menuHelp                = "������";
    

    //----------------------
    // Dialog related lines
    //----------------------

    ls->dlgOK                   = "OK";
    ls->dlgOpen                 = "�������";
    ls->dlgCancel               = "������";
    ls->dlgSave                 = "���������";
    ls->dlgSaveAs               = "��������� ���...";
    ls->dlgRun                  = "����";
    ls->dlgClose                = "�������";

    ls->dlgLoadRom              = "blueMSX - ������� rom ����� ��� ��������";
    ls->dlgLoadDsk              = "blueMSX - ������� dsk ����� ��� ��������";
    ls->dlgLoadCas              = "blueMSX - ������� cas ����� ��� ��������";
    ls->dlgLoadRomDskCas        = "blueMSX - ������� rom, dsk ��� cas ����� ��� ��������";
    ls->dlgLoadRomDesc          = "�������� rom ����� ��� ��������:";
    ls->dlgLoadDskDesc          = "�������� disk ����� ��� ��������:";
    ls->dlgLoadCasDesc          = "�������� tape ����� ��� ��������:";
    ls->dlgLoadRomDskCasDesc    = "�������� rom, disk ��� tape ������ ��� ��������:";
    ls->dlgLoadState            = "���������";
    ls->dlgLoadVideoCapture     = "��������� ����������� �����";      
    ls->dlgSaveState            = "��������� ���...";
    ls->dlgSaveCassette         = "blueMSX - ��������� ����� �������";
    ls->dlgSaveVideoClipAs      = "��������� ��������� ���...";      
    ls->dlgAmountCompleted      = "Amount completed:";          
    ls->dlgInsertRom1           = "�������� ROM �������� � ���� 1";
    ls->dlgInsertRom2           = "�������� ROM �������� � ���� 2";
    ls->dlgInsertDiskA          = "�������� ����� ������� � �������� A";
    ls->dlgInsertDiskB          = "�������� ����� ������� � �������� B";
    ls->dlgInsertHarddisk       = "�������� ������� ����";
    ls->dlgInsertCas            = "�������� �������";
    ls->dlgRomType              = "Rom ���:";
    ls->dlgDiskSize             = "�������:";             

    ls->dlgTapeTitle            = "blueMSX - ������� �������";
    ls->dlgTapeFrameText        = "������� �������";
    ls->dlgTapeCurrentPos       = "������� �������";
    ls->dlgTapeTotalTime        = "����� �������";
    ls->dlgTapeSetPosText       = "������� �������:";
    ls->dlgTapeCustom           = "�������� ����� ������������";
    ls->dlgTabPosition          = "�������";
    ls->dlgTabType              = "���";
    ls->dlgTabFilename          = "��������";
    ls->dlgZipReset             = "�������� ����� ��������";

    ls->dlgAboutTitle           = "blueMSX - � blueMSX";

    ls->dlgLangLangText         = "�������� ���� ��� blueMSX";
    ls->dlgLangLangTitle        = "blueMSX - ����";

    ls->dlgAboutAbout           = "� blueMSX\r\n====";
    ls->dlgAboutVersion         = "������:";
    ls->dlgAboutBuildNumber     = "������:";
    ls->dlgAboutBuildDate       = "����:";
    ls->dlgAboutCreat           = "������ Daniel Vik";
    ls->dlgAboutDevel           = "������������\r\n========";
    ls->dlgAboutThanks          = "��������\r\n==========";       // New in 2.7 (retranslate, see english)
    ls->dlgAboutLisence         = "��������\r\n"
                                  "======\r\n\r\n"
                                  "��� ��������� ���������������� \"��� ����\", ��� ������ ��������. "
                                  "����� �� ����� ������� ��������������� �� ����� ������, ���������� "
                                  "����������� �������� ���� ���������.\r\n\r\n"
                                  "�������� ���� www.bluemsx.com ��� ������� ����������.";

    ls->dlgSavePreview          = "�������� ������";
    ls->dlgSaveDate             = "�����:";

    ls->dlgRenderVideoCapture   = "blueMSX - ������ ������������ �����...";  


    //----------------------
    // Properties related lines
    //----------------------

    ls->propTitle               = "blueMSX - ���������";
    ls->propEmulation           = "��������";
    ls->propVideo               = "�����";
    ls->propSound               = "����";
    ls->propControls            = "����������";
    ls->propPerformance         = "��������������";
    ls->propEffects             = "Effects";             // New in 2.9
    ls->propSettings            = "�����";
    ls->propFile                = "�����";
    ls->propDisk                = "�����";              // New in 2.7
    ls->propPorts               = "�����";
    
    ls->propEmuGeneralGB        = "�������� ";
    ls->propEmuFamilyText       = "������ MSX:";
    ls->propEmuMemoryGB         = "������ ";
    ls->propEmuRamSizeText      = "����� RAM:";
    ls->propEmuVramSizeText     = "����� VRAM:";
    ls->propEmuSpeedGB          = "�������� �������� ";
    ls->propEmuSpeedText        = "�������� ��������:";
    ls->propEmuFrontSwitchGB    = "������������� Panasonic ";
    ls->propEmuFrontSwitch      = " �������� �����������";
    ls->propEmuNoSpriteLimits   = " Disable Sprites Limitation";  // New in 2.9
    ls->propEnableMsxKeyboardQuirk = " Emulate MSX keyboard quirk";  // New in 2.9
    ls->propEmuFdcTiming        = " Disable Floppy Drive Timing";
    ls->propEmuReversePlay      = " Enable reverse playback"; // New in 2.8.3
    ls->propEmuPauseSwitch      = " ������ �����";
    ls->propEmuAudioSwitch      = " ������������� ��������� MSX-AUDIO";
    ls->propVideoFreqText       = "������� ������:";
    ls->propVideoFreqAuto       = "����";
    ls->propSndOversampleText   = "������������������:";
    ls->propSndYkInGB           = "YK-01/YK-10/YK-20 In ";
    ls->propSndMidiInGB         = "MIDI ���� ";
    ls->propSndMidiOutGB        = "MIDI ����� ";
    ls->propSndMidiChannel      = "MIDI �����:";
    ls->propSndMidiAll          = "���";

    ls->propMonMonGB            = "������� ";
    ls->propMonTypeText         = "��� ��������:";
    ls->propMonEmuText          = "�������� ��������:";
    ls->propVideoTypeText       = "��� �����:";
    ls->propWindowSizeText      = "������ ����:";
    ls->propMonHorizStretch     = " ��������� �� �����������";
    ls->propMonVertStretch      = " ��������� �� ���������";
    ls->propMonDeInterlace      = " ������ �������������";
    ls->propBlendFrames         = " ��������� ���������������� �����";
    ls->propMonBrightness       = "�������:";
    ls->propMonContrast         = "��������:";
    ls->propMonSaturation       = "������������:";
    ls->propMonGamma            = "�����:";
    ls->propMonScanlines        = " �������������:";
    ls->propMonColorGhosting    = " RF-���������:";
    ls->propMonEffectsGB        = "������� ";

    ls->propPerfVideoDrvGB      = "������������ ";
    ls->propPerfVideoDispDrvText= "������� ��������:";
    ls->propPerfFrameSkipText   = "������� ������:";
    ls->propPerfAudioDrvGB      = "����� ������� ";
    ls->propPerfAudioDrvText    = "����� �������:";
    ls->propPerfAudioBufSzText  = "������ ������ �����:";
    ls->propPerfEmuGB           = "�������� ";
    ls->propPerfSyncModeText    = "�������������:";
    ls->propFullscreenResText   = "������������� ����������:";

    ls->propSndChipEmuGB        = "�������� ��������� ���� ";
    ls->propSndMsxMusic         = " MSX-MUSIC";
    ls->propSndMsxAudio         = " MSX-AUDIO";
    ls->propSndMoonsound        = " Moonsound";
    ls->propSndMt32ToGm         = " Map MT-32 ����������� ��� ��������� MIDI";

    ls->propPortsLptGB          = "������������ ���� ";
    ls->propPortsComGB          = "���������������� ����� ";
    ls->propPortsLptText        = "����:";
    ls->propPortsCom1Text       = "����t 1:";
    ls->propPortsNone           = "���";
    ls->propPortsSimplCovox     = "SiMPL / Covox DAC";
    ls->propPortsFile           = "�������� � ����";
    ls->propPortsComFile        = "��������� � ����";
    ls->propPortsOpenLogFile    = "������� ���-����";
    ls->propPortsEmulateMsxPrn  = "��������:";

    ls->propSetFileHistoryGB    = "������� ������ ";
    ls->propSetFileHistorySize  = "���������� ������ � �������:";
    ls->propSetFileHistoryClear = "�������� �������";
    ls->propFileTypes           = " ���������������� ���� ������ � blueMSX (.rom, .dsk, .cas, .sta)";
    ls->propWindowsEnvGB        = "��������� Windows "; 
    ls->propSetScreenSaver      = " ��������� ����������� ����� blueMSX ��������";
    ls->propDisableWinKeys      = " ���������� ������ Windows ��� ������ MSX"; 
    ls->propPriorityBoost       = " ���������� ��������� ��� blueMSX";
    ls->propScreenshotPng       = " ������������ ��� PNG ������ ��� ����������";
    ls->propEjectMediaOnExit    = " Eject media when blueMSX exits";        // New in 2.8
    ls->propClearHistory        = "�� ����� ������ �������� ���� �������?";
    ls->propOpenRomGB           = "������ �������� Rom ����� ";
    ls->propDefaultRomType      = "��� ����� Rom �� ���������:";
    ls->propGuessRomType        = "����� ��� Rom";

    ls->propSettDefSlotGB       = "�������������� ";
    ls->propSettDefSlots        = "�������� Rom �:";
    ls->propSettDefSlot         = " ����";
    ls->propSettDefDrives       = "�������� ������� �:";
    ls->propSettDefDrive        = " ��������";

    ls->propThemeGB             = "���� ";
    ls->propTheme               = "����:";

    ls->propCdromGB             = "CD-ROM ";         // New in 2.7
    ls->propCdromMethod         = "����� �������:";  // New in 2.7
    ls->propCdromMethodNone     = "���";            // New in 2.7
    ls->propCdromMethodIoctl    = "IOCTL";           // New in 2.7
    ls->propCdromMethodAspi     = "ASPI";            // New in 2.7
    ls->propCdromDrive          = "������:";          // New in 2.7

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

    ls->enumVideoMonColor       = "�������";
    ls->enumVideoMonGrey        = "�����-�����";
    ls->enumVideoMonGreen       = "�������";
    ls->enumVideoMonAmber       = "�����������";

    ls->enumVideoTypePAL        = "PAL";
    ls->enumVideoTypeNTSC       = "NTSC";

    ls->enumVideoEmuNone        = "���";
    ls->enumVideoEmuYc          = "Y/C cable (sharp)";
    ls->enumVideoEmuMonitor     = "�������";
    ls->enumVideoEmuYcBlur      = "Noisy Y/C cable (sharp)";
    ls->enumVideoEmuComp        = "Composite (blurry)";
    ls->enumVideoEmuCompBlur    = "Noisy Composite (blurry)";
    ls->enumVideoEmuScale2x     = "Scale 2x";
    ls->enumVideoEmuHq2x        = "Hq2x";

    ls->enumVideoSize1x         = "���������� - 320x200";
    ls->enumVideoSize2x         = "��������� - 640x400";
    ls->enumVideoSizeFullscreen = "�� ���� �����";

    ls->enumVideoDrvDirectDrawHW= "DirectDraw ���������"; 
    ls->enumVideoDrvDirectDraw  = "DirectDraw";
    ls->enumVideoDrvGDI         = "GDI";
    ls->enumVideoDrvD3D         = "Direct3D";

    ls->enumVideoFrameskip0     = "���";
    ls->enumVideoFrameskip1     = "1 ����";
    ls->enumVideoFrameskip2     = "2 �����";
    ls->enumVideoFrameskip3     = "3 �����";
    ls->enumVideoFrameskip4     = "4 �����";
    ls->enumVideoFrameskip5     = "5 ������";

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

    ls->enumSoundDrvNone        = "��� �����";
    ls->enumSoundDrvWMM         = "������� WMM";
    ls->enumSoundDrvDirectX     = "DirectX �������";

    ls->enumEmuSync1ms          = "�������. � MSX";
    ls->enumEmuSyncAuto         = "���� (�����.)";
    ls->enumEmuSyncNone         = "���";
    ls->enumEmuSyncVblank       = "������������ �������������";
    ls->enumEmuAsyncVblank      = "����������� ����. �������.";             

    ls->enumControlsJoyNone     = "���";
    ls->enumControlsJoyMouse    = "�����";
    ls->enumControlsJoyTetris2Dongle = "Tetris 2 Dongle";
    ls->enumControlsJoyTMagicKeyDongle = "MagicKey Dongle";
    ls->enumControlsJoy2Button = "2-��������� ��������";                   
    ls->enumControlsJoyGunstick  = "��������";                         
    ls->enumControlsJoyAsciiLaser="ASCII Plus-X Terminator Laser";      
    ls->enumControlsArkanoidPad  ="Arkanoid Pad";                   // New in 2.7.1
    ls->enumControlsJoyColeco = "�������� �� ColecoVision";                

    ls->enumDiskMsx35Dbl9Sect    = "MSX 3.5\" �������������, 9 ��������";     
    ls->enumDiskMsx35Dbl8Sect    = "MSX 3.5\" �������������, 8 ��������";     
    ls->enumDiskMsx35Sgl9Sect    = "MSX 3.5\" �������������, 9 ��������";     
    ls->enumDiskMsx35Sgl8Sect    = "MSX 3.5\" �������������, 8 ��������";     
    ls->enumDiskSvi525Dbl        = "SVI-328 5.25\" �������������";           
    ls->enumDiskSvi525Sgl        = "SVI-328 5.25\" �������������"; 
    ls->enumDiskSf3Sgl           = "Sega SF-7000 3\" �������������";            


    //----------------------
    // Configuration related lines
    //----------------------

    ls->confTitle               = "blueMSX - ������������ �����";
    ls->confConfigText          = "�������� �������";
    ls->confSlotLayout          = "������������ �����";
    ls->confMemory              = "������";
    ls->confChipEmulation       = "�������� ����";
    ls->confChipExtras          = "�������������";

    ls->confOpenRom             = "������� ROM �����";
    ls->confSaveTitle           = "blueMSX - ��������� ������������";
    ls->confSaveText            = "�� ������ ������������ ������������:";
    ls->confSaveAsTitle         = "��������� ������������ ���...";
    ls->confSaveAsMachineName   = "��� ������:";
    ls->confDiscardTitle        = "blueMSX - ������������";
    ls->confExitSaveTitle       = "blueMSX - ����� �� ��������� ������������";
    ls->confExitSaveText        = "�� ������ �������� ��� ��������� ������� ������������?";

    ls->confSlotLayoutGB        = "������������ ����� ";
    ls->confSlotExtSlotGB       = "������� ����� ";
    ls->confBoardGB             = "����� ";
    ls->confBoardText           = "��� �����:";
    ls->confSlotPrimary         = "��������";
    ls->confSlotExpanded        = "����������� (4 ��������)";

    ls->confSlotCart            = "��������";
    ls->confSlot                = "����";
    ls->confSubslot             = "�������";

    ls->confMemAdd              = "��������...";
    ls->confMemEdit             = "��������...";
    ls->confMemRemove           = "������";
    ls->confMemSlot             = "����";
    ls->confMemAddresss         = "�����";
    ls->confMemType             = "���";
    ls->confMemRomImage         = "Rom �����";

    ls->confChipVideoGB          = "����� ";
    ls->confChipVideoChip        = "��������:";
    ls->confChipVideoRam         = "�����������:";
    ls->confChipSoundGB          = "���� ";
    ls->confChipPsgStereoText    = " PSG ������";

    ls->confCmosGB               = "CMOS ";
    ls->confCmosEnable           = " �������� CMOS";
    ls->confCmosBattery          = " ������������ ���������� ���������";

    ls->confCpuFreqGB            = "������� CPU ";
    ls->confZ80FreqText          = "Z80 �������:";
    ls->confR800FreqText         = "R800 �������:";
    ls->confFdcGB                = "���������� ��������� ";
    ls->confCFdcNumDrivesText    = "���������� ����������:";

    ls->confEditMemTitle         = "blueMSX - ��������� �������";
    ls->confEditMemGB            = "����������� ������� ";
    ls->confEditMemType          = "���:";
    ls->confEditMemFile          = "����:";
    ls->confEditMemAddress       = "�����";
    ls->confEditMemSize          = "������";
    ls->confEditMemSlot          = "����";


    //----------------------
    // Shortcut lines
    //----------------------

    ls->shortcutKey             = "��������";
    ls->shortcutDescription     = "������";

    ls->shortcutSaveConfig      = "blueMSX - ��������� ������������";
    ls->shortcutOverwriteConfig = "�� ������ ������������ ������������ ������:";
    ls->shortcutExitConfig      = "blueMSX - ����� �� ��������� ������";
    ls->shortcutDiscardConfig   = "�� ������ �������� ��� ������� ��������?";
    ls->shortcutSaveConfigAs    = "blueMSX - ��������� ������������ ���...";
    ls->shortcutConfigName      = "��� �������:";
    ls->shortcutNewProfile      = "< ����� ������� >";
    ls->shortcutConfigTitle     = "blueMSX - �������� ������";
    ls->shortcutAssign          = "���������";
    ls->shortcutPressText       = "������� ������:";
    ls->shortcutScheme          = "�����:";
    ls->shortcutCartInsert1     = "�������� �������� 1";
    ls->shortcutCartRemove1     = "������ �������� 1";
    ls->shortcutCartInsert2     = "�������� �������� 2";
    ls->shortcutCartRemove2     = "������ �������� 2";
    ls->shortcutSpecialMenu1    = "�������� ����������� ���� ��������� 1";
    ls->shortcutSpecialMenu2    = "�������� ����������� ���� ��������� 2";
    ls->shortcutCartAutoReset   = "�������� �������� ����� ��������� ��������";
    ls->shortcutDiskInsertA     = "�������� ������� A";
    ls->shortcutDiskDirInsertA  = "�������� ����� ��� ������� A";
    ls->shortcutDiskRemoveA     = "������ ������� A";
    ls->shortcutDiskChangeA     = "������ ������� ������� A";
    ls->shortcutDiskAutoResetA  = "�������� �������� ����� ��������� ������� A";
    ls->shortcutDiskInsertB     = "�������� ������� B";
    ls->shortcutDiskDirInsertB  = "�������� ����� ��� ������� B";
    ls->shortcutDiskRemoveB     = "������ ������� B";
    ls->shortcutCasInsert       = "�������� �������";
    ls->shortcutCasEject        = "������ �������";
    ls->shortcutCasAutorewind   = "�������� ������������ �������";
    ls->shortcutCasReadOnly     = "�������� ������ ������ �������";
    ls->shortcutCasSetPosition  = "���������� ������� �������";
    ls->shortcutCasRewind       = "���������� �������";
    ls->shortcutCasSave         = "��������� ����� �������";
    ls->shortcutPrnFormFeed     = "�����������";
    ls->shortcutCpuStateLoad    = "��������� ��������� CPU";
    ls->shortcutCpuStateSave    = "��������� ��������� CPU";
    ls->shortcutCpuStateQload   = "������ ���������";
    ls->shortcutCpuStateQsave   = "������ ���������";
    ls->shortcutAudioCapture    = "�����/���� ������ �����";
    ls->shortcutScreenshotOrig  = "����� ��������";
    ls->shortcutScreenshotSmall = "��������� �������� ��� �������";
    ls->shortcutScreenshotLarge = "������� �������� ��� �������";
    ls->shortcutQuit            = "����� �� blueMSX";
    ls->shortcutRunPause        = "����/����� ��������";
    ls->shortcutStop            = "���������� ��������";
    ls->shortcutResetHard       = "���������� �����";
    ls->shortcutResetSoft       = "����������� �����";
    ls->shortcutResetClean      = "������ �����";
    ls->shortcutSizeSmall       = "���������� ����� ������ ����";
    ls->shortcutSizeNormal      = "���������� ������� ������ ����";
    ls->shortcutSizeFullscreen  = "���������� �� ������ �����";
    ls->shortcutSizeMinimized   = "��������";
    ls->shortcutToggleFullscren = "�� ���� �����";
    ls->shortcutVolumeIncrease  = "��������� ���������";
    ls->shortcutVolumeDecrease  = "��������� ���������";
    ls->shortcutVolumeMute      = "������ ����";
    ls->shortcutVolumeStereo    = "�������� ����/������";
    ls->shortcutSwitchMsxAudio  = "�������� MSX-AUDIO";
    ls->shortcutSwitchFront     = "�������� ������������� Panasonic";
    ls->shortcutSwitchPause     = "�������� ������������� �����";
    ls->shortcutToggleMouseLock = "�������� ���������� �����";
    ls->shortcutEmuSpeedMax     = "������������ �������� ��������";
    ls->shortcutEmuPlayReverse  = "Rewind emulation";                     // New in 2.8.3
    ls->shortcutEmuSpeedToggle  = "�������� ������������ �������� ��������";
    ls->shortcutEmuSpeedNormal  = "������ �������� ��������";
    ls->shortcutEmuSpeedInc     = "��������� �������� ��������";
    ls->shortcutEmuSpeedDec     = "��������� �������� ��������";
    ls->shortcutThemeSwitch     = "������� ����";
    ls->shortcutShowEmuProp     = "�������� ��������� ��������";
    ls->shortcutShowVideoProp   = "�������� ��������� �����";
    ls->shortcutShowAudioProp   = "�������� ��������� �����";
    ls->shortcutShowCtrlProp    = "�������� ��������� ����������";
    ls->shortcutShowEffectsProp = "Show Effects Properties";     // New in 2.9
    ls->shortcutShowSettProp    = "�������� ���������";
    ls->shortcutShowPorts       = "�������� ��������� ������";
    ls->shortcutShowLanguage    = "�������� ����� �����";
    ls->shortcutShowMachines    = "�������� �������� �����";
    ls->shortcutShowShortcuts   = "�������� �������� �������� ������";
    ls->shortcutShowKeyboard    = "�������� �������� ������������ / ����������";
    ls->shortcutShowMixer       = "�������� ����������";
    ls->shortcutShowDebugger    = "�������� ��������";
    ls->shortcutShowTrainer     = "�������� ����";
    ls->shortcutShowHelp        = "�������� ������";
    ls->shortcutShowAbout       = "�������� �� ���������";    
    ls->shortcutShowFiles       = "�������� ��������� ������";
    ls->shortcutToggleSpriteEnable = "��������/�������� �������";
    ls->shortcutToggleFdcTiming = "��������/��������� ������ ���������";
    ls->shortcutToggleNoSpriteLimits = "Toggle Sprites Limitation";                 // New in 2.9
    ls->shortcutEnableMsxKeyboardQuirk = "Emulate MSX Keyboard Quirk";              // New in 2.9
    ls->shortcutToggleCpuTrace  = "��������/��������� CPU Trace";
    ls->shortcutVideoLoad       = "��������� �����������";             
    ls->shortcutVideoPlay       = "������������� �����������";   
    ls->shortcutVideoRecord     = "Record Video Capture";              
    ls->shortcutVideoStop       = "���������� �����������";                
    ls->shortcutVideoRender     = "����� �����������";   


    //----------------------
    // Keyboard config lines
    //----------------------    
 
    ls->keyconfigSelectedKey    = "�������� ������:";
    ls->keyconfigMappedTo       = "Mapped To:";
    ls->keyconfigMappingScheme  = "�����:";

    
    //----------------------
    // Rom type lines
    //----------------------

    ls->romTypeStandard         = "��������";
    ls->romTypeZenima80         = "Zemina 80 in 1";
    ls->romTypeZenima90         = "Zemina 90 in 1";
    ls->romTypeZenima126        = "Zemina 126 in 1";
    ls->romTypeSccMirrored      = "SCC mirrored";
    ls->romTypeSccExtended      = "SCC extended";
    ls->romTypeKonamiGeneric    = "Konami Generic";
    ls->romTypeMirrored         = "Mirrored ROM";
    ls->romTypeNormal           = "������� ROM";
    ls->romTypeDiskPatch        = "������� + ���� �������";
    ls->romTypeCasPatch         = "������� + ���� �������";
    ls->romTypeTc8566afFdc      = "TC8566AF ���������� ���������";
    ls->romTypeTc8566afTrFdc    = "TC8566AF Turbo-R ���������� ���������";
    ls->romTypeMicrosolFdc      = "Microsol ���������� ���������";
    ls->romTypeNationalFdc      = "National ���������� ���������";
    ls->romTypePhilipsFdc       = "Philips ���������� ���������";
    ls->romTypeSvi707Fdc        = "SVI-707 ���������� ���������";
    ls->romTypeSvi738Fdc        = "SVI-738 ���������� ���������";
    ls->romTypeMappedRam        = "Mapped RAM";
    ls->romTypeMirroredRam1k    = "1kB Mirrored RAM";
    ls->romTypeMirroredRam2k    = "2kB Mirrored RAM";
    ls->romTypeNormalRam        = "������� RAM";
    ls->romTypeTurborPause      = "Turbo-R Pause";
    ls->romTypeF4deviceNormal   = "F4 Device Normal";
    ls->romTypeF4deviceInvert   = "F4 Device Inverted";
    ls->romTypeTurborTimer      = "Turbo-R Timer";
    ls->romTypeNormal4000       = "Normal 4000h";
    ls->romTypeNormalC000       = "Normal C000h";
    ls->romTypeExtRam           = "������� RAM";
    ls->romTypeExtRam16         = "16kB ������� RAM";
    ls->romTypeExtRam32         = "32kB ������� RAM";
    ls->romTypeExtRam48         = "48kB ������� RAM";
    ls->romTypeExtRam64         = "64kB ������� RAM";
    ls->romTypeExtRam512        = "512kB ������� RAM";
    ls->romTypeExtRam1mb        = "1MB ������� RAM";
    ls->romTypeExtRam2mb        = "2MB ������� RAM";
    ls->romTypeExtRam4mb        = "4MB ������� RAM";
    ls->romTypeSvi328Cart       = "SVI-328 ��������";
    ls->romTypeSvi328Fdc        = "SVI-328 ���������� ���������";
    ls->romTypeSvi328Prn        = "SVI-328 �������";
    ls->romTypeSvi328Uart       = "SVI-328 ���������������� ����";
    ls->romTypeSvi328col80      = "SVI-328 80 Column Card";
    ls->romTypeSvi727col80      = "SVI-727 80 Column Card";
    ls->romTypeColecoCart       = "�������� Coleco";
    ls->romTypeSg1000Cart       = "�������� SG-1000";
    ls->romTypeSc3000Cart       = "�������� SC-3000";
    ls->romTypeMsxPrinter       = "MSX �������";
    ls->romTypeTurborPcm        = "Turbo-R PCM Chip";
    ls->romTypeNms8280Digitiz   = "Philips NMS-8280 Digitizer";
    ls->romTypeHbiV1Digitiz     = "Sony HBI-V1 Digitizer";
    
    
    //----------------------
    // Debug type lines
    // Note: Only needs translation if debugger is translated
    //----------------------

    ls->dbgMemVisible           = "������� ������";
    ls->dbgMemRamNormal         = "�������";
    ls->dbgMemRamMapped         = "������������";
    ls->dbgMemYmf278            = "YMF278 Sample RAM";
    ls->dbgMemAy8950            = "AY8950 Sample RAM";
    ls->dbgMemScc               = "������";

    ls->dbgCallstack            = "���� �������";

    ls->dbgRegs                 = "��������";
    ls->dbgRegsCpu              = "CPU ��������";
    ls->dbgRegsYmf262           = "YMF262 ��������";
    ls->dbgRegsYmf278           = "YMF278 ��������";
    ls->dbgRegsAy8950           = "AY8950 ��������";
    ls->dbgRegsYm2413           = "YM2413 ��������";

    ls->dbgDevRamMapper         = "RAM Mapper";
    ls->dbgDevRam               = "RAM";
    ls->dbgDevF4Device          = "F4 Device";
    ls->dbgDevKorean80          = "Korean 80";
    ls->dbgDevKorean90          = "Korean 90";
    ls->dbgDevKorean128         = "Korean 128";
    ls->dbgDevFdcMicrosol       = "Microsol FDC";
    ls->dbgDevPrinter           = "�������";
    ls->dbgDevSviFdc            = "SVI FDC";
    ls->dbgDevSviPrn            = "SVI �������";
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
