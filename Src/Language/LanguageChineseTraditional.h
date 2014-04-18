/*****************************************************************************
** $Source: /cygdrive/d/Private/_SVNROOT/bluemsx/blueMSX/Src/Language/LanguageChineseTraditional.h,v $
**
** $Revision: 1.52 $
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
#ifndef LANGUAGE_CHINESE_TRADITIONAL_H
#define LANGUAGE_CHINESE_TRADITIONAL_H

#include "LanguageStrings.h"
 
void langInitChineseTraditional(LanguageStrings* ls) 
{
    //----------------------
    // Language lines
    //----------------------

    ls->langCatalan             = "Catalan";
    ls->langChineseSimplified   = "���� (²��)";
    ls->langChineseTraditional  = "���� (�c��)";
    ls->langDutch               = "������";
    ls->langEnglish             = "�^��";
    ls->langFinnish             = "������";
    ls->langFrench              = "�k��";
    ls->langGerman              = "�w��";
    ls->langItalian             = "�q�j�Q��";
    ls->langJapanese            = "���";
    ls->langKorean              = "����";
    ls->langPolish              = "�i����";
    ls->langPortuguese          = "�������";
    ls->langRussian             = "Russian";            // v2.8
    ls->langSpanish             = "��Z����";
    ls->langSwedish             = "����";


    //----------------------
    // Generic lines
    //----------------------

    ls->textDevice              = "�˸m:";
    ls->textFilename            = "�ɮצW��:";
    ls->textFile                = "�ɮ�";
    ls->textNone                = "�L";
    ls->textUnknown             = "������";                            


    //----------------------
    // Warning and Error lines
    //----------------------

    ls->warningTitle            = "blueMSX - ĵ�i";
    ls->warningDiscardChanges   = "�z�T�w�n����ܧ�ܡH";
    ls->warningOverwriteFile    = "�z�T�w�n�мg�ɮ�:"; 
    ls->errorTitle              = "blueMSX - ���~";
    ls->errorEnterFullscreen    = "�L�k�i�J���ù��Ҧ��C           \n";
    ls->errorDirectXFailed      = "�L�k�إ� DirectX ����C           \n���N���ϥ� GDI�C\n���ˬd���T���e�C";
    ls->errorNoRomInZip         = "�L�k�b zip ���Y�ɮפ���X .rom �ɮסC";
    ls->errorNoDskInZip         = "�L�k�b zip ���Y�ɮפ���X .dsk �ɮסC";
    ls->errorNoCasInZip         = "�L�k�b zip ���Y�ɮפ���X .cas �ɮסC";
    ls->errorNoHelp             = "�L�k��� blueMSX �����ɮסC";
    ls->errorStartEmu           = "�L�k�Ұ� MSX �������C";
    ls->errorPortableReadonly   = "�i�⦡�˸m����Ū�ݩ�";        


    //----------------------
    // File related lines
    //----------------------

    ls->fileRom                 = "ROM �M����";
    ls->fileAll                 = "�Ҧ��ɮ�";
    ls->fileCpuState            = "CPU ���A";
    ls->fileVideoCapture        = "�^�����T"; 
    ls->fileDisk                = "�ϺЬM����";
    ls->fileCas                 = "�ϱa�M����";
    ls->fileAvi                 = "���ŵ��T";    


    //----------------------
    // Menu related lines
    //----------------------

    ls->menuNoRecentFiles       = "- �S���̪��ɮ� -";
    ls->menuInsert              = "���J";
    ls->menuEject               = "�h�X";

    ls->menuCartGameReader      = "�C��Ū����";                        
    ls->menuCartIde             = "IDE";                                
    ls->menuCartBeerIde         = "Beer";                               
    ls->menuCartGIde            = "GIDE";                               
    ls->menuCartSunriseIde      = "Sunrise";                              
    ls->menuCartScsi            = "SCSI";                // New in 2.7
    ls->menuCartMegaSCSI        = "MEGA-SCSI";           // New in 2.7
    ls->menuCartWaveSCSI        = "WAVE-SCSI";           // New in 2.7
    ls->menuCartGoudaSCSI       = "Gouda SCSI";          // New in 2.7
    ls->menuJoyrexPsg           = "Joyrex PSG �d�X"; // New in 2.9
    ls->menuCartSCCPlus         = "SCC + �d�X";
    ls->menuCartSCC             = "SCC �d�X";
    ls->menuCartFMPac           = "FM-PAC �d�X";
    ls->menuCartPac             = "PAC �d�X";
    ls->menuCartHBI55           = "SONY HBI-55 �d�X";
    ls->menuCartInsertSpecial   = "���J�S���ɮ�";                     
    ls->menuCartMegaRam         = "MegaRAM";                            
    ls->menuCartExternalRam     = "�~�� RAM";
    ls->menuCartEseRam          = "Ese-RAM";             // New in 2.7
    ls->menuCartEseSCC          = "Ese-SCC";             // New in 2.7
    ls->menuCartMegaFlashRom    = "Mega Flash ROM";      // New in 2.7

    ls->menuDiskInsertNew       = "���J�s���ϺЬM����";              
    ls->menuDiskInsertCdrom     = "Insert CD-Rom";       // New in 2.7
    ls->menuDiskDirInsert       = "���J�ؿ�";
    ls->menuDiskAutoStart       = "���J���᭫�m";
    ls->menuCartAutoReset       = "���J/�������᭫�m";
    
    ls->menuCasRewindAfterInsert = "���J����j�a";
    ls->menuCasUseReadOnly       = "�ϥκϱa�M���ɰ�Ū";
    ls->lmenuCasSaveAs           = "�t�s�ϱa�M���ɬ�...";
    ls->menuCasSetPosition      = "�]�w��m";
    ls->menuCasRewind           = "�j�a";

    ls->menuVideoLoad           = "���J...";             
    ls->menuVideoPlay           = "����W�����^��";   
    ls->menuVideoRecord         = "���s";              
    ls->menuVideoRecording      = "���b���s";           
    ls->menuVideoRecAppend      = "���s (���[)";     
    ls->menuVideoStop           = "����";                
    ls->menuVideoRender         = "��V���T�ɮ�";   

    ls->menuPrnFormfeed         = "����";

    ls->menuZoomNormal          = "�@��j�p";
    ls->menuZoomDouble          = "�⭿�j�p";
    ls->menuZoomFullscreen      = "���ù�";
    
    ls->menuPropsEmulation      = "����";
    ls->menuPropsVideo          = "���T";
    ls->menuPropsSound          = "����";
    ls->menuPropsControls       = "���";
    ls->menuPropsEffects        = "Effects";               // New in 2.9
    ls->menuPropsSettings        = "�]�w";
    ls->menuPropsFile           = "�ɮ�";
    ls->menuPropsDisk           = "Disks";               // New in 2.7
    ls->menuPropsLanguage       = "�y��";
    ls->menuPropsPorts          = "�s����";
    
    ls->menuVideoSource         = "���T��X�ӷ�";                   
    ls->menuVideoSourceDefault  = "�S�����T��X�ӷ��s�u";      
    ls->menuVideoChipAutodetect = "�۰ʰ������T����";
    ls->menuVideoInSource       = "���T��J�ӷ�";                    
    ls->menuVideoInBitmap       = "�I�}����";                        
    
    ls->menuEthInterface        = "Ethernet"; 

    ls->menuHelpHelp            = "�����D�D";
    ls->menuHelpAbout           = "���� blueMSX";

    ls->menuFileCart            = "�d�X����";
    ls->menuFileDisk            = "�Ϻо�";
    ls->menuFileCas             = "�ϱa��";
    ls->menuFilePrn             = "�L���";
    ls->menuFileLoadState       = "���J CPU ���A";
    ls->menuFileSaveState       = "�x�s CPU ���A";
    ls->menuFileQLoadState      = "�ֳt���J���A";
    ls->menuFileQSaveState      = "�ֳt�x�s���A";
    ls->menuFileCaptureAudio    = "�^�����T";
    ls->menuFileCaptureVideo    = "�^�����T"; 
    ls->menuFileScreenShot      = "�x�s�ù����";
    ls->menuFileExit            = "����";

    ls->menuFileHarddisk        = "�w�о�";                          
    ls->menuFileHarddiskNoPesent= "�S���w�о����";             
    ls->menuFileHarddiskRemoveAll= "Eject All Harddisk";    // New in 2.7

    ls->menuRunRun              = "����";
    ls->menuRunPause            = "�Ȱ�";
    ls->menuRunStop             = "����";
    ls->menuRunSoftReset        = "�n�魫�m";
    ls->menuRunHardReset        = "�w�魫�m";
    ls->menuRunCleanReset       = "�@�뭫�m";

    ls->menuToolsMachine        = "���ؽs�边";
    ls->menuToolsShortcuts      = "�ֳt��s�边";
    ls->menuToolsCtrlEditor     = "��� / ��L�s�边"; 
    ls->menuToolsMixer          = "�V�X��";
    ls->menuToolsDebugger       = "�����u��";               
    ls->menuToolsTrainer        = "�V�m��";                
    ls->menuToolsTraceLogger    = "�l�ܰO����";           

    ls->menuFile                = "�ɮ�";
    ls->menuRun                 = "����";
    ls->menuWindow              = "����";
    ls->menuOptions             = "�ﶵ";
    ls->menuTools               = "�u��";
    ls->menuHelp                = "����";


    //----------------------
    // Dialog related lines
    //----------------------

    ls->dlgOK                   = "�T�w";
    ls->dlgOpen                 = "�}��";
    ls->dlgCancel               = "����";
    ls->dlgSave                 = "�x�s";
    ls->dlgSaveAs               = "�t�s�s��...";
    ls->dlgRun                  = "����";
    ls->dlgClose                = "����";
    
    ls->dlgLoadRom              = "blueMSX - ��ܥd�X�M���ɸ��J";
    ls->dlgLoadDsk              = "blueMSX - ��ܺϺЬM���ɸ��J";
    ls->dlgLoadCas              = "blueMSX - ��ܺϱa�M���ɸ��J";
    ls->dlgLoadRomDskCas        = "blueMSX - ��ܥd�X�B�ϺЩκϱa�M���ɸ��J";
    ls->dlgLoadRomDesc          = "�п�ܭn���J���d�X�M����:";
    ls->dlgLoadDskDesc          = "�п�ܭn���J���ϺЬM����:";
    ls->dlgLoadCasDesc          = "�п�ܭn���J���ϱa�M����:";
    ls->dlgLoadRomDskCasDesc    = "�п�ܭn���J���d�X�B�ϺЩκϱa�M����:";
    ls->dlgLoadState            = "���J CPU ���A";
    ls->dlgLoadVideoCapture     = "���J�^�����T";      
    ls->dlgSaveState            = "�x�s CPU ���A";
    ls->dlgSaveCassette          = "blueMSX - �x�s�ϱa�M����";
    ls->dlgSaveVideoClipAs      = "�x�s���T���Ŭ�...";      
    ls->dlgAmountCompleted      = "���ͧ���:";          
    ls->dlgInsertRom1           = "�Цb���� 1 ���J ROM �d�X";
    ls->dlgInsertRom2           = "�Цb���� 2 ���J ROM �d�X";
    ls->dlgInsertDiskA          = "�Цb�Ϻо� A ���J�ϺЬM����";
    ls->dlgInsertDiskB          = "�Цb�Ϻо� B ���J�ϺЬM����";
    ls->dlgInsertHarddisk       = "���J�w�о�";                   
    ls->dlgInsertCas            = "�д��J�ϱa���ϱa";
    ls->dlgRomType              = "ROM ����:";
    ls->dlgDiskSize             = "�ϺФj�p:";             

    ls->dlgTapeTitle            = "blueMSX - �ϱa��m";
    ls->dlgTapeFrameText        = "�ϱa��m";
    ls->dlgTapeCurrentPos       = "�ثe����m";
    ls->dlgTapeTotalTime        = "�`�ɶ�";
    ls->dlgTapeSetPosText        = "�ϱa��m:";
    ls->dlgTapeCustom            = "��ܦۭq�ɮ�";
    ls->dlgTabPosition           = "��m";
    ls->dlgTabType               = "����";
    ls->dlgTabFilename           = "�ɮצW��";
    ls->dlgZipReset             = "���J���᭫�m";

    ls->dlgAboutTitle           = "blueMSX - ����";

    ls->dlgLangLangText         = "�п�� blueMSX �n�ϥΪ��y��";
    ls->dlgLangLangTitle        = "blueMSX - �y��";

    ls->dlgAboutAbout           = "����\r\n====";
    ls->dlgAboutVersion         = "����:";
    ls->dlgAboutBuildNumber     = "�ի�:";
    ls->dlgAboutBuildDate       = "���:";
    ls->dlgAboutCreat           = "�� Daniel Vik �Ч@";
    ls->dlgAboutDevel           = "�}�o����\r\n========";
    ls->dlgAboutThanks          = "�S�O�P��\r\n============";       // New in 2.7 (retranslate, see english)
    ls->dlgAboutLisence         = "���v��ĳ\r\n"
                                  "======\r\n\r\n"
                                  "�o�ӳn��̾ڥثe�����A�Ӵ��ѡA�S��������T���ηt�ܪ���O�C "
                                  "�b���󱡪p�U�A�ϥγo�ӳn��ҳy�����l�`�ݭn�ϥΪ̦ۤv�Ӿ�A "
                                  "�@�̤��Ӿ���󪺳d���C\r\n\r\n"
                                  "�гX�� www.bluemsx.com ���o��h�Ӹ`�C";

    ls->dlgSavePreview          = "��ܹw��";
    ls->dlgSaveDate             = "�x�s�ɶ�:";

    ls->dlgRenderVideoCapture   = "blueMSX - ���b��V�^�����T...";  


    //----------------------
    // Properties related lines
    //----------------------

    ls->propTitle               = "blueMSX - ���e";
    ls->propEmulation           = "����";
    ls->propVideo               = "���T";
    ls->propSound               = "����";
    ls->propControls            = "���";
    ls->propPerformance         = "�į�";
    ls->propEffects             = "Effects";             // New in 2.9
    ls->propSettings             = "�]�w";
    ls->propFile                = "�ɮ�";
    ls->propDisk                = "Disks";              // New in 2.7
    ls->propPorts               = "�s����";
    
    ls->propEmuGeneralGB        = "�@�� ";
    ls->propEmuFamilyText       = "MSX ����:";
    ls->propEmuMemoryGB         = "�O���� ";
    ls->propEmuRamSizeText      = "RAM �j�p:";
    ls->propEmuVramSizeText     = "VRAM �j�p:";
    ls->propEmuSpeedGB          = "�����t�� ";
    ls->propEmuSpeedText        = "�����t��:";
    ls->propEmuFrontSwitchGB     = "Panasonic �}�� ";
    ls->propEmuFrontSwitch       = " �e�ݶ}��";
    ls->propEmuNoSpriteLimits   = " Disable Sprites Limitation";  // New in 2.9
    ls->propEnableMsxKeyboardQuirk = " Emulate MSX keyboard quirk";  // New in 2.9
    ls->propEmuFdcTiming        = " ���γn���Ϻо��p��";
    ls->propEmuReversePlay      = " Enable reverse playback"; // New in 2.8.3
    ls->propEmuPauseSwitch      = " �Ȱ��}��";
    ls->propEmuAudioSwitch       = " MSX ���ĥd�}��";
    ls->propVideoFreqText       = "���T�W�v:";
    ls->propVideoFreqAuto       = "�۰�";
    ls->propSndOversampleText   = "�W����:";
    ls->propSndYkInGB           = "YK-01/YK-10/YK-20 ��J ";                
    ls->propSndMidiInGB         = "MIDI ��J ";
    ls->propSndMidiOutGB        = "MIDI ��X ";
    ls->propSndMidiChannel      = "MIDI �n�D:";                      
    ls->propSndMidiAll          = "����";                                

    ls->propMonMonGB            = "�ʵ��� ";
    ls->propMonTypeText         = "�ʵ�������:";
    ls->propMonEmuText          = "�ʵ�������:";
    ls->propVideoTypeText       = "���T����:";
    ls->propWindowSizeText      = "�����j�p:";
    ls->propMonHorizStretch      = " �����Ԧ�";
    ls->propMonVertStretch       = " �����Ԧ�";
    ls->propMonDeInterlace      = " �h�������e��\\��";
    ls->propBlendFrames         = " �V�X�s�򪺵e��";           
    ls->propMonBrightness       = "�G��:";
    ls->propMonContrast         = "����:";
    ls->propMonSaturation       = "���X��:";
    ls->propMonGamma            = "�ɺ���:";
    ls->propMonScanlines        = " ���˽u:";
    ls->propMonColorGhosting    = " RF ���ܾ�:";
    ls->propMonEffectsGB        = "�ĪG ";

    ls->propPerfVideoDrvGB      = "���T�X�ʵ{�� ";
    ls->propPerfVideoDispDrvText= "����X�ʵ{��:";
    ls->propPerfFrameSkipText   = "�e�沤�L:";
    ls->propPerfAudioDrvGB      = "���T�X�ʵ{�� ";
    ls->propPerfAudioDrvText    = "�����X�ʵ{��:";
    ls->propPerfAudioBufSzText  = "���Ľw�İϤj�p:";
    ls->propPerfEmuGB           = "���� ";
    ls->propPerfSyncModeText    = "�P�B�Ҧ�:";
    ls->propFullscreenResText   = "���ù��ѪR��:";

    ls->propSndChipEmuGB        = "���Ĵ������� ";
    ls->propSndMsxMusic         = " MSX ����";
    ls->propSndMsxAudio         = " MSX ����";
    ls->propSndMoonsound        = " MoonSound";
    ls->propSndMt32ToGm         = " ���� MT-32 �־���@�� MIDI �˸m";

    ls->propPortsLptGB          = "�æC�s���� ";
    ls->propPortsComGB          = "�ǦC�s���� ";
    ls->propPortsLptText        = "�s����:";
    ls->propPortsCom1Text       = "�s���� 1:";
    ls->propPortsNone           = "�L";
    ls->propPortsSimplCovox     = "SiMPL / Covox �Ʀ������ഫ��";
    ls->propPortsFile           = "�C�L���ɮ�";
    ls->propPortsComFile        = "�ǰe���ɮ�";
    ls->propPortsOpenLogFile    = "�}�ҰO����";
    ls->propPortsEmulateMsxPrn  = "����:";

    ls->propSetFileHistoryGB     = "�ɮװO�� ";
    ls->propSetFileHistorySize   = "�ɮװO�������ؼ�:";
    ls->propSetFileHistoryClear  = "�M���O��";
    ls->propFileTypes            = " ���U blueMSX ���p���ɮ����� (.rom, .dsk, .cas, .sta)";
    ls->propWindowsEnvGB         = "Windows ���� "; 
    ls->propSetScreenSaver       = " �� blueMSX ����ɰ��οù��O�@";
    ls->propDisableWinKeys       = " �ϥ� MSX �ɦ۰ʰ��� Windows �����B�k��\\���"; 
    ls->propPriorityBoost        = " ���� blueMSX ���u���v";
    ls->propScreenshotPng        = " �ϥΥi�⦡�����ϧ� (.png) �ù����";  
    ls->propEjectMediaOnExit    = " Eject media when blueMSX exits";        // New in 2.8
    ls->propClearHistory         = "�z�O�_�T�w�n�M���ɮװO���H";
    ls->propOpenRomGB            = "�}�� ROM ��ܤ�� ";
    ls->propDefaultRomType       = "�w�] ROM ����:";
    ls->propGuessRomType         = "���� ROM ����";

    ls->propSettDefSlotGB       = "�즲 ";
    ls->propSettDefSlots        = "���J ROM ��:";
    ls->propSettDefSlot         = " ����";
    ls->propSettDefDrives       = "���J�Ϥ���:";
    ls->propSettDefDrive        = " �Ϻо�";

    ls->propThemeGB             = "�G���D�D ";
    ls->propTheme               = "�G���D�D:";

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

    ls->enumVideoMonColor       = "�m��";
    ls->enumVideoMonGrey        = "�¥�";
    ls->enumVideoMonGreen       = "���";
    ls->enumVideoMonAmber       = "����";

    ls->enumVideoTypePAL        = "PAL";
    ls->enumVideoTypeNTSC       = "NTSC";

    ls->enumVideoEmuNone        = "�L";
    ls->enumVideoEmuYc          = "Y/C �����^�� (�U�Q)";
    ls->enumVideoEmuMonitor     = "�ʵ���";
    ls->enumVideoEmuYcBlur      = "���T Y/C �����^�� (�U�Q)";
    ls->enumVideoEmuComp        = "�ƦX (�ҽk)";
    ls->enumVideoEmuCompBlur    = "���T�ƦX (�ҽk)";
    ls->enumVideoEmuScale2x     = "�⭿�Y��";
    ls->enumVideoEmuHq2x        = "�⭿���~��";

    ls->enumVideoSize1x         = "�з� - 320x200";
    ls->enumVideoSize2x         = "�⭿ - 640x400";
    ls->enumVideoSizeFullscreen = "���ù�";

    ls->enumVideoDrvDirectDrawHW = "DirectDraw �w��[�t"; 
    ls->enumVideoDrvDirectDraw  = "DirectDraw";
    ls->enumVideoDrvGDI         = "GDI";
    ls->enumVideoDrvD3D         = "Direct3D";

    ls->enumVideoFrameskip0     = "�L";
    ls->enumVideoFrameskip1     = "1 �e��";
    ls->enumVideoFrameskip2     = "2 �ӵe��";
    ls->enumVideoFrameskip3     = "3 �ӵe��";
    ls->enumVideoFrameskip4     = "4 �ӵe��";
    ls->enumVideoFrameskip5     = "5 �ӵe��";

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

    ls->enumSoundDrvNone        = "�S������";
    ls->enumSoundDrvWMM         = "WMM �X�ʵ{��";
    ls->enumSoundDrvDirectX     = "DirectX �X�ʵ{��";

    ls->enumEmuSync1ms          = "�P�B�� MSX ���s��z";
    ls->enumEmuSyncAuto         = "�۰� (�ֳt)";
    ls->enumEmuSyncNone         = "�L";
    ls->enumEmuSyncVblank       = "�P�B�� PC �����ť�";
    ls->enumEmuAsyncVblank      = "�D�P�B PC �ť�";             

    ls->enumControlsJoyNone     = "�L";
    ls->enumControlsJoyMouse    = "�ƹ�";
    ls->enumControlsJoyTetris2Dongle = "�Xù����� 2 �����Ҳ�";
    ls->enumControlsJoyTMagicKeyDongle = "MagicKey Dongle";             
    ls->enumControlsJoy2Button = "2 ���s�n��";                   
    ls->enumControlsJoyGunstick  = "Gun Stick ���u�j";                         
    ls->enumControlsJoyAsciiLaser="ASCII Plus-X �׵��̹p�g���u�j";      
    ls->enumControlsArkanoidPad  ="Arkanoid Pad";                   // New in 2.7.1
    ls->enumControlsJoyColeco = "ColecoVision �n��";                

    ls->enumDiskMsx35Dbl9Sect    = "MSX 3.5\" ����, 9 �Ӻϰ�";     
    ls->enumDiskMsx35Dbl8Sect    = "MSX 3.5\" ����, 8 �Ӻϰ�";     
    ls->enumDiskMsx35Sgl9Sect    = "MSX 3.5\" �歱, 9 �Ӻϰ�";     
    ls->enumDiskMsx35Sgl8Sect    = "MSX 3.5\" �歱, 8 �Ӻϰ�";     
    ls->enumDiskSvi525Dbl        = "SVI-328 5.25\" ����";           
    ls->enumDiskSvi525Sgl        = "SVI-328 5.25\" �歱"; 
    ls->enumDiskSf3Sgl           = "Sega SF-7000 3\"  �歱";               


    //----------------------
    // Configuration related lines
    //----------------------

    ls->confTitle                = "blueMSX - ���زպA�s�边";
    ls->confConfigText           = "�]�w";
    ls->confSlotLayout           = "���Ѱt�m";
    ls->confMemory               = "�O����";
    ls->confChipEmulation        = "��������";
    ls->confChipExtras          = "�B�~";

    ls->confOpenRom             = "�}�� ROM �M����";
    ls->confSaveTitle            = "blueMSX - �x�s�]�w";
    ls->confSaveText             = "�z�T�w�n�мg���س]�w��:";
    ls->confSaveAsTitle         = "�t�s�]�w��...";
    ls->confSaveAsMachineName    = "���ئW��:";
    ls->confDiscardTitle         = "blueMSX - �]�w";
    ls->confExitSaveTitle        = "blueMSX - ���}�]�w�s�边";
    ls->confExitSaveText         = "�z�T�w�n���ثe���]�w���ܧ�ܡH";

    ls->confSlotLayoutGB         = "���ѥ��� ";
    ls->confSlotExtSlotGB        = "�~������ ";
    ls->confBoardGB             = "�D���O ";
    ls->confBoardText           = "�D���O����:";
    ls->confSlotPrimary          = "�D�n";
    ls->confSlotExpanded         = "�w�X�i (�|�Ӥl����)";

    ls->confSlotCart             = "�d�X";
    ls->confSlot                = "����";
    ls->confSubslot             = "�l����";

    ls->confMemAdd               = "�[�J...";
    ls->confMemEdit              = "�s��...";
    ls->confMemRemove            = "����";
    ls->confMemSlot              = "����";
    ls->confMemAddresss          = "��}";
    ls->confMemType              = "����";
    ls->confMemRomImage          = "ROM �M����";
    
    ls->confChipVideoGB          = "���T ";
    ls->confChipVideoChip        = "���T����:";
    ls->confChipVideoRam         = "���T RAM:";
    ls->confChipSoundGB          = "���� ";
    ls->confChipPsgStereoText    = " PSG �����n";

    ls->confCmosGB                = "CMOS ";
    ls->confCmosEnable            = " �ҥ� CMOS";
    ls->confCmosBattery           = " �ϥΥR�q�q��";

    ls->confCpuFreqGB            = "CPU �W�v ";
    ls->confZ80FreqText          = "Z80 �W�v:";
    ls->confR800FreqText         = "R800 �W�v:";
    ls->confFdcGB                = "�n���Ϻб�� ";
    ls->confCFdcNumDrivesText    = "�Ϻо��N��:";

    ls->confEditMemTitle         = "blueMSX - �s�������";
    ls->confEditMemGB            = "�������Ӹ` ";
    ls->confEditMemType          = "����:";
    ls->confEditMemFile          = "�ɮ�:";
    ls->confEditMemAddress       = "��}";
    ls->confEditMemSize          = "�j�p";
    ls->confEditMemSlot          = "����";


    //----------------------
    // Shortcut lines
    //----------------------

    ls->shortcutKey             = "�ֳt��";
    ls->shortcutDescription     = "���|";

    ls->shortcutSaveConfig      = "blueMSX - �x�s�]�w";
    ls->shortcutOverwriteConfig = "�z�T�w�n�мg�ֳt��]�w��:";
    ls->shortcutExitConfig      = "blueMSX - ���}�ֳt��s�边";
    ls->shortcutDiscardConfig   = "�z�T�w�n���ثe���]�w���ܧ�ܡH";
    ls->shortcutSaveConfigAs    = "blueMSX - �t�s�ֳt��]�w��...";
    ls->shortcutConfigName      = "�]�w�W��:";
    ls->shortcutNewProfile      = "< �s���]�w�� >";
    ls->shortcutConfigTitle     = "blueMSX - �ֳt������s�边";
    ls->shortcutAssign          = "����";
    ls->shortcutPressText       = "�Ы��U�ֳt�����:";
    ls->shortcutScheme          = "�����t�m:";
    ls->shortcutCartInsert1     = "���J�d�X 1";
    ls->shortcutCartRemove1     = "�����d�X 1";
    ls->shortcutCartInsert2     = "���J�d�X 2";
    ls->shortcutCartRemove2     = "�����d�X 2";
    ls->shortcutSpecialMenu1    = "��ܥd�X 1 ���B�~ ROM ���";
    ls->shortcutSpecialMenu2    = "��ܥd�X 2 ���B�~ ROM ���";
    ls->shortcutCartAutoReset   = "��d�X���J�᭫�m������";
    ls->shortcutDiskInsertA     = "���J�Ϥ� A";
    ls->shortcutDiskDirInsertA  = "���J�ؿ��@���Ϥ� A";
    ls->shortcutDiskRemoveA     = "�h�X�Ϥ� A";
    ls->shortcutDiskChangeA     = "�ֳt�ܧ�Ϥ� A";
    ls->shortcutDiskAutoResetA  = "��Ϥ� A ���J�᭫�m������";
    ls->shortcutDiskInsertB     = "���J�Ϥ� B";
    ls->shortcutDiskDirInsertB  = "���J�ؿ��@���Ϥ� B";
    ls->shortcutDiskRemoveB     = "�h�X�Ϥ� B";
    ls->shortcutCasInsert       = "���J�ϱa";
    ls->shortcutCasEject        = "�h�X�ϱa";
    ls->shortcutCasAutorewind   = "�N�ϱa�������۰ʰj�a���A";
    ls->shortcutCasReadOnly     = "�N�ϱa��������Ū���A";
    ls->shortcutCasSetPosition  = "�]�w�ϱa��m";
    ls->shortcutCasRewind       = "�ϱa�j�a";
    ls->shortcutCasSave         = "�x�s�ϱa�M����";
    ls->shortcutPrnFormFeed     = "�L�������";
    ls->shortcutCpuStateLoad    = "���J CPU ���A";
    ls->shortcutCpuStateSave    = "�x�s CPU ���A";
    ls->shortcutCpuStateQload   = "�ֳt���J CPU ���A";
    ls->shortcutCpuStateQsave   = "�ֳt�x�s CPU ���A";
    ls->shortcutAudioCapture    = "�}�l/����T�^��";
    ls->shortcutScreenshotOrig  = "�ù���� (��l)";
    ls->shortcutScreenshotSmall = "���L�o���ù���� (���p)";
    ls->shortcutScreenshotLarge = "���L�o���ù���� (���j)";
    ls->shortcutQuit            = "���� blueMSX";
    ls->shortcutRunPause        = "����/�Ȱ�����";
    ls->shortcutStop            = "�������";
    ls->shortcutResetHard       = "�w�魫�m";
    ls->shortcutResetSoft       = "�n�魫�m";
    ls->shortcutResetClean      = "�@�뭫�m";
    ls->shortcutSizeSmall       = "�]�w�p�����j�p";
    ls->shortcutSizeNormal      = "�]�w�зǵ����j�p";
    ls->shortcutSizeFullscreen  = "�]�w���ù�";
    ls->shortcutSizeMinimized   = "�̤p�Ƶ���";
    ls->shortcutToggleFullscren = "�������ù�";
    ls->shortcutVolumeIncrease  = "�W�j���q";
    ls->shortcutVolumeDecrease  = "��p���q";
    ls->shortcutVolumeMute      = "�R�����q";
    ls->shortcutVolumeStereo    = "�����歵/�����n";
    ls->shortcutSwitchMsxAudio  = "���� MSX ���Ķ}��";
    ls->shortcutSwitchFront     = "���� Panasonic �e�ݶ}��";
    ls->shortcutSwitchPause     = "�����Ȱ��}��";
    ls->shortcutToggleMouseLock = "�����ƹ���w";
    ls->shortcutEmuSpeedMax     = "�̰������t��";
    ls->shortcutEmuPlayReverse  = "Rewind emulation";                     // New in 2.8.3
    ls->shortcutEmuSpeedToggle  = "�����̰������t��";
    ls->shortcutEmuSpeedNormal  = "�зǼ����t��";
    ls->shortcutEmuSpeedInc     = "�W�[�����t��";
    ls->shortcutEmuSpeedDec     = "��C�����t��";
    ls->shortcutThemeSwitch     = "�����G���D�D";
    ls->shortcutShowEmuProp     = "��ܼ������e";
    ls->shortcutShowVideoProp   = "��ܵ��T���e";
    ls->shortcutShowAudioProp   = "��ܭ��T���e";
    ls->shortcutShowCtrlProp    = "��ܱ���e";
    ls->shortcutShowEffectsProp = "Show Effects Properties";     // New in 2.9
    ls->shortcutShowSettProp    = "��ܳ]�w���e";
    ls->shortcutShowPorts       = "��ܳs���𤺮e";
    ls->shortcutShowLanguage    = "��ܻy����ܤ��";
    ls->shortcutShowMachines    = "��ܾ��ؽs�边";
    ls->shortcutShowShortcuts   = "��ܧֳt��s�边";
    ls->shortcutShowKeyboard    = "�����L�s�边";
    ls->shortcutShowMixer       = "��ܲV�X��";
    ls->shortcutShowDebugger    = "��ܰ����u��";
    ls->shortcutShowTrainer     = "��ܭקﾹ";
    ls->shortcutShowHelp        = "��ܻ�����ܤ��";
    ls->shortcutShowAbout       = "��������ܤ��";
    ls->shortcutShowFiles       = "����ɮפ��e";
    ls->shortcutToggleSpriteEnable = "���/���ëe���ϼh";
    ls->shortcutToggleFdcTiming = "�ҥ�/���γn���Ϻо��p��";
    ls->shortcutToggleNoSpriteLimits = "Toggle Sprites Limitation";                 // New in 2.9
    ls->shortcutEnableMsxKeyboardQuirk = "Emulate MSX Keyboard Quirk";              // New in 2.9
    ls->shortcutToggleCpuTrace  = "�ҥ�/���� CPU �l��";
    ls->shortcutVideoLoad       = "���J...";             
    ls->shortcutVideoPlay       = "����W�����^��";   
    ls->shortcutVideoRecord     = "���s";              
    ls->shortcutVideoStop       = "����";                
    ls->shortcutVideoRender     = "��V���T�ɮ�";   


    //----------------------
    // Keyboard config lines
    //----------------------

    ls->keyconfigSelectedKey    = "���������:";
    ls->keyconfigMappedTo       = "������:";
    ls->keyconfigMappingScheme  = "�����t�m:";

    
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

    ls->dbgMemVisible           = "�i���O����";
    ls->dbgMemRamNormal         = "�з�";
    ls->dbgMemRamMapped         = "����";
    ls->dbgMemYmf278            = "YMF278 ���� RAM";
    ls->dbgMemAy8950            = "AY8950 ���� RAM";
    ls->dbgMemScc               = "�O����";

    ls->dbgCallstack            = "�I�s���|";

    ls->dbgRegs                 = "�Ȧs��";
    ls->dbgRegsCpu              = "CPU �Ȧs��";
    ls->dbgRegsYmf262           = "YMF262 �Ȧs��";
    ls->dbgRegsYmf278           = "YMF278 �Ȧs��";
    ls->dbgRegsAy8950           = "AY8950 �Ȧs��";
    ls->dbgRegsYm2413           = "YM2413 �Ȧs��";

    ls->dbgDevRamMapper         = "RAM ������";
    ls->dbgDevRam               = "RAM";
    ls->dbgDevF4Device          = "F4 �˸m";
    ls->dbgDevKorean80          = "Korean 80";
    ls->dbgDevKorean90          = "Korean 90";
    ls->dbgDevKorean128         = "Korean 128";
    ls->dbgDevFdcMicrosol       = "Microsol FDC";
    ls->dbgDevPrinter           = "�L���";
    ls->dbgDevSviFdc            = "SVI FDC";
    ls->dbgDevSviPrn            = "SVI �L���";
    ls->dbgDevSvi80Col          = "SVI 80 �����";
    ls->dbgDevRtc               = "RTC";
    ls->dbgDevTrPause           = "TR �Ȱ�";


    //----------------------
    // Debug type lines
    // Note: Can only be translated to european languages
    //----------------------

    ls->aboutScrollThanksTo     = "Special thanks to: ";
    ls->aboutScrollAndYou       = "and YOU !!!!";
};

#endif
