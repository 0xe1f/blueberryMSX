/*****************************************************************************
** $Source: /cygdrive/d/Private/_SVNROOT/bluemsx/blueMSX/Src/Language/LanguageChineseSimplified.h,v $
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
#ifndef LANGUAGE_CHINESE_SIMPLIFIED_H
#define LANGUAGE_CHINESE_SIMPLIFIED_H

#include "LanguageStrings.h"
 
void langInitChineseSimplified(LanguageStrings* ls) 
{
    //----------------------
    // Language lines
    //----------------------

    ls->langCatalan             = "Catalan";
    ls->langChineseSimplified   = "��������";
    ls->langChineseTraditional  = "��������";
    ls->langDutch               = "������";
    ls->langEnglish             = "Ӣ��";
    ls->langFinnish             = "������";
    ls->langFrench              = "����";
    ls->langGerman              = "����";
    ls->langItalian             = "�������";
    ls->langJapanese            = "����";
    ls->langKorean              = "������";
    ls->langPolish              = "������";
    ls->langPortuguese          = "��������";
    ls->langRussian             = "Russian";            // v2.8
    ls->langSpanish             = "��������";
    ls->langSwedish             = "�����";


    //----------------------
    // Generic lines
    //----------------------

    ls->textDevice              = "�豸:";
    ls->textFilename            = "�ļ���:";
    ls->textFile                = "�ļ�";
    ls->textNone                = "��";
    ls->textUnknown             = "δ֪";                            


    //----------------------
    // Warning and Error lines
    //----------------------

    ls->warningTitle             = "blueMSX - ����";
    ls->warningDiscardChanges   = "Ҫ�����޸���";
    ls->warningOverwriteFile    = "Ҫ����ԭ���ļ���:"; 
    ls->errorTitle              = "blueMSX - ����";
    ls->errorEnterFullscreen    = "�޷�����ȫ��ģʽ��           \n";
    ls->errorDirectXFailed      = "�޷����� DirectX ����           \n��Ϊʹ��GDI��\n�����Կ����á�";
    ls->errorNoRomInZip         = "�޷��� zip ѹ�������ҵ� .rom �ļ���";
    ls->errorNoDskInZip         = "�޷��� zip ѹ�������ҵ� .dsk �ļ���";
    ls->errorNoCasInZip         = "�޷��� zip ѹ�������ҵ� .cas �ļ���";
    ls->errorNoHelp             = "�޷��ҵ� blueMSX �����ļ���";
    ls->errorStartEmu           = "�޷����� MSX ģ������";
    ls->errorPortableReadonly   = "��Я�豸Ϊֻ��";        


    //----------------------
    // File related lines
    //----------------------

    ls->fileRom                 = "ROM ӳ��";
    ls->fileAll                 = "�����ļ�";
    ls->fileCpuState            = "CPU ״̬";
    ls->fileVideoCapture        = "��ȡ��Ƶ"; 
    ls->fileDisk                = "����ӳ��";
    ls->fileCas                 = "�Ŵ�ӳ��";
    ls->fileAvi                 = "������Ƶ";    


    //----------------------
    // Menu related lines
    //----------------------

    ls->menuNoRecentFiles       = "- ��������ļ� -";
    ls->menuInsert              = "����";
    ls->menuEject               = "����";
    
    ls->menuCartGameReader      = "Game Reader";                        
    ls->menuCartIde             = "IDE";                                
    ls->menuCartBeerIde         = "Beer";                               
    ls->menuCartGIde            = "GIDE";                               
    ls->menuCartSunriseIde      = "Sunrise";                            
    ls->menuCartScsi            = "SCSI";                // New in 2.7
    ls->menuCartMegaSCSI        = "MEGA-SCSI";           // New in 2.7
    ls->menuCartWaveSCSI        = "WAVE-SCSI";           // New in 2.7
    ls->menuCartGoudaSCSI       = "Gouda SCSI";          // New in 2.7
    ls->menuJoyrexPsg           = "Joyrex PSG ����"; // New in 2.9
    ls->menuCartSCCPlus         = "SCC-I ����";
    ls->menuCartSCC             = "SCC ����";
    ls->menuCartFMPac           = "FM-PAC ����";
    ls->menuCartPac             = "PAC ����";
    ls->menuCartHBI55           = "Sony HBI-55 ����";
    ls->menuCartInsertSpecial   = "��������";                     
    ls->menuCartMegaRam         = "MegaRAM";                            
    ls->menuCartExternalRam     = "��չ�ڴ�";
    ls->menuCartEseRam          = "Ese-RAM";             // New in 2.7
    ls->menuCartEseSCC          = "Ese-SCC";             // New in 2.7
    ls->menuCartMegaFlashRom    = "Mega Flash ROM";      // New in 2.7

    ls->menuDiskInsertNew       = "�����µ�����ӳ��";              
    ls->menuDiskInsertCdrom     = "Insert CD-Rom";       // New in 2.7
    ls->menuDiskDirInsert       = "����Ŀ¼";
    ls->menuDiskAutoStart       = "���������";
    ls->menuCartAutoReset       = "����/�Ƴ�������";

    ls->menuCasRewindAfterInsert = "����󵹴�";
    ls->menuCasUseReadOnly       = "ʹ�ôŴ�ʱֻ��";
    ls->lmenuCasSaveAs           = "���Ϊ...";
    ls->menuCasSetPosition      = "�Ŵ�λ������";
    ls->menuCasRewind           = "����";

    ls->menuVideoLoad           = "��ȡ...";             
    ls->menuVideoPlay           = "������һ����ȡ��Ƶ";   
    ls->menuVideoRecord         = "¼��";              
    ls->menuVideoRecording      = "����¼��";           
    ls->menuVideoRecAppend      = "¼�� �����ӣ�";     
    ls->menuVideoStop           = "ֹͣ";                
    ls->menuVideoRender         = "��Ⱦ��Ƶ�ļ�";   

    ls->menuZoomNormal          = "��׼�ߴ�";
    ls->menuZoomDouble          = "�����ߴ�";
    ls->menuZoomFullscreen      = "ȫ��Ļ";
    
    ls->menuPrnFormfeed         = "��ҳ";
    
    ls->menuPropsEmulation      = "ģ��";
    ls->menuPropsVideo          = "��Ƶ";
    ls->menuPropsSound          = "����";
    ls->menuPropsControls       = "������";
    ls->menuPropsEffects        = "Effects";               // New in 2.9
    ls->menuPropsSettings        = "�趨";
    ls->menuPropsFile           = "�ļ�";
    ls->menuPropsDisk           = "Disks";               // New in 2.7
    ls->menuPropsLanguage       = "����";
    ls->menuPropsPorts          = "�˿�";
    
    ls->menuVideoSource         = "��Ƶ���Դ";                   
    ls->menuVideoSourceDefault  = "δ������Ƶ���Դ";      
    ls->menuVideoChipAutodetect = "�Զ������ʾоƬ";
    ls->menuVideoInSource       = "��Ƶ����Դ";                    
    ls->menuVideoInBitmap       = "λͼ�ļ�";                        
    
    ls->menuEthInterface        = "Ethernet"; 

    ls->menuHelpHelp            = "��������";
    ls->menuHelpAbout           = "���� blueMSX";

    ls->menuFileCart            = "�������";
    ls->menuFileDisk            = "����������";
    ls->menuFileCas             = "�Ŵ���";
    ls->menuFilePrn             = "��ӡ��";
    ls->menuFileLoadState       = "��ȡ CPU ״̬";
    ls->menuFileSaveState       = "���� CPU ״̬";
    ls->menuFileQLoadState      = "���ٶ�ȡ";
    ls->menuFileQSaveState      = "���ٱ���";
    ls->menuFileCaptureAudio    = "��ȡ��Ƶ";
    ls->menuFileCaptureVideo    = "��ȡ��Ƶ"; 
    ls->menuFileScreenShot      = "��ͼ";
    ls->menuFileExit            = "�˳�";

    ls->menuFileHarddisk        = "Ӳ��";                          
    ls->menuFileHarddiskNoPesent= "��ǰ�޿�����";             
    ls->menuFileHarddiskRemoveAll= "Eject All Harddisk";    // New in 2.7

    ls->menuRunRun              = "����";
    ls->menuRunPause            = "��ͣ";
    ls->menuRunStop             = "ֹͣ";
    ls->menuRunSoftReset        = "�������";
    ls->menuRunHardReset        = "Ӳ������";
    ls->menuRunCleanReset       = "��������";

    ls->menuToolsMachine         = "�������ϱ༭";
    ls->menuToolsShortcuts      = "��ݼ��༭����";
    ls->menuToolsCtrlEditor     = "������ / ���̱༭��"; 
    ls->menuToolsMixer          = "������";
    ls->menuToolsDebugger       = "���Թ���";               
    ls->menuToolsTrainer        = "���׹���";                
    ls->menuToolsTraceLogger    = "׷�ټ�¼����";           

    ls->menuFile                = "�ļ�";
    ls->menuRun                 = "����";
    ls->menuWindow              = "����";
    ls->menuOptions             = "ѡ��";
    ls->menuTools                = "����";
    ls->menuHelp                = "����";


    //----------------------
    // Dialog related lines
    //----------------------

    ls->dlgOK                   = "ȷ��";
    ls->dlgOpen                 = "��";
    ls->dlgCancel               = "ȡ��";
    ls->dlgSave                 = "����";
    ls->dlgSaveAs               = "���Ϊ...";
    ls->dlgRun                  = "����";
    ls->dlgClose                = "�ر�";

    ls->dlgLoadRom              = "blueMSX - ��ѡ�񿨴�ӳ��";
    ls->dlgLoadDsk              = "blueMSX - ��ѡ������ӳ��";
    ls->dlgLoadCas              = "blueMSX - ��ѡ��Ŵ�ӳ��";
    ls->dlgLoadRomDskCas        = "blueMSX - ��ѡ�񿨴������̻�Ŵ�ӳ��";
    ls->dlgLoadRomDesc          = "��ѡ��Ҫ��ȡ�Ŀ���ӳ��:";
    ls->dlgLoadDskDesc          = "��ѡ��Ҫ��ȡ������ӳ��:";
    ls->dlgLoadCasDesc          = "��ѡ��Ҫ��ȡ�ĴŴ�ӳ��:";
    ls->dlgLoadRomDskCasDesc    = "��ѡ��Ҫ��ȡ�Ŀ��������̻�Ŵ�ӳ��:";
    ls->dlgLoadState            = "��ȡ CPU ״̬";
    ls->dlgLoadVideoCapture     = "��ȡ��ȡ��Ƶ";      
    ls->dlgSaveState            = "���� CPU ״̬";
    ls->dlgSaveCassette          = "blueMSX - ����Ŵ�ӳ��";
    ls->dlgSaveVideoClipAs      = "��������ƵΪ...";     
    ls->dlgAmountCompleted      = "�ܼ����:";          
    ls->dlgInsertRom1           = "���ڲ�� 1 ���� ROM ����";
    ls->dlgInsertRom2           = "���ڲ�� 2 ���� ROM ����";
    ls->dlgInsertDiskA          = "���������� A ��������ӳ��";
    ls->dlgInsertDiskB          = "���������� B ��������ӳ��";
    ls->dlgInsertHarddisk       = "�����Ӳ��";                   
    ls->dlgInsertCas            = "�����Ŵ�";
    ls->dlgRomType              = "Rom ����:";
    ls->dlgDiskSize             = "���̴�С:";             

    ls->dlgTapeTitle            = "blueMSX - �Ŵ�";
    ls->dlgTapeFrameText        = "�Ŵ�λ��";
    ls->dlgTapeCurrentPos       = "��ǰλ��";
    ls->dlgTapeTotalTime        = "��ʱ��";
    ls->dlgTapeCustom            = "��ʾ�Զ����ļ�";
    ls->dlgTapeSetPosText        = "�Ŵ�λ��:";
    ls->dlgTabPosition           = "λ��";
    ls->dlgTabType               = "����";
    ls->dlgTabFilename           = "�ļ���";
    ls->dlgZipReset             = "���������";

    ls->dlgAboutTitle           = "blueMSX - ����";

    ls->dlgLangLangText         = "��ѡ�� blueMSX ��ʹ������";
    ls->dlgLangLangTitle        = "blueMSX - ����";

    ls->dlgAboutAbout           = "����\r\n====";
    ls->dlgAboutVersion         = "�汾:";
    ls->dlgAboutBuildNumber     = "����:";
    ls->dlgAboutBuildDate       = "����:";
    ls->dlgAboutCreat           = "����:	Daniel Vik";
    ls->dlgAboutDevel           = "��λЭ���Ŀ�������\r\n========";
    ls->dlgAboutThanks          = "�ر���л\r\n============";       // New in 2.7 (retranslate, see english)
    ls->dlgAboutLisence         = "��Ȩ\r\n"
                                  "======\r\n\r\n"
                                  "������Ǹ���Ŀǰ״���������ģ�û���κ���ȷ��Ĭ�����Ȩ�� "
                                  "���κ�����£�ʹ�ñ��������ɵĺ�������û��Լ��е��� "
                                  "���߽����е��κ����Ρ�\r\n\r\n"
                                  "�����������½: www.bluemsx.com ";

    ls->dlgSavePreview          = "��ʾԤ��";
    ls->dlgSaveDate             = "����ʱ��:";

    ls->dlgRenderVideoCapture   = "blueMSX - ������Ⱦ��ȡ����Ƶ...";  


    //----------------------
    // Properties related lines
    //----------------------

    ls->propTitle               = "blueMSX - ����";
    ls->propEmulation           = "ģ��";
    ls->propVideo               = "��Ƶ";
    ls->propSound               = "����";
    ls->propControls            = "������";
    ls->propPerformance         = "����";
    ls->propEffects             = "Effects";             // New in 2.9
    ls->propSettings             = "����";
    ls->propFile                = "�ļ�";
    ls->propDisk                = "Disks";              // New in 2.7
    ls->propPorts               = "�˿�";
    
    ls->propEmuGeneralGB        = "���� ";
    ls->propEmuFamilyText       = "MSX ����:";
    ls->propEmuMemoryGB         = "�ڴ� ";
    ls->propEmuRamSizeText      = "���ڴ�:";
    ls->propEmuVramSizeText     = "�Դ�:";
    ls->propEmuSpeedGB          = "ģ���ٶ� ";
    ls->propEmuSpeedText        = "ģ���ٶ�:";
    ls->propEmuFrontSwitchGB     = "Panasonic ���� ";
    ls->propEmuFrontSwitch       = " ǰ�˿���";
    ls->propEmuNoSpriteLimits   = " Disable Sprites Limitation";  // New in 2.9
    ls->propEnableMsxKeyboardQuirk = " Emulate MSX keyboard quirk";  // New in 2.9
    ls->propEmuFdcTiming        = " ����������������ʱ";
    ls->propEmuReversePlay      = " Enable reverse playback"; // New in 2.8.3
    ls->propEmuPauseSwitch      = " ��ͣ����";
    ls->propEmuAudioSwitch       = " MSX-AUDIO ������";
    ls->propVideoFreqText       = "��ƵƵ��:";
    ls->propVideoFreqAuto       = "�Զ�";
    ls->propSndOversampleText   = "������:";
    ls->propSndYkInGB           = "YK-01/YK-10/YK-20 In ";                
    ls->propSndMidiInGB         = "MIDI ���� ";
    ls->propSndMidiOutGB        = "MIDI ��� ";
    ls->propSndMidiChannel      = "MIDI ����:";                      
    ls->propSndMidiAll          = "ȫ��";                                

    ls->propMonMonGB            = "��ʾ�� ";
    ls->propMonTypeText         = "��ʾ������:";
    ls->propMonEmuText          = "��ʾ��ģ��:";
    ls->propVideoTypeText       = "��Ƶ����:";
    ls->propWindowSizeText      = "���ڴ�С:";
    ls->propMonHorizStretch      = " ˮƽ����";
    ls->propMonVertStretch       = " ��ֱ����";
    ls->propMonDeInterlace      = " �߻��ʳ�������";
    ls->propBlendFrames         = " �������֡";           
    ls->propMonBrightness       = "����:";
    ls->propMonContrast         = "�Աȶ�:";
    ls->propMonSaturation       = "���Ͷ�:";
    ls->propMonGamma            = "٤��ֵ:";
    ls->propMonScanlines        = " ɨ����:";
    ls->propMonColorGhosting    = " RF-������:";
    ls->propMonEffectsGB        = "��Ч ";

    ls->propPerfVideoDrvGB      = "��Ƶ���� ";
    ls->propPerfVideoDispDrvText= "��ʾ����:";
    ls->propPerfFrameSkipText   = "��֡:";
    ls->propPerfAudioDrvGB      = "��Ƶ���� ";
    ls->propPerfAudioDrvText    = "��������:";
    ls->propPerfAudioBufSzText  = "��������:";
    ls->propPerfEmuGB           = "ģ�� ";
    ls->propPerfSyncModeText    = "ͬ��ģʽ:";
    ls->propFullscreenResText   = "ȫ��Ļ�ֱ���:";

    ls->propSndChipEmuGB        = "����оƬģ�� ";
    ls->propSndMsxMusic         = " MSX-MUSIC";
    ls->propSndMsxAudio         = " MSX-AUDIO";
    ls->propSndMoonsound         = " Moonsound";
    ls->propSndMt32ToGm         = " ӳ�� MT-32 ����Ϊһ�� MIDI �豸";

    ls->propPortsLptGB          = "���ж˿� ";
    ls->propPortsComGB          = "���ж˿� ";
    ls->propPortsLptText        = "�˿�:";
    ls->propPortsCom1Text       = "�˿� 1:";
    ls->propPortsNone           = "��";
    ls->propPortsSimplCovox     = "SiMPL/Covox ��ģת����";
    ls->propPortsFile           = "��ӡ���ļ�";
    ls->propPortsComFile        = "���͵��ļ�";
    ls->propPortsOpenLogFile    = "�򿪼�¼�ļ�";
    ls->propPortsEmulateMsxPrn  = "ģ��:";

    ls->propSetFileHistoryGB     = "��ʷ�ļ� ";
    ls->propSetFileHistorySize   = "��ʷ�ļ�������:";
    ls->propSetFileHistoryClear  = "�����ʷ�ļ�";
    ls->propFileTypes            = " �� blueMSX �����ļ� ( .rom, .dsk, .cas, .sta)";
    ls->propWindowsEnvGB         = "Windows �����趨 "; 
    ls->propSetScreenSaver       = " blueMSX ����ʱ�ر���Ļ����";
    ls->propDisableWinKeys       = " MSX ʹ������Χ�� Windows ������Ч"; 
    ls->propPriorityBoost       = " ���� blueMSX �����ȼ�";
    ls->propScreenshotPng       = " ʹ�ñ�Я����ͼ���ʽ (.png) ����Ļ��ͼ";  
    ls->propEjectMediaOnExit    = " Eject media when blueMSX exits";        // New in 2.8
    ls->propClearHistory         = "ȷ��Ҫ�����ʷ�ļ���";
    ls->propOpenRomGB           = "�� Rom �Ի��� ";
    ls->propDefaultRomType      = "Ĭ�� Rom ����:";
    ls->propGuessRomType        = "�²� Rom ����";

    ls->propSettDefSlotGB       = "�Ϸ� ";
    ls->propSettDefSlots        = "���� Rom ��:";
    ls->propSettDefSlot         = " ���";
    ls->propSettDefDrives       = "�������̵�:";
    ls->propSettDefDrive        = " ������";

    ls->propThemeGB             = "�������� ";
    ls->propTheme               = "��������:";

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

    ls->enumVideoMonColor       = "��ɫ";
    ls->enumVideoMonGrey        = "�ڰ�";
    ls->enumVideoMonGreen       = "��ɫ";
    ls->enumVideoMonAmber       = "��ɫ";

    ls->enumVideoTypePAL        = "PAL";
    ls->enumVideoTypeNTSC       = "NTSC";

    ls->enumVideoEmuNone        = "��";
    ls->enumVideoEmuYc          = "Y/C �����· (����)";
    ls->enumVideoEmuMonitor     = "��ʾ��";
    ls->enumVideoEmuYcBlur      = "���� Y/C �����· (����)";
    ls->enumVideoEmuComp        = "���� (ģ��)";
    ls->enumVideoEmuCompBlur    = "���븴�� (ģ��)";
    ls->enumVideoEmuScale2x     = "2 ���ữ";
    ls->enumVideoEmuHq2x        = "Hq2x";

    ls->enumVideoSize1x         = "��׼ - 320x200";
    ls->enumVideoSize2x         = "���� - 640x400";
    ls->enumVideoSizeFullscreen = "ȫ��Ļ";

    ls->enumVideoDrvDirectDrawHW = "DirectDraw HW ����"; 
    ls->enumVideoDrvDirectDraw  = "DirectDraw";
    ls->enumVideoDrvGDI         = "GDI";
    ls->enumVideoDrvD3D         = "Direct3D";

    ls->enumVideoFrameskip0     = "��";
    ls->enumVideoFrameskip1     = "1��֡";
    ls->enumVideoFrameskip2     = "2��֡";
    ls->enumVideoFrameskip3     = "3��֡";
    ls->enumVideoFrameskip4     = "4��֡";
    ls->enumVideoFrameskip5     = "5��֡";

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

    ls->enumSoundDrvNone        = "����";
    ls->enumSoundDrvWMM         = "WMM ����";
    ls->enumSoundDrvDirectX     = "DirectX ����";

    ls->enumEmuSync1ms          = "ͬ���� MSX ��ˢ��";
    ls->enumEmuSyncAuto         = "�Զ� (����)";
    ls->enumEmuSyncNone         = "��";
    ls->enumEmuSyncVblank       = "ͬ���� PC �Ĵ�ֱ�հ�";
    ls->enumEmuAsyncVblank      = "�첽�� PC �Ĵ�ֱ�հ�";             

    ls->enumControlsJoyNone     = "��";
    ls->enumControlsJoyMouse    = "���";
    ls->enumControlsJoyTetris2Dongle = "����˹���� 2 ����ģ��";
    ls->enumControlsJoyTMagicKeyDongle = "MagicKey ����ģ��";             
    ls->enumControlsJoy2Button = "2�����ݸ�";                   
    ls->enumControlsJoyGunstick  = "��ǹ���ݸ�";                         
    ls->enumControlsJoyAsciiLaser="ASCII Plus-X �ս�������";      
    ls->enumControlsArkanoidPad  ="Arkanoid Pad";                   // New in 2.7.1
    ls->enumControlsJoyColeco = "ColecoVision ���ݸ�";                

    ls->enumDiskMsx35Dbl9Sect    = "MSX 3.5\" �� ˫��, 9 ������";     
    ls->enumDiskMsx35Dbl8Sect    = "MSX 3.5\" �� ˫��, 8 ������";     
    ls->enumDiskMsx35Sgl9Sect    = "MSX 3.5\" �� ����, 9 ������";     
    ls->enumDiskMsx35Sgl8Sect    = "MSX 3.5\" �� ����, 8 ������";     
    ls->enumDiskSvi525Dbl        = "SVI-328 5.25\" �� ˫��";           
    ls->enumDiskSvi525Sgl        = "SVI-328 5.25\" �� ����";           
    ls->enumDiskSf3Sgl           = "Sega SF-7000 3\" �� ����";     


    //----------------------
    // Configuration related lines
    //----------------------

    ls->confTitle                = "blueMSX - �������ϱ༭����";
    ls->confConfigText           = "����";
    ls->confSlotLayout           = "�������";
    ls->confMemory               = "�ڴ�";
    ls->confChipEmulation        = "оƬģ��";
    ls->confChipExtras          = "����";

    ls->confOpenRom             = "�� ROM ӳ��";
    ls->confSaveTitle            = "blueMSX - ��������";
    ls->confSaveText             = "Ҫ����ԭ�еĻ���������:";
    ls->confSaveAsTitle         = "�������Ϊ...";
    ls->confSaveAsMachineName    = "��������:";
    ls->confDiscardTitle         = "blueMSX - ����";
    ls->confExitSaveTitle        = "blueMSX - �˳��༭����";
    ls->confExitSaveText         = "Ҫ�����Ե�ǰ�ļ����޸���";

    ls->confSlotLayoutGB         = "������� ";
    ls->confSlotExtSlotGB        = "��չ��� ";
    ls->confBoardGB             = "���� ";
    ls->confBoardText           = "��������:";
    ls->confSlotPrimary          = "��Ҫ";
    ls->confSlotExpanded         = "��չ ���ĸ��Ӳ�ۣ�";

    ls->confSlotCart             = "����";
    ls->confSlot                = "���";
    ls->confSubslot             = "�Ӳ��";

    ls->confMemAdd               = "���...";
    ls->confMemEdit              = "�༭...";
    ls->confMemRemove            = "ɾ��";
    ls->confMemSlot              = "���";
    ls->confMemAddresss          = "��ַ";
    ls->confMemType              = "����";
    ls->confMemRomImage          = "Rom ӳ��";
    
    ls->confChipVideoGB          = "��Ƶ ";
    ls->confChipVideoChip        = "��ʾоƬ:";
    ls->confChipVideoRam         = "��ʾ�ڴ�:";
    ls->confChipSoundGB          = "���� ";
    ls->confChipPsgStereoText    = " PSG ������";

    ls->confCmosGB                = "CMOS ";
    ls->confCmosEnable            = " ���� CMOS";
    ls->confCmosBattery           = " �������õ��";

    ls->confCpuFreqGB            = "CPU Ƶ�� ";
    ls->confZ80FreqText          = "Z80 Ƶ��:";
    ls->confR800FreqText         = "R800 Ƶ��:";
    ls->confFdcGB                = "���̿����� ";
    ls->confCFdcNumDrivesText    = "����������:";

    ls->confEditMemTitle         = "blueMSX - �༭ Mapper";
    ls->confEditMemGB            = "Mapper ��ϸ ";
    ls->confEditMemType          = "����:";
    ls->confEditMemFile          = "�ļ�:";
    ls->confEditMemAddress       = "��ַ";
    ls->confEditMemSize          = "��С";
    ls->confEditMemSlot          = "���";


    //----------------------
    // Shortcut lines
    //----------------------

    ls->shortcutKey             = "�ȼ�";
    ls->shortcutDescription     = "��ݼ�";

    ls->shortcutSaveConfig      = "blueMSX - ��������";
    ls->shortcutOverwriteConfig = "Ҫ����ԭ�еĿ�ݼ�������:";
    ls->shortcutExitConfig      = "blueMSX - �˳���ݼ��༭����";
    ls->shortcutDiscardConfig   = "Ҫ�����Ե�ǰ�ļ����޸���";
    ls->shortcutSaveConfigAs    = "blueMSX - ��ݼ����Ϊ...";
    ls->shortcutConfigName      = "��������:";
    ls->shortcutNewProfile      = "< �½����� >";
    ls->shortcutConfigTitle     = "blueMSX - ��ݼ������༭����";
    ls->shortcutAssign          = "����";
    ls->shortcutPressText       = "�������ݼ�:";
    ls->shortcutScheme          = "ӳ�䷽��:";
    ls->shortcutCartInsert1     = "���뿨�� 1";
    ls->shortcutCartRemove1     = "�Ƴ����� 1";
    ls->shortcutCartInsert2     = "���뿨�� 2";
    ls->shortcutCartRemove2     = "�Ƴ����� 2";
    ls->shortcutSpecialMenu1    = "Ϊ���� 1 ��ʾ�ر� Rom �˵�";
    ls->shortcutSpecialMenu2    = "Ϊ���� 2 ��ʾ�ر� Rom �˵�";
    ls->shortcutCartAutoReset   = "�������������ģ����";
    ls->shortcutDiskInsertA     = "�������� A";
    ls->shortcutDiskDirInsertA  = "����Ŀ¼��Ϊ����A";
    ls->shortcutDiskRemoveA     = "�������� A";
    ls->shortcutDiskChangeA     = "�����л����� A";
    ls->shortcutDiskAutoResetA  = "���� A ���������ģ����";
    ls->shortcutDiskInsertB     = "�������� B";
    ls->shortcutDiskDirInsertB  = "����Ŀ¼��Ϊ����B";
    ls->shortcutDiskRemoveB     = "�������� B";
    ls->shortcutCasInsert       = "����Ŵ�";
    ls->shortcutCasEject        = "�����Ŵ�";
    ls->shortcutCasAutorewind   = "�����Ŵ��Զ�����";
    ls->shortcutCasReadOnly     = "�����Ŵ�ֻ��";
    ls->shortcutCasSetPosition  = "�趨�Ŵ�λ��";
    ls->shortcutCasRewind       = "����";
    ls->shortcutCasSave         = "����Ŵ�ӳ��";
    ls->shortcutPrnFormFeed     = "��ӡ����ҳ";
    ls->shortcutCpuStateLoad    = "��ȡ CPU ״̬";
    ls->shortcutCpuStateSave    = "���� CPU ״̬";
    ls->shortcutCpuStateQload   = "���ٶ�ȡ CPU ״̬";
    ls->shortcutCpuStateQsave   = "���ٱ��� CPU ״̬";
    ls->shortcutAudioCapture    = "��ʼ/ֹͣ¼��";
    ls->shortcutScreenshotOrig  = "��Ļ��ͼ ��ԭʼ��";
    ls->shortcutScreenshotSmall = "��Ļ��ͼ ����׼��δ���ˣ�";
    ls->shortcutScreenshotLarge = "��Ļ��ͼ ��������δ���ˣ�";
    ls->shortcutQuit            = "�˳� blueMSX";
    ls->shortcutRunPause        = "����/��ͣģ��";
    ls->shortcutStop            = "ֹͣģ��";
    ls->shortcutResetHard       = "Ӳ������";
    ls->shortcutResetSoft       = "�������";
    ls->shortcutResetClean      = "��������";
    ls->shortcutSizeSmall       = "��Ϊ��׼����";
    ls->shortcutSizeNormal      = "��Ϊ��������";
    ls->shortcutSizeFullscreen  = "��Ϊȫ��Ļ";
    ls->shortcutSizeMinimized   = "��С������";
    ls->shortcutToggleFullscren = "�л�ȫ��Ļ";
    ls->shortcutVolumeIncrease  = "��������";
    ls->shortcutVolumeDecrease  = "��С����";
    ls->shortcutVolumeMute      = "����";
    ls->shortcutVolumeStereo    = "�л�������/������";
    ls->shortcutSwitchMsxAudio  = "�л� MSX-AUDIO ������";
    ls->shortcutSwitchFront     = "�л� Panasonic ǰ�˿���";
    ls->shortcutSwitchPause     = "�л���ͣ����";
    ls->shortcutToggleMouseLock = "�л��������";
    ls->shortcutEmuSpeedMax     = "�����ģ��";
    ls->shortcutEmuPlayReverse  = "Rewind emulation";                     // New in 2.8.3
    ls->shortcutEmuSpeedToggle  = "���������ģ��";
    ls->shortcutEmuSpeedNormal  = "����ģ���ٶ�";
    ls->shortcutEmuSpeedInc     = "�ӿ�ģ���ٶ�";
    ls->shortcutEmuSpeedDec     = "����ģ���ٶ�";
    ls->shortcutThemeSwitch     = "�л���������";
    ls->shortcutShowEmuProp     = "��ʾģ������";
    ls->shortcutShowVideoProp   = "��ʾ��Ƶ����";
    ls->shortcutShowAudioProp   = "��ʾ��Ƶ����";
    ls->shortcutShowCtrlProp    = "��ʾ��������";
    ls->shortcutShowEffectsProp = "Show Effects Properties";     // New in 2.9
    ls->shortcutShowSettProp    = "��ʾ��������";
    ls->shortcutShowPorts       = "��ʾ�˿��趨";
    ls->shortcutShowLanguage    = "��ʾ���ԶԻ���";
    ls->shortcutShowMachines    = "��ʾ�������ϱ༭����";
    ls->shortcutShowShortcuts   = "��ʾ��ݼ��༭����";
    ls->shortcutShowKeyboard    = "��ʾ���̱༭����";
    ls->shortcutShowDebugger    = "��ʾ���Թ���";
    ls->shortcutShowTrainer     = "��ʾ�޸Ĺ���";
    ls->shortcutShowMixer       = "��ʾ������";
    ls->shortcutShowHelp        = "��ʾ�����Ի���";
    ls->shortcutShowAbout       = "��ʾ���ڶԻ���";
    ls->shortcutShowFiles       = "��ʾ�ļ��趨";
    ls->shortcutToggleSpriteEnable = "��ʾ/���ػ��";
    ls->shortcutToggleFdcTiming = "����/����������������ʱ";
    ls->shortcutToggleNoSpriteLimits = "Toggle Sprites Limitation";                 // New in 2.9
    ls->shortcutEnableMsxKeyboardQuirk = "Emulate MSX Keyboard Quirk";              // New in 2.9
    ls->shortcutToggleCpuTrace  = "����/���� CPU ׷��";
    ls->shortcutVideoLoad       = "��ȡ��ȡ��Ƶ";        
    ls->shortcutVideoPlay       = "������һ����ȡ��Ƶ";   
    ls->shortcutVideoRecord     = "¼�ƽ�ȡ��Ƶ";      
    ls->shortcutVideoStop       = "ֹͣ��ȡ��Ƶ";        
    ls->shortcutVideoRender     = "��Ⱦ��Ƶ�ļ�";         


    //----------------------
    // Keyboard config lines
    //----------------------
    
    ls->keyconfigSelectedKey    = "ѡ�м�:";
    ls->keyconfigMappedTo       = "ӳ�䵽:";
    ls->keyconfigMappingScheme  = "ӳ�䷽��:";

    
    //----------------------
    // Rom type lines
    //----------------------</p>

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

    ls->dbgMemVisible           = "�ɼ��ڴ�";
    ls->dbgMemRamNormal         = "��ͨ";
    ls->dbgMemRamMapped         = "ӳ��";
    ls->dbgMemYmf278            = "YMF278 ȡ���ڴ�";
    ls->dbgMemAy8950            = "AY8950 ȡ���ڴ�";
    ls->dbgMemScc               = "�ڴ�";

    ls->dbgCallstack            = "����ջ";

    ls->dbgRegs                 = "�Ĵ���";
    ls->dbgRegsCpu              = "CPU �Ĵ���";
    ls->dbgRegsYmf262           = "YMF262 �Ĵ���";
    ls->dbgRegsYmf278           = "YMF278 �Ĵ���";
    ls->dbgRegsAy8950           = "AY8950 �Ĵ���";
    ls->dbgRegsYm2413           = "YM2413 �Ĵ���";

    ls->dbgDevRamMapper         = "�ڴ�ӳ��";
    ls->dbgDevRam               = "�ڴ�";
    ls->dbgDevF4Device          = "F4 �豸";
    ls->dbgDevKorean80          = "Korean 80";
    ls->dbgDevKorean90          = "Korean 90";
    ls->dbgDevKorean128         = "Korean 128";
    ls->dbgDevFdcMicrosol       = "Microsol FDC";
    ls->dbgDevPrinter           = "��ӡ��";
    ls->dbgDevSviFdc            = "SVI FDC";
    ls->dbgDevSviPrn            = "SVI ��ӡ��";
    ls->dbgDevSvi80Col          = "SVI 80 ��";
    ls->dbgDevRtc               = "RTC";
    ls->dbgDevTrPause           = "TR ��ͣ";


    //----------------------
    // Debug type lines
    // Note: Can only be translated to european languages
    //----------------------

    ls->aboutScrollThanksTo     = "Special thanks to: ";
    ls->aboutScrollAndYou       = "and YOU !!!!";
};

#endif
