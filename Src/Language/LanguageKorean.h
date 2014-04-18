/*****************************************************************************
** $Source: /cygdrive/d/Private/_SVNROOT/bluemsx/blueMSX/Src/Language/LanguageKorean.h,v $
**
** $Revision: 1.62 $ + additions 2005/03/03
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
#ifndef LANGUAGE_KOREAN_H
#define LANGUAGE_KOREAN_H

#include "LanguageStrings.h"
 
void langInitKorean(LanguageStrings* ls)
{
    //----------------------
    // Language lines
    //----------------------

    ls->langCatalan             = "Catalan";
    ls->langChineseSimplified   = "�߱��� ��ü";
    ls->langChineseTraditional  = "�߱��� ��ü";
    ls->langDutch               = "�״������";
    ls->langEnglish             = "����";
    ls->langFinnish             = "�ɶ����";
    ls->langFrench              = "��������";
    ls->langGerman              = "���Ͼ�";
    ls->langItalian             = "��Ż���ƾ�";
    ls->langJapanese            = "�Ϻ���";
    ls->langKorean              = "�ѱ���";
    ls->langPolish              = "�������";
    ls->langPortuguese          = "����������";
    ls->langRussian             = "Russian";            // v2.8
    ls->langSpanish             = "�����ξ�";
    ls->langSwedish             = "��������";


    //----------------------
    // Generic lines
    //----------------------

    ls->textDevice              = "��ġ:";
    ls->textFilename            = "���� �̸�:";
    ls->textFile                = "����";
    ls->textNone                = "����";
    ls->textUnknown             = "�˷����� ����";                            


    //----------------------
    // Warning and Error lines
    //----------------------

    ls->warningTitle             = "blueMSX - ���";
    ls->warningDiscardChanges   = "������ ������ ����Ǳ� ���ؼ� ������ �ؾ� �մϴ�. ���� ������ �ƹ��� ������ �����ʰ� �׳� �����ڽ��ϱ�?";
    ls->warningOverwriteFile    = "������ ���� ���ðڽ��ϱ�:"; 
    ls->errorTitle              = "blueMSX - ����";
    ls->errorEnterFullscreen    = "��ü ȭ���� ���� ����.           \n";
    ls->errorDirectXFailed      = "DirectX ������Ʈ ����� ����.           \nGDI�� ��ü�ؼ� ����մϴ�.\n�׷���ī�� ��������� Ȯ���ϼ���.";
    ls->errorNoRomInZip         = "zip���� ������ rom�� ã�� �� �����ϴ�.";
    ls->errorNoDskInZip         = "zip���� ������ dsk�� ã�� �� �����ϴ�.";
    ls->errorNoCasInZip         = "zip���� ������ cas�� ã�� �� �����ϴ�.";
    ls->errorNoHelp             = "blueMSX ������ ã�� �� �����ϴ�.";
    ls->errorStartEmu           = "MSX ���ķ����͸� ������ �� �����ϴ�.";
    ls->errorPortableReadonly   = "�̵� ��ġ�� �б� �����Դϴ�.";        


    //----------------------
    // File related lines
    //----------------------

    ls->fileRom                 = "�� �̹���";
    ls->fileAll                 = "��� ����";
    ls->fileCpuState            = "CPU ����";
    ls->fileVideoCapture        = "��ȭ�� ����"; 
    ls->fileDisk                = "��ũ �̹���";
    ls->fileCas                 = "������ �̹���";
    ls->fileAvi                 = "������ Ŭ��";    


    //----------------------
    // Menu related lines
    //----------------------

    ls->menuNoRecentFiles       = "- ��� ���� ���� -";
    ls->menuInsert              = "����";
    ls->menuEject               = "������";

    ls->menuCartGameReader      = "���� ����";                        
    ls->menuCartIde             = "IDE";                                
    ls->menuCartBeerIde         = "Beer";                               
    ls->menuCartGIde            = "GIDE";                               
    ls->menuCartSunriseIde      = "Sunrise";                              
    ls->menuCartScsi            = "SCSI";                // New in 2.7
    ls->menuCartMegaSCSI        = "MEGA-SCSI";           // New in 2.7
    ls->menuCartWaveSCSI        = "WAVE-SCSI";           // New in 2.7
    ls->menuCartGoudaSCSI       = "Gouda SCSI";          // New in 2.7
    ls->menuJoyrexPsg           = "Joyrex PSG īƮ����"; // New in 2.9
    ls->menuCartSCC             = "SCC īƮ����";
    ls->menuCartSCCPlus         = "SCC-I īƮ����";
    ls->menuCartFMPac           = "FM-PAC īƮ����";
    ls->menuCartPac             = "PAC īƮ����";
    ls->menuCartHBI55           = "Sony HBI-55 īƮ����";
    ls->menuCartInsertSpecial   = "Ư�� īƮ���� ����";                     
    ls->menuCartMegaRam         = "�ް���";                            
    ls->menuCartExternalRam     = "���工";
    ls->menuCartEseRam          = "Ese-RAM";             // New in 2.7
    ls->menuCartEseSCC          = "Ese-SCC";             // New in 2.7
    ls->menuCartMegaFlashRom    = "Mega Flash ROM";      // New in 2.7

    ls->menuDiskInsertNew       = "���ο� ��ũ �̹��� ����";              
    ls->menuDiskInsertCdrom     = "�õ�� ����";       // New in 2.7
    ls->menuDiskDirInsert       = "���丮 ����";
    ls->menuDiskAutoStart       = "�����Ŀ� �����";
    ls->menuCartAutoReset       = "����/���� �Ŀ� �����";

    ls->menuCasRewindAfterInsert = "�����Ŀ� �ǰ���";
    ls->menuCasUseReadOnly       = "�б�����";
    ls->lmenuCasSaveAs           = "�ٸ� �̸����� ����...";
    ls->menuCasSetPosition      = "��ġ ����";
    ls->menuCasRewind           = "�ǰ���";

    ls->menuVideoLoad           = "�ҷ�����...";             
    ls->menuVideoPlay           = "���������� ��ȭ�� ���� ���";   
    ls->menuVideoRecord         = "��ȭ";              
    ls->menuVideoRecording      = "��ȭ��";           
    ls->menuVideoRecAppend      = "��ȭ (�߰�)";     
    ls->menuVideoStop           = "����";                
    ls->menuVideoRender         = "������ ���Ϸ� ����";   

    ls->menuPrnFormfeed         = "���ǵ�";

    ls->menuZoomNormal          = "���� ũ��";
    ls->menuZoomDouble          = "�ι� ũ��";
    ls->menuZoomFullscreen      = "��ü ȭ��";
    
    ls->menuPropsEmulation      = "���ķ��̼�";
    ls->menuPropsVideo          = "����";
    ls->menuPropsSound          = "����";
    ls->menuPropsControls       = "��Ʈ��";
    ls->menuPropsEffects        = "Effects";               // New in 2.9
    ls->menuPropsSettings        = "�ܺ� ����";
    ls->menuPropsFile           = "����";
    ls->menuPropsDisk           = "��ũ";               // New in 2.7
    ls->menuPropsLanguage       = "���";
    ls->menuPropsPorts          = "��Ʈ"; 
    
    ls->menuVideoSource         = "���� ��� �ҽ�";                   
    ls->menuVideoSourceDefault  = "���� ��� �ҽ� ����ȵ�";      
    ls->menuVideoChipAutodetect = "���� Ĩ �ڵ�����";    
    ls->menuVideoInSource       = "���� �Է� �ҽ�";                    
    ls->menuVideoInBitmap       = "��Ʈ�� ����";                        
    
    ls->menuEthInterface        = "�̴��� �������̽�"; 

    ls->menuHelpHelp            = "���� �׸�";
    ls->menuHelpAbout           = "blueMSX�� ���Ͽ�";

    ls->menuFileCart            = "īƮ���� ����";
    ls->menuFileDisk            = "��ũ ����̺�";
    ls->menuFileCas             = "ī��Ʈ";
    ls->menuFilePrn             = "������";
    ls->menuFileLoadState       = "CPU ���� �ҷ�����";
    ls->menuFileSaveState       = "CPU ���� ����";
    ls->menuFileQLoadState      = "���� �ٷ� �ҷ�����";
    ls->menuFileQSaveState      = "���� �ٷ� ����";
    ls->menuFileCaptureAudio    = "�Ҹ� ����";
    ls->menuFileCaptureVideo    = "���� ��ȭ"; 
    ls->menuFileScreenShot      = "ȭ�� ����";
    ls->menuFileExit            = "������";

    ls->menuFileHarddisk        = "�ϵ� ��ũ";                          
    ls->menuFileHarddiskNoPesent= "��Ʈ�ѷ� �������� ����";             
    ls->menuFileHarddiskRemoveAll= "��� �ϵ� ��ũ ����";    // New in 2.7

    ls->menuRunRun              = "����";
    ls->menuRunPause            = "�Ͻ� ����";
    ls->menuRunStop             = "����";
    ls->menuRunSoftReset        = "����Ʈ ����";
    ls->menuRunHardReset        = "�ϵ� ����";
    ls->menuRunCleanReset       = "��ü ����";

    ls->menuTools                = "����";
    ls->menuToolsMachine         = "�ӽ� ������";
    ls->menuToolsShortcuts      = "����Ű ������";
    ls->menuToolsCtrlEditor     = "��Ʈ�ѷ� / Ű���� ������"; 
    ls->menuToolsDebugger       = "�����";               
    ls->menuToolsTrainer        = "Ʈ���̳�";                
    ls->menuToolsTraceLogger    = "Ʈ���̽� ���";           

    ls->menuFile                = "����";
    ls->menuRun                 = "����";
    ls->menuWindow              = "������";
    ls->menuToolsMixer          = "�ͼ�";
    ls->menuOptions             = "�ɼ�";
    ls->menuHelp                = "����";


    //----------------------
    // Dialog related lines
    //----------------------

    ls->dlgOK                   = "Ȯ��";
    ls->dlgOpen                 = "����";
    ls->dlgCancel               = "���";
    ls->dlgSave                 = "����";
    ls->dlgSaveAs               = "�ٸ� �̸�����...";
    ls->dlgRun                  = "����";
    ls->dlgClose                = "�ݱ�";

    ls->dlgLoadRom              = "blueMSX - īƮ������ ������ rom �̹��� ����";
    ls->dlgLoadDsk              = "blueMSX - ����̺꿡 ������ dsk �̹��� ����";
    ls->dlgLoadCas              = "blueMSX - ī��Ʈ �÷��̾ ���� cas �̹��� ����";
    ls->dlgLoadRomDskCas        = "blueMSX - �о� ���� rom, dsk, cas �̹��� ����";
    ls->dlgLoadRomDesc          = "īƮ������ ������ �� �̹����� ������ �ּ���:";
    ls->dlgLoadDskDesc          = "����̺꿡 ������ ù��° �� ��ũ �Ǵ� ��ũ �̹����� ������ �ּ���(��ȯ�� ALT+F9. ���ϸ�� ���ڰ� �����ؾ� �˴ϴ�):";
    ls->dlgLoadCasDesc          = "ī��Ʈ �÷��̾ ���� ���� �̹����� ������ �ּ���:";
    ls->dlgLoadRomDskCasDesc    = "�о� ���� ��,��ũ,�Ǵ� ���� �̹����� ������ �ּ���:";
    ls->dlgLoadState            = "CPU ���� �ҷ�����";
    ls->dlgLoadVideoCapture     = "��ȭ�� ���� �ҷ�����";      
    ls->dlgSaveState            = "CPU ���� ����";
    ls->dlgSaveCassette          = "blueMSX - ���� �̹��� ����";
    ls->dlgSaveVideoClipAs      = "�ٸ� �̸����� ���� Ŭ�� ����...";      
    ls->dlgAmountCompleted      = "���� �Ϸ���:";          
    ls->dlgInsertRom1           = "���� 1�� ROM īƮ���� ����";
    ls->dlgInsertRom2           = "���� 2�� ROM īƮ���� ����";
    ls->dlgInsertDiskA          = "����̺� A�� ��ũ ����";
    ls->dlgInsertDiskB          = "����̺� B�� ��ũ ����";
    ls->dlgInsertHarddisk       = "�ϵ� ��ũ ����";                   
    ls->dlgInsertCas            = "ī��Ʈ ���� ����";
    ls->dlgRomType              = "�� ����:";
    ls->dlgDiskSize             = "��ũ ������:";             

    ls->dlgTapeTitle            = "blueMSX - ���� ��ġ";
    ls->dlgTapeFrameText        = "���� ��ġ";
    ls->dlgTapeCurrentPos       = "���� ��ġ";
    ls->dlgTapeTotalTime        = "�� �ð�";
    ls->dlgTapeSetPosText        = "���� ��ġ:";
    ls->dlgTapeCustom            = "����� ���� ���� ����";
    ls->dlgTabPosition           = "��ġ";
    ls->dlgTabType               = "����";
    ls->dlgTabFilename           = "���� �̸�";
    ls->dlgZipReset             = "������ �����";

    ls->dlgAboutTitle           = "blueMSX�� ���Ͽ�";

    ls->dlgLangLangText         = "blueMSX�� ����� ��� ����";
    ls->dlgLangLangTitle        = "blueMSX - ���";

    ls->dlgAboutAbout           = "blueMSX�� ���Ͽ�\r\n=====";
    ls->dlgAboutVersion         = "����:";
    ls->dlgAboutBuildNumber     = "����:";
    ls->dlgAboutBuildDate       = "��¥:";
    ls->dlgAboutCreat           = "������: Daniel Vik";
    ls->dlgAboutDevel           = "������ �е�\r\n========";
    ls->dlgAboutThanks          = "������ �ֽ� �е�\r\n===========";       // New in 2.7 (retranslate, see english)
    ls->dlgAboutLisence         = "���̼���\r\n"
                                  "======\r\n\r\n"
				  "�� ����Ʈ����� ���� �״�� �����Ǿ�� �ϸ�, ������̵� �Ϲ����̵� "
				  "� ������ ���� �ʽ��ϴ�.\r\n�� ����Ʈ������ ������� �Ͼ�� "
				  "��� ������ ���ؼ��� �����ڿ��Դ� å���� �����ϴ�.\r\n\r\n"
                                  "�� �ڼ��� ���� www.bluemsx.com�� �湮�� �ּ���.";

    ls->dlgSavePreview          = "�̸� ����";
    ls->dlgSaveDate             = "�ð� �����:";

    ls->dlgRenderVideoCapture   = "blueMSX - ������ ���Ϸ� ����...";  


    //----------------------
    // Properties related lines
    //----------------------

    ls->propTitle               = "blueMSX - �Ӽ�";
    ls->propEmulation           = "���ķ��̼�";
    ls->propVideo               = "����";
    ls->propSound               = "����";
    ls->propControls            = "��Ʈ��";
    ls->propPerformance         = "����";
    ls->propEffects             = "Effects";             // New in 2.9
    ls->propSettings             = "�ܺ� ����";
    ls->propFile                = "����";
    ls->propDisk                = "��ũ";              // New in 2.7
    ls->propPorts               = "��Ʈ";
    
    ls->propEmuGeneralGB        = "�Ϲ� ";
    ls->propEmuFamilyText       = "MSX �ӽ�:";
    ls->propEmuMemoryGB         = "�޸� ";
    ls->propEmuRamSizeText      = "�� ũ��:";
    ls->propEmuVramSizeText     = "������ ũ��:";
    ls->propEmuSpeedGB          = "���ķ��̼� �ӵ� ";
    ls->propEmuSpeedText        = "���ķ��̼� �ӵ�:";
    ls->propEmuFrontSwitchGB     = "�ĳ��Ҵ� ����ġ ";
    ls->propEmuFrontSwitch       = " ����Ʈ ����ġ";
    ls->propEmuNoSpriteLimits   = " Disable Sprites Limitation";  // New in 2.9
    ls->propEnableMsxKeyboardQuirk = " Emulate MSX keyboard quirk";  // New in 2.9
    ls->propEmuFdcTiming        = " �÷��� ����̺� Ÿ�̹� ��� ����";
    ls->propEmuReversePlay      = " Enable reverse playback"; // New in 2.8.3
    ls->propEmuPauseSwitch      = " �Ͻ� ���� ����ġ";
    ls->propEmuAudioSwitch       = " MSX-AUDIO īƮ���� ����ġ";
    ls->propVideoFreqText       = "���� ���ļ�:";
    ls->propVideoFreqAuto       = "�ڵ�";
    ls->propSndOversampleText   = "��������:";
    ls->propSndYkInGB           = "YK-01/YK-10/YK-20 �Է� ";                
    ls->propSndMidiInGB         = "MIDI �Է� ";
    ls->propSndMidiOutGB        = "MIDI ��� ";
    ls->propSndMidiChannel      = "MIDI ä��:";                      
    ls->propSndMidiAll          = "����";                                

    ls->propMonMonGB            = "����� ";
    ls->propMonTypeText         = "����� ����:";
    ls->propMonEmuText          = "����� ���ķ��̼�:";
    ls->propVideoTypeText       = "���� ����:";
    ls->propWindowSizeText      = "������ ũ��:";
    ls->propMonHorizStretch      = " ���� ��Ʈ��ġ";
    ls->propMonVertStretch       = " ���� ��Ʈ��ġ";
    ls->propMonDeInterlace      = " �����ͷ��̽�";
    ls->propBlendFrames         = " ������ ������ ����ȥ��";           
    ls->propMonColorGhosting    = " RF��ⷹ����:";
    ls->propMonBrightness       = "���:";
    ls->propMonContrast         = "���:";
    ls->propMonSaturation       = "ä��:";
    ls->propMonGamma            = "����:";
    ls->propMonScanlines        = " ��ĵ����:";
    ls->propMonEffectsGB        = "ȿ�� ";

    ls->propPerfVideoDrvGB      = "���� ����̹� ";
    ls->propPerfVideoDispDrvText= "ȭ�� ����̹�:";
    ls->propPerfFrameSkipText   = "������ �ǳʶ��:";
    ls->propPerfAudioDrvGB      = "����� ����̹� ";
    ls->propPerfAudioDrvText    = "���� ����̹�:";
    ls->propPerfAudioBufSzText  = "���� ���� ������:";
    ls->propPerfEmuGB           = "Ŭ�� ���ķ��̼� ";
    ls->propPerfSyncModeText    = "����ȭ ���:";
    ls->propFullscreenResText   = "��ü ȭ�� �ػ�:";

    ls->propSndChipEmuGB        = "���� Ĩ ���ķ��̼� ";
    ls->propSndMsxMusic         = " MSX-MUSIC";
    ls->propSndMsxAudio         = " MSX-AUDIO";
    ls->propSndMoonsound         = " Moonsound";
    ls->propSndMt32ToGm         = " GM�� MT-32 �Ǳ�迭";

    ls->propPortsLptGB          = "�з��� ��Ʈ "; 
    ls->propPortsComGB          = "�ø��� ��Ʈ "; 
    ls->propPortsLptText        = "��Ʈ:"; 
    ls->propPortsCom1Text       = "��Ʈ 1:";
    ls->propPortsNone           = "����";
    ls->propPortsSimplCovox     = "SiMPL / Covox DAC";
    ls->propPortsFile           = "���Ͽ� ����ϱ�";
    ls->propPortsComFile        = "���Ͽ� ������";
    ls->propPortsOpenLogFile    = "�α����� ����";
    ls->propPortsEmulateMsxPrn  = "�䳻����:";

    ls->propSetFileHistoryGB     = "��� ���� ��� ";
    ls->propSetFileHistorySize   = "���� ���� ũ��:";
    ls->propSetFileHistoryClear  = "��� �����";
    ls->propFileTypes            = " blueMSX�� ��������(.rom .dsk .cas .sta) ����";
    ls->propWindowsEnvGB         = "�������� ȯ�� "; 
    ls->propSetScreenSaver       = " blueMSX �����߿��� ȭ�� ��ȣ�� ��� ����";
    ls->propDisableWinKeys       = " blueMSX �����߿��� ��/������ ������ Ű ��� ����"; 
    ls->propPriorityBoost        = " blueMSX�� �۾� �켱�� �ֱ�";
    ls->propScreenshotPng       = " Portable Network Graphics (.png) ��ũ���� ���";  
    ls->propEjectMediaOnExit    = " Eject media when blueMSX exits";        // New in 2.8
    ls->propClearHistory         = "��� ���� ����� ������?";
    ls->propOpenRomGB           = "���� �׻� ���� ���� ��� ";
    ls->propDefaultRomType      = "�⺻ �� ����:";
    ls->propGuessRomType        = "�ڵ� �Ǵ�";

    ls->propSettDefSlotGB       = "���콺�� ��� ������ ";
    ls->propSettDefSlots        = "���� ���Կ� �� ����:";
    ls->propSettDefSlot         = " ����";
    ls->propSettDefDrives       = "���� ����̺꿡 ���� ����:";
    ls->propSettDefDrive       = " ����̺�";

    ls->propThemeGB             = "�׸� ";
    ls->propTheme               = "�⺻ �׸�:";

    ls->propCdromGB             = "�õ�� ";         // New in 2.7
    ls->propCdromMethod         = "�׼��� ���:";  // New in 2.7
    ls->propCdromMethodNone     = "����";            // New in 2.7
    ls->propCdromMethodIoctl    = "IOCTL";           // New in 2.7
    ls->propCdromMethodAspi     = "ASPI";            // New in 2.7
    ls->propCdromDrive          = "����̺�:";          // New in 2.7

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

    ls->enumVideoMonColor       = "�÷�";
    ls->enumVideoMonGrey        = "������ ���";
    ls->enumVideoMonGreen       = "���";
    ls->enumVideoMonAmber       = "ȣ�ڻ�"; 

    ls->enumVideoTypePAL        = "PAL";
    ls->enumVideoTypeNTSC       = "NTSC";

    ls->enumVideoEmuNone        = "����";
    ls->enumVideoEmuYc          = "Y/C ���̺� (����)";
    ls->enumVideoEmuMonitor     = "�����";
    ls->enumVideoEmuYcBlur      = "�����ִ� Y/C ���̺� (����)";
    ls->enumVideoEmuComp        = "������Ʈ (�帴)";
    ls->enumVideoEmuCompBlur    = "�����ִ� ������Ʈ (�帴)";
    ls->enumVideoEmuScale2x     = "Scale 2x";
    ls->enumVideoEmuHq2x        = "Hq2x";

    ls->enumVideoSize1x         = "���� - 320x200";
    ls->enumVideoSize2x         = "�ι� - 640x400";
    ls->enumVideoSizeFullscreen = "��ü ȭ��";

    ls->enumVideoDrvDirectDrawHW = "DirectDraw HW ����";
    ls->enumVideoDrvDirectDraw  = "DirectDraw";
    ls->enumVideoDrvGDI         = "GDI";
    ls->enumVideoDrvD3D         = "Direct3D";

    ls->enumVideoFrameskip0     = "����";
    ls->enumVideoFrameskip1     = "1 ������";
    ls->enumVideoFrameskip2     = "2 ������";
    ls->enumVideoFrameskip3     = "3 ������";
    ls->enumVideoFrameskip4     = "4 ������";
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

    ls->enumSoundDrvNone        = "�Ҹ�����";
    ls->enumSoundDrvWMM         = "WMM ����̹�";
    ls->enumSoundDrvDirectX     = "���̷�ƮX ����̹�";

    ls->enumEmuSync1ms          = "MSX�� �ӵ��� ����";
    ls->enumEmuSyncAuto         = "�ڵ� (����)";
    ls->enumEmuSyncNone         = "��������";
    ls->enumEmuSyncVblank       = "PC�� �������ļ��� ����";
    ls->enumEmuAsyncVblank      = "PC�� �������ļ��� �񵿱�";             

    ls->enumControlsJoyNone     = "����";
    ls->enumControlsJoyMouse    = "���콺";
    ls->enumControlsJoyTetris2Dongle = "��Ʈ���� 2 ����";
    ls->enumControlsJoyTMagicKeyDongle = "����Ű ����";             
    ls->enumControlsJoy2Button = "2��ư ���̽�ƽ";                   
    ls->enumControlsJoyGunstick  = "�� ��ƽ";                         
    ls->enumControlsJoyAsciiLaser="�ƽ�Ű �÷���-X �͹̳����� ������";      
    ls->enumControlsArkanoidPad  ="Arkanoid Pad";                   // New in 2.7.1
    ls->enumControlsJoyColeco = "ColecoVision ���̽�ƽ";                

    ls->enumDiskMsx35Dbl9Sect    = "MSX 3.5\" ���, 9 ����";     
    ls->enumDiskMsx35Dbl8Sect    = "MSX 3.5\" ���, 8 ����";     
    ls->enumDiskMsx35Sgl9Sect    = "MSX 3.5\" �ܸ�, 9 ����";     
    ls->enumDiskMsx35Sgl8Sect    = "MSX 3.5\" �ܸ�, 8 ����";     
    ls->enumDiskSvi525Dbl        = "SVI-328 5.25\" ���";           
    ls->enumDiskSvi525Sgl        = "SVI-328 5.25\" �ܸ�";  
    ls->enumDiskSf3Sgl           = "Sega SF-7000 3\" �ܸ�";             


    //----------------------
    // Configuration related lines
    //----------------------

    ls->confTitle                = "blueMSX - �ӽ� ���� ������";
    ls->confConfigText           = "�ӽ� ����";
    ls->confSlotLayout           = "���� ��ġ";
    ls->confMemory               = "�޸�";
    ls->confChipEmulation        = "Ĩ ���ķ��̼�";
    ls->confChipExtras          = "��Ÿ";

    ls->confOpenRom             = "�� �̹��� ����";
    ls->confSaveTitle            = "blueMSX - ���� ����";
    ls->confSaveText             = "�̹� ������ �ֽ��ϴ�. ���� ������ �� ���Ϸ� �ٲٽðڽ��ϱ�?";
    ls->confSaveAsTitle         = "�ٸ� �̸����� ���� ����...";
    ls->confSaveAsMachineName    = "�ӽ� �̸�:";
    ls->confDiscardTitle         = "blueMSX - ����";
    ls->confExitSaveTitle        = "blueMSX - �ӽ� ���� ������ ������";
    ls->confExitSaveText         = "������ ������ ����Ǳ� ���ؼ� ������ �ؾ� �մϴ�. ���� ������ �ƹ��� ������ �����ʰ� �׳� �����ڽ��ϱ�?";

    ls->confSlotLayoutGB         = "���� ��ġ ";
    ls->confSlotExtSlotGB        = "�ܺ� ���� ";
    ls->confBoardGB             = "�ý��� ";
    ls->confBoardText           = "�ý��� ����:";
    ls->confSlotPrimary          = "�⺻";
    ls->confSlotExpanded         = "Ȯ�� (4���� ���꽽��)";

    ls->confSlotCart            = "īƮ����";
    ls->confSlot                = "����";
    ls->confSubslot             = "���� ����";

    ls->confMemAdd               = "�߰�...";
    ls->confMemEdit              = "����...";
    ls->confMemRemove            = "����";
    ls->confMemSlot              = "����";
    ls->confMemAddresss          = "�ּ�";
    ls->confMemType              = "����";
    ls->confMemRomImage          = "�� �̹���";
    
    ls->confChipVideoGB          = "���� ";
    ls->confChipVideoChip        = "���� Ĩ:";
    ls->confChipVideoRam         = "���� ��:";
    ls->confChipSoundGB          = "���� ";
    ls->confChipPsgStereoText    = " PSG ���׷��� ��ȯ";

    ls->confCmosGB                = "CMOS ";
    ls->confCmosEnable            = " CMOS ���";
    ls->confCmosBattery           = " ������ ���";

    ls->confCpuFreqGB            = "CPU ���ļ� ";
    ls->confZ80FreqText          = "Z80 ���ļ�:";
    ls->confR800FreqText         = "R800 ���ļ�:";
    ls->confFdcGB                = "�÷��� ��ũ ��Ʈ�ѷ� ";
    ls->confCFdcNumDrivesText    = "����̺��� ����:";

    ls->confEditMemTitle         = "blueMSX - ���� ����";
    ls->confEditMemGB            = "���� �׸� ";
    ls->confEditMemType          = "����:";
    ls->confEditMemFile          = "����:";
    ls->confEditMemAddress       = "�ּ�";
    ls->confEditMemSize          = "ũ��";
    ls->confEditMemSlot          = "����";


    //----------------------
    // Shortcut lines
    //----------------------

	ls->shortcutKey             = "��Ű";
    ls->shortcutDescription     = "����Ű";

    ls->shortcutSaveConfig      = "blueMSX - ���� ����";
    ls->shortcutOverwriteConfig = "�̹� ������ �ֽ��ϴ�. ���� ������ �� ���Ϸ� �ٲٽðڽ��ϱ�?";
    ls->shortcutExitConfig      = "blueMSX - ����Ű ������ ������";
    ls->shortcutDiscardConfig   = "������ ������ ����Ǳ� ���ؼ� ������ �ϼž� �մϴٸ� ���� �������� �ƹ��� ���⵵ �����ʰ� �׳� �����ڽ��ϱ�?";
    ls->shortcutSaveConfigAs    = "blueMSX - �ٸ��̸����� ����Ű ���� ����...";
    ls->shortcutConfigName      = "���� �̸�:";
    ls->shortcutNewProfile      = "< ���ο� ������ >";
    ls->shortcutConfigTitle     = "blueMSX - ����Ű ���� ������";
    ls->shortcutAssign          = "����";
    ls->shortcutPressText       = "����Ű ���� ����:";
    ls->shortcutScheme          = "����Ű ��Ÿ��:";
    ls->shortcutCartInsert1     = "īƮ���� 1 ����";
    ls->shortcutCartRemove1     = "īƮ���� 1 ����";
    ls->shortcutCartInsert2     = "īƮ���� 2 ����";
    ls->shortcutCartRemove2     = "īƮ���� 2 ����";
    ls->shortcutSpecialMenu1    = "īƮ���� 1 - ����� ���� īƮ����";
    ls->shortcutSpecialMenu2    = "īƮ���� 2 - ����� ���� īƮ����";
    ls->shortcutCartAutoReset   = "īƮ���� ������ ���ķ����� �����";
    ls->shortcutDiskInsertA     = "���� A ����";
    ls->shortcutDiskDirInsertA  = "���� A�� ���丮 ����";
    ls->shortcutDiskRemoveA     = "���� A ������";
    ls->shortcutDiskChangeA     = "���� A ���� ��ȯ(zip���� ����)";
    ls->shortcutDiskAutoResetA  = "���� A ������ ���ķ����� �����";
    ls->shortcutDiskInsertB     = "���� B ����";
    ls->shortcutDiskDirInsertB  = "���� B�� ���丮 ����";
    ls->shortcutDiskRemoveB     = "���� B ������";
    ls->shortcutCasInsert       = "ī��Ʈ ����";
    ls->shortcutCasEject        = "ī��Ʈ ������";
    ls->shortcutCasAutorewind   = "ī��Ʈ �ڵ� �ǰ��� ��� ��ȯ";
    ls->shortcutCasReadOnly     = "ī��Ʈ �б����� ��ȯ";
    ls->shortcutCasSetPosition  = "���� ��ġ ����";
    ls->shortcutCasRewind       = "ī��Ʈ �ǰ���";
    ls->shortcutCasSave         = "ī��Ʈ �̹��� ����";
    ls->shortcutPrnFormFeed     = "������ ���ǵ�";
    ls->shortcutCpuStateLoad    = "CPU ���� �ҷ�����";
    ls->shortcutCpuStateSave    = "CPU ���� ����";
    ls->shortcutCpuStateQload   = "���� �ٷ� �ҷ�����";
    ls->shortcutCpuStateQsave   = "���� �ٷ� ����";
    ls->shortcutAudioCapture    = "�Ҹ� ���� ����/����";
    ls->shortcutScreenshotOrig  = "ȭ�� ����";
    ls->shortcutScreenshotSmall = "���� ũ��� ȭ�� ����(����)";
    ls->shortcutScreenshotLarge = "ū ũ��� ȭ�� ����(����)";
    ls->shortcutQuit            = "blueMSX ������";
    ls->shortcutRunPause        = "���ķ��̼� ����/�Ͻ� ����";
    ls->shortcutStop            = "���ķ��̼� ����";
    ls->shortcutResetHard       = "�ϵ� ����";
    ls->shortcutResetSoft       = "����Ʈ ����";
    ls->shortcutResetClean      = "��ü ����";
    ls->shortcutSizeSmall       = "���� ������ ũ��� ����";
    ls->shortcutSizeNormal      = "���� ������ ũ��� ����";
    ls->shortcutSizeFullscreen  = "��ü ȭ������ ����";
    ls->shortcutSizeMinimized   = "������ �ּ�ȭ";
    ls->shortcutToggleFullscren = "��ü ȭ�� ��ȯ";
    ls->shortcutVolumeIncrease  = "���� ����";
    ls->shortcutVolumeDecrease  = "���� ����";
    ls->shortcutVolumeMute      = "���Ұ�";
    ls->shortcutVolumeStereo    = "���/���׷��� ��ȯ";
    ls->shortcutSwitchMsxAudio  = "MSX-AUDIO ����ġ ��ȯ";
    ls->shortcutSwitchFront     = "�ĳ��Ҵ� ����Ʈ ����ġ ��ȯ";
    ls->shortcutSwitchPause     = "�Ͻ� ���� ����ġ";
    ls->shortcutToggleMouseLock = "���콺 ���� ��ȯ";
    ls->shortcutEmuSpeedMax     = "�ִ� ���ķ��̼� �ӵ�";
    ls->shortcutEmuPlayReverse  = "Rewind emulation";                     // New in 2.8.3
    ls->shortcutEmuSpeedToggle  = "���ķ��̼� �ӵ� �ִ�ȭ ��ȯ";
    ls->shortcutEmuSpeedNormal  = "���� ���ķ��̼� �ӵ�";
    ls->shortcutEmuSpeedInc     = "���ķ��̼� �ӵ� ����";
    ls->shortcutEmuSpeedDec     = "���ķ��̼� �ӵ� ����";
    ls->shortcutThemeSwitch     = "�׸� ��ȯ";
    ls->shortcutShowEmuProp     = "���ķ��̼� �Ӽ� ����";
    ls->shortcutShowVideoProp   = "���� �Ӽ� ����";
    ls->shortcutShowAudioProp   = "����� �Ӽ� ����";
    ls->shortcutShowCtrlProp    = "��Ʈ�� �Ӽ� ����";
    ls->shortcutShowEffectsProp = "Show Effects Properties";     // New in 2.9
    ls->shortcutShowSettProp    = "�ܺ� ���� �Ӽ� ����";
    ls->shortcutShowPorts       = "��Ʈ �Ӽ� ����";
    ls->shortcutShowLanguage    = "��� ����";
    ls->shortcutShowMachines    = "�ӽ� ������ ����";
    ls->shortcutShowShortcuts   = "����Ű ������ ����";
    ls->shortcutShowKeyboard    = "Ű���� ������ ����";
    ls->shortcutShowDebugger    = "����� ����"; 
    ls->shortcutShowTrainer     = "Ʈ���̳� ����"; 
    ls->shortcutShowMixer       = "�ͼ� ����";
    ls->shortcutShowHelp        = "���� ����";
    ls->shortcutShowAbout       = "blueMSX�� ���Ͽ� ����";
    ls->shortcutShowFiles       = "���� �Ӽ� ����";
    ls->shortcutToggleSpriteEnable = "��������Ʈ ���̱�/����� ��ȯ";
    ls->shortcutToggleFdcTiming = "�÷��� ����̺� Ÿ�̹� ���/���� ��ȯ";
    ls->shortcutToggleNoSpriteLimits = "Toggle Sprites Limitation";                 // New in 2.9
    ls->shortcutEnableMsxKeyboardQuirk = "Emulate MSX Keyboard Quirk";              // New in 2.9
    ls->shortcutToggleCpuTrace  = "CPU Ʈ���̽� ��ȯ";
    ls->shortcutVideoLoad       = "��ȭ�� ���� �ҷ�����";             
    ls->shortcutVideoPlay       = "���������� ��ȭ�� ���� ���";   
    ls->shortcutVideoRecord     = "���� ��ȭ";              
    ls->shortcutVideoStop       = "���� ��ȭ ����";                
    ls->shortcutVideoRender     = "������ ���Ϸ� ����";   


    //----------------------
    // Keyboard config lines
    //----------------------

    ls->keyconfigSelectedKey    = "���õ� Ű:";
    ls->keyconfigMappedTo       = "������ Ű:";
    ls->keyconfigMappingScheme  = "���� ��Ÿ��:";

    
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
