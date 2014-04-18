/*****************************************************************************
** $Source: /cygdrive/d/Private/_SVNROOT/bluemsx/blueMSX/Src/Language/LanguageFrench.h,v $
**
** $Revision: 1.60 $
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
#ifndef LANGUAGE_FRENCH_H
#define LANGUAGE_FRENCH_H

#include "LanguageStrings.h"

void langInitFrench(LanguageStrings* ls)
{
    //----------------------
    // Language lines
    //----------------------

    ls->langCatalan             = "Catalan";
    ls->langChineseSimplified   = "Chinois Simplifi�";
    ls->langChineseTraditional  = "Chinois Traditionnel";
    ls->langDutch               = "Hollandais";
    ls->langEnglish             = "Anglais";
    ls->langFinnish             = "Finlandais";
    ls->langFrench              = "Fran�ais";
    ls->langGerman              = "Allemand";
    ls->langItalian             = "Italien";
    ls->langJapanese            = "Japonais";
    ls->langKorean              = "Cor�en";
    ls->langPolish              = "Polonais";
    ls->langPortuguese          = "Portugais";
    ls->langRussian             = "Russian";            // v2.8
    ls->langSpanish             = "Espagnol";
    ls->langSwedish             = "Su�dois";


    //----------------------
    // Generic lines
    //----------------------

    ls->textDevice              = "Type:";
    ls->textFilename            = "Fichier:";
    ls->textFile                = "Fichier";
    ls->textNone                = "Aucun(e)";
    ls->textUnknown             = "Inconnu";                            


    //----------------------
    // Warning and Error lines
    //----------------------

    ls->warningTitle             = "blueMSX - Avertissement";
    ls->warningDiscardChanges   = "Voulez-vous ignorer les changements apport�s � cette configuration ?"; 
    ls->warningOverwriteFile    = "Voulez-vous remplacer ce fichier ?:"; 
    ls->errorTitle              = "blueMSX - Erreur";
    ls->errorEnterFullscreen    = "Impossible de passer en mode plein �cran.              \n";
    ls->errorDirectXFailed      = "Impossible de cr�er les objets DirectX.              \nUVeuillez s�lectionner GDI � la place.\ndans le menu \"Video\".";
    ls->errorNoRomInZip         = "Il n'y a pas de fichier .rom dans votre archive zip.";
    ls->errorNoDskInZip         = "Il n'y a pas de fichier .dsk dans votre archive zip.";
    ls->errorNoCasInZip         = "Il n'y a pas de fichier .cas dans votre archive zip";
    ls->errorNoHelp             = "Impossible de trouver le fichier d'aide.";
    ls->errorStartEmu           = "Erreur lors du lancement de l'�mulateur.";
    ls->errorPortableReadonly   = "Ce dispositif portable est uniquement en mode �criture";        


    //----------------------
    // File related lines
    //----------------------

    ls->fileRom                 = "Image-ROM";
    ls->fileAll                 = "Tous les fichiers";
    ls->fileCpuState            = "Image du CPU";
    ls->fileVideoCapture        = "Capture vid�o"; 
    ls->fileDisk                = "Image-disque";
    ls->fileCas                 = "Image-cassette";
    ls->fileAvi                 = "Clip vid�o";    


    //----------------------
    // Menu related lines
    //----------------------

    ls->menuNoRecentFiles       = "- pas de fichier r�cent -";
    ls->menuInsert              = "Ins�rer";
    ls->menuEject               = "Ejecter";

    ls->menuCartGameReader      = "Game Reader";                        
    ls->menuCartIde             = "IDE";                                
    ls->menuCartBeerIde         = "Beer";                               
    ls->menuCartGIde            = "GIDE";                               
    ls->menuCartSunriseIde      = "Sunrise";                              
    ls->menuCartScsi            = "SCSI";                // New in 2.7
    ls->menuCartMegaSCSI        = "MEGA-SCSI";           // New in 2.7
    ls->menuCartWaveSCSI        = "WAVE-SCSI";           // New in 2.7
    ls->menuCartGoudaSCSI       = "Gouda SCSI";          // New in 2.7
    ls->menuJoyrexPsg           = "Cartouche Joyrex PSG"; // New in 2.9
    ls->menuCartSCC             = "Cartouche SCC";
    ls->menuCartSCCPlus         = "Cartouche SCC-I";
    ls->menuCartFMPac           = "Cartouche FM-PAC";
    ls->menuCartPac             = "Cartouche PAC";
    ls->menuCartHBI55           = "Cartouche Sony HBI-55"; 
    ls->menuCartInsertSpecial   = "Ins�rer Sp�cial";                     
    ls->menuCartMegaRam         = "MegaRAM";                            
    ls->menuCartExternalRam     = "RAM externe";
    ls->menuCartEseRam          = "Ese-RAM";             // New in 2.7
    ls->menuCartEseSCC          = "Ese-SCC";             // New in 2.7
    ls->menuCartMegaFlashRom    = "Mega Flash ROM";      // New in 2.7

    ls->menuDiskInsertNew       = "Ins�rer un nouveau disque";              
    ls->menuDiskInsertCdrom     = "Ins�rer CD-Rom";       // New in 2.7
    ls->menuDiskDirInsert       = "Ins�rer r�pertoire"; 
    ls->menuDiskAutoStart       = "Reset apr�s insertion";
    ls->menuCartAutoReset       = "Reset apr�s ins�rer/�jecter";

    ls->menuCasRewindAfterInsert= "Rembobiner apr�s insertion";
    ls->menuCasUseReadOnly      = "Utiliser l'image de la cassette en mode lecture seule";
    ls->lmenuCasSaveAs          = "Sauver l'image de la cassette sous...";
    ls->menuCasSetPosition      = "D�finir la position";
    ls->menuCasRewind           = "Rembobiner";

    ls->menuVideoLoad           = "Charger ...";             
    ls->menuVideoPlay           = "Voir la plus r�cente capture";   
    ls->menuVideoRecord         = "Enregistrer";              
    ls->menuVideoRecording      = "Enregistrement";           
    ls->menuVideoRecAppend      = "Enregistrer (accoler)";     
    ls->menuVideoStop           = "Arr�ter";                
    ls->menuVideoRender         = "Cr�er un clip vid�o";   

    ls->menuPrnFormfeed         = "Page suivante"; 

    ls->menuZoomNormal          = "Petite fen�tre";
    ls->menuZoomDouble          = "Fen�tre normale";
    ls->menuZoomFullscreen      = "Plein �cran";

    ls->menuPropsEmulation      = "Emulation";
    ls->menuPropsVideo          = "Vid�o";
    ls->menuPropsSound          = "Son";
    ls->menuPropsControls       = "Contr�les";
    ls->menuPropsEffects        = "Effects";               // New in 2.9
    ls->menuPropsSettings       = "R�glages";
    ls->menuPropsFile           = "Fichiers";
    ls->menuPropsDisk           = "Disques";               // New in 2.7
    ls->menuPropsLanguage       = "Langue";
    ls->menuPropsPorts          = "Ports";
    
    ls->menuVideoChipAutodetect = "D�tection automatique"; 
    ls->menuVideoSource         = "Sortie vid�o";                   
    ls->menuVideoSourceDefault  = "Sortie vid�o non connect�e";      
    ls->menuVideoInSource       = "Entr�e vid�o";                    
    ls->menuVideoInBitmap       = "Fichier Bitmap";                        
    
    ls->menuEthInterface        = "Interface D'Ethernet"; 

    ls->menuHelpHelp            = "Rubriques d'aide";
    ls->menuHelpAbout           = "A propos de blueMSX";

    ls->menuFileCart            = "Port cartouche";
    ls->menuFileDisk            = "Lecteur de disquettes";
    ls->menuFileCas             = "Lecteur de cassettes";
    ls->menuFilePrn             = "Imprimante"; 
    ls->menuFileLoadState       = "Charger une image du CPU";
    ls->menuFileSaveState       = "Sauver une image du CPU";
    ls->menuFileQLoadState      = "Acc�s instantan� � l'image du CPU";
    ls->menuFileQSaveState      = "Sauvegarde instantan�e de l'image du CPU";
    ls->menuFileCaptureAudio    = "Capture du son";
    ls->menuFileCaptureVideo    = "Capture vid�o"; 
    ls->menuFileScreenShot      = "Capture d'�cran";
    ls->menuFileExit            = "Quitter";

    ls->menuFileHarddisk        = "Disque dur";                          
    ls->menuFileHarddiskNoPesent= "Aucun contr�leur";             
    ls->menuFileHarddiskRemoveAll= "Ejecter tous les disques durs";    // New in 2.7

    ls->menuRunRun              = "Lancer";
    ls->menuRunPause            = "Pause";
    ls->menuRunStop             = "Arr�t";
    ls->menuRunSoftReset        = "Reset logiciel";
    ls->menuRunHardReset        = "Reset mat�riel";
    ls->menuRunCleanReset       = "Reset complet";

    ls->menuToolsMachine         = "Editeur de machine";
    ls->menuToolsShortcuts      = "Editeur de raccourcis";
    ls->menuToolsCtrlEditor     = "Editeur de contr�leurs/clavier";  
    ls->menuToolsMixer          = "M�langeur audio";
    ls->menuToolsLoadMemory     = "Charger en m�moire";
    ls->menuToolsDebugger       = "D�bogueur";               
    ls->menuToolsTrainer        = "Trainer";                
    ls->menuToolsTraceLogger    = "Trace Logger";           

    ls->menuFile                = "Fichiers";
    ls->menuRun                 = "Emulation";
    ls->menuWindow              = "Fen�tre";
    ls->menuOptions             = "Options";
    ls->menuTools                = "Outils";
    ls->menuHelp                = "Aide";


    //----------------------
    // Dialog related lines
    //----------------------

    ls->dlgOK                   = "OK";
    ls->dlgOpen                 = "Ouvrir";
    ls->dlgCancel               = "Annuler";
    ls->dlgSave                 = "Sauver";
    ls->dlgSaveAs               = "Sauver Sous...";
    ls->dlgRun                  = "Lancer";
    ls->dlgClose                = "Fermer";

    ls->dlgLoadRom              = "blueMSX - Choisissez une rom � charger";
    ls->dlgLoadDsk              = "blueMSX - Choisissez une disquette � charger";
    ls->dlgLoadCas              = "blueMSX - Choisissez une cassette � charger";
    ls->dlgLoadRomDskCas        = "blueMSX - Choisissez un fichier rom, dsk, ou cas � charger";
    ls->dlgLoadRomDesc          = "Choisissez une rom � charger:";
    ls->dlgLoadDskDesc          = "Choisissez une disquette � charger:";
    ls->dlgLoadCasDesc          = "Choisissez une cassette � charger:";
    ls->dlgLoadRomDskCasDesc    = "Choisissez un fichier rom, dsk, ou cas � charger:";
    ls->dlgLoadState            = "Charger une image du CPU";
    ls->dlgLoadVideoCapture     = "Charger une capture vid�o";      
    ls->dlgSaveState            = "Sauver une image du CPU";
    ls->dlgSaveCassette         = "blueMSX - Sauver une image de cassette";
    ls->dlgSaveVideoClipAs      = "Sauver le clip vid�o comme ...";      
    ls->dlgAmountCompleted      = "Sauvegarde en cours:";          
    ls->dlgInsertRom1           = "Ins�rer une cartouche dans le port 1";
    ls->dlgInsertRom2           = "Ins�rer une cartouche dans le port 2";
    ls->dlgInsertDiskA          = "Ins�rer une disquette dans le lecteur A";
    ls->dlgInsertDiskB          = "Ins�rer une disquette dans le lecteur B";
    ls->dlgInsertHarddisk       = "Ins�rer un disque dur";                   
    ls->dlgInsertCas            = "Ins�rer une cassette dans le lecteur";
    ls->dlgRomType              = "Type de Rom:"; 
    ls->dlgDiskSize             = "Taille du disque:";             

    ls->dlgTapeTitle            = "blueMSX - position de la bande";
    ls->dlgTapeFrameText        = "Position de la bande";
    ls->dlgTapeCurrentPos       = "Position actuelle";
    ls->dlgTapeTotalTime        = "Dur�e totale";
    ls->dlgTapeCustom           = "Visualiser les Fichiers Personnalis�s";
    ls->dlgTapeSetPosText       = "Position de la cassette:";
    ls->dlgTabPosition          = "Position";
    ls->dlgTabType              = "Type";
    ls->dlgTabFilename          = "Nom du fichier";
    ls->dlgZipReset             = "Reset apr�s l'insertion";

    ls->dlgAboutTitle           = "blueMSX - A propos";

    ls->dlgLangLangText         = "Choisissez la langue utilis�e par blueMSX";
    ls->dlgLangLangTitle        = "blueMSX - Langue";

    ls->dlgAboutAbout           = "A PROPOS\r\n====";
    ls->dlgAboutVersion         = "Version:";
    ls->dlgAboutBuildNumber     = "Build:";
    ls->dlgAboutBuildDate       = "Date:";
    ls->dlgAboutCreat           = "Cr�� par Daniel Vik";
    ls->dlgAboutDevel           = "DEVELOPPEURS\r\n========";
    ls->dlgAboutThanks          = "CONTRIBUTEURS\r\n==========";       // New in 2.7 (retranslate, see english)
    ls->dlgAboutLisence         = "LICENCE\r\n"
                                  "======\r\n\r\n"
                                  "Ce logiciel est livr� \"tel quel\" sans garantie. "
                                  "L'auteur d�cline toute responsabilit� en cas de dommages "
                                  "li�s � son utilisation.\r\n\r\n"
                                  "Pour plus d'informations, consultez www.bluemsx.com.";

    ls->dlgSavePreview          = "Pr�visualiser"; 
    ls->dlgSaveDate             = "Date:";

    ls->dlgRenderVideoCapture   = "blueMSX - Cr�ation du clip vid�o ...";  


    //----------------------
    // Properties related lines
    //----------------------

    ls->propTitle               = "blueMSX - Configuration";
    ls->propEmulation           = "Emulation";
    ls->propD3D                 = "Direct3D";
    ls->propVideo               = "Video";
    ls->propSound               = "Son";
    ls->propControls            = "Contr�les";
    ls->propPerformance         = "Performances";
    ls->propEffects             = "Effects";             // New in 2.9
    ls->propSettings             = "R�glages";
    ls->propFile                = "Fichiers"; 
    ls->propDisk                = "Disques";              // New in 2.7
    ls->propPorts               = "Ports";

    ls->propEmuGeneralGB        = "G�n�ral ";
    ls->propEmuFamilyText       = "Type de MSX:";
    ls->propEmuMemoryGB         = "Memoire ";
    ls->propEmuRamSizeText      = "Taille de la RAM:";
    ls->propEmuVramSizeText     = "Taille de la VRAM:";
    ls->propEmuSpeedGB          = "Vitesse de l'�mulation ";
    ls->propEmuSpeedText        = "Vitesse de l'�mulation:";
    ls->propEmuFrontSwitchGB    = "Commutateurs Panasonic "; 
    ls->propEmuFrontSwitch      = " Commutateur frontal"; 
    ls->propEmuFdcTiming        = " Ne pas synchroniser le lecteur de disquettes"; 
    ls->propEmuNoSpriteLimits   = " Pas de limite de sprites";  // New in 2.9
    ls->propEnableMsxKeyboardQuirk = " Emulate MSX keyboard quirk";  // New in 2.9
    ls->propEmuReversePlay      = " Enable reverse playback"; // New in 2.8.3
    ls->propEmuPauseSwitch      = " Commutateur Pause";
    ls->propEmuAudioSwitch      = " Commutateur MSX-AUDIO"; 
    ls->propVideoFreqText       = "Fr�quence Vid�o:";
    ls->propVideoFreqAuto       = "Auto";
    ls->propSndOversampleText   = "Sur�chantillonner:";
    ls->propSndYkInGB           = "Entr�e YK-01/YK-10/YK-20 ";
    ls->propSndMidiInGB         = "Entr�e MIDI ";
    ls->propSndMidiOutGB        = "Sortie MIDI ";
    ls->propSndMidiChannel      = "Canal MIDI:";
    ls->propSndMidiAll          = "Tous";

    ls->propMonMonGB            = "Moniteur ";
    ls->propMonTypeText         = "Type de moniteur:";
    ls->propMonEmuText          = "Emulation du moniteur:";
    ls->propVideoTypeText       = "Mode:";
    ls->propWindowSizeText      = "Taille de la fen�tre:";
    ls->propMonHorizStretch     = " Etirement Horizontal";
    ls->propMonVertStretch      = " Etirement Vertical"; 
    ls->propMonDeInterlace      = " D�-entrelac�";
    ls->propBlendFrames         = " Mixer des images cons�cutives";
    ls->propMonBrightness       = "Brillance:";
    ls->propMonContrast         = "Contraste:";
    ls->propMonSaturation       = "Saturation:";
    ls->propMonGamma            = "Gamma:";
    ls->propMonScanlines        = " Scanlines:";
    ls->propMonColorGhosting    = " Modulateur RF:"; 
    ls->propMonEffectsGB        = "Effets ";

    ls->propPerfVideoDrvGB      = "Vid�o ";
    ls->propPerfVideoDispDrvText= "Pilote d'affichage:";
    ls->propPerfFrameSkipText   = "Images ignor�es:";
    ls->propPerfAudioDrvGB      = "Audio ";
    ls->propPerfAudioDrvText    = "Pilote audio:";
    ls->propPerfAudioBufSzText  = "Taille du buffer:";
    ls->propPerfEmuGB           = "Emulation ";
    ls->propPerfSyncModeText    = "Synchronisation:";
    ls->propFullscreenResText   = "R�solution plein �cran:"; 

    ls->propSndChipEmuGB        = "Emulation du son ";
    ls->propSndMsxMusic         = " MSX-MUSIC";
    ls->propSndMsxAudio         = " MSX-AUDIO";
    ls->propSndMoonsound        = " Moonsound";
    ls->propSndMt32ToGm         = " Accorder les instruments MT-32 � General MIDI";

    ls->propPortsLptGB          = "Port parall�le ";
    ls->propPortsComGB          = "Ports s�rie ";
    ls->propPortsLptText        = "Port:";
    ls->propPortsCom1Text       = "Port 1:";
    ls->propPortsNone           = "Aucun";
    ls->propPortsSimplCovox     = "SiMPL / Covox DAC"; 
    ls->propPortsFile           = "Imprimer dans fichier"; 
    ls->propPortsComFile        = "Envoyer vers fichier";
    ls->propPortsOpenLogFile    = "Ouvrir un fichier de donn�es"; 
    ls->propPortsEmulateMsxPrn  = "Emulation:"; 

    ls->propSetFileHistoryGB     = "Historique des fichiers ";
    ls->propSetFileHistorySize   = "Nombre d'�l�ments dans l'historique";
    ls->propSetFileHistoryClear  = "Purger l'historique";
    ls->propFileTypes            = " Associer certains types de fichiers avec blueMSX"; 
    ls->propWindowsEnvGB         = "Environnement Windows "; 
    ls->propSetScreenSaver       = " D�sactiver l'�conomiseur d'�cran quand blueMSX est lanc�";
    ls->propDisableWinKeys       = " Fonction MSX automatique pour les touches Windows"; 
    ls->propPriorityBoost       = " Donner � blueMSX une priorit� �lev�e";
    ls->propScreenshotPng       = " Utiliser le format PNG pour les captures d'�cran";  
    ls->propEjectMediaOnExit    = " Eject media when blueMSX exits";        // New in 2.8
    ls->propClearHistory         = "D�sirez-vous vraiment purger l'historique ?";
    ls->propOpenRomGB           = "Ouvrir un fichier Rom ";
    ls->propDefaultRomType      = "Type par d�faut:"; 
    ls->propGuessRomType        = "Deviner le type"; 

    ls->propSettDefSlotGB       = "Glisser et d�poser "; 
    ls->propSettDefSlots        = "Ins�rer la cartouche dans:"; 
    ls->propSettDefSlot         = " Port"; 
    ls->propSettDefDrives       = "Ins�rer la disquette dans:"; 
    ls->propSettDefDrive        = " Lecteur"; 
    
    ls->propThemeGB             = "Th�me ";
    ls->propTheme               = "Th�me";

    ls->propCdromGB             = "CD-ROM ";         // New in 2.7
    ls->propCdromMethod         = "M�thode d'acc�s:";  // New in 2.7
    ls->propCdromMethodNone     = "Aucune";            // New in 2.7
    ls->propCdromMethodIoctl    = "IOCTL";           // New in 2.7
    ls->propCdromMethodAspi     = "ASPI";            // New in 2.7
    ls->propCdromDrive          = "Lecteur:";          // New in 2.7

    ls->propD3DParametersGB         = "Param�tres ";
    ls->propD3DAspectRatioText      = "Format d'image";
    ls->propD3DLinearFilteringText  = " Fitrage lin�aire";
    ls->propD3DForceHighResText     = " Forcer haute r�solution";
    ls->propD3DExtendBorderColorText    = " �tendre la couleur du bord";

    ls->propD3DCroppingGB               = "Rognage ";
    ls->propD3DCroppingTypeText         = "Type de rognage:";
    ls->propD3DCroppingLeftText         = "Gauche:";
    ls->propD3DCroppingRightText        = "Droite:";
    ls->propD3DCroppingTopText          = "Haut:";
    ls->propD3DCroppingBottomText       = "Bas:";

    //----------------------
    // Dropdown related lines
    //----------------------

    ls->enumVideoMonColor       = "Couleur";
    ls->enumVideoMonGrey        = "Noir et blanc";
    ls->enumVideoMonGreen       = "Monochrome vert";
    ls->enumVideoMonAmber       = "Ambre";

    ls->enumVideoTypePAL        = "PAL";
    ls->enumVideoTypeNTSC       = "NTSC";

    ls->enumVideoEmuNone        = "Aucune";
    ls->enumVideoEmuYc          = "Cable Y/C (pr�cis)";
    ls->enumVideoEmuMonitor     = "Moniteur";
    ls->enumVideoEmuYcBlur      = "Cable Y/C avec bruit (pr�cis)";
    ls->enumVideoEmuComp        = "Composite (flou)";
    ls->enumVideoEmuCompBlur    = "Composite avec bruit (flou)";
    ls->enumVideoEmuScale2x     = "Echelle 2x";
    ls->enumVideoEmuHq2x        = "Hq2x"; 

    ls->enumVideoSize1x         = "Normal - 320x200";
    ls->enumVideoSize2x         = "Double - 640x400";
    ls->enumVideoSizeFullscreen = "Plein �cran";

    ls->enumVideoDrvDirectDrawHW = "DirectDraw HW acc�l.";
    ls->enumVideoDrvDirectDraw  = "DirectDraw";
    ls->enumVideoDrvGDI         = "GDI";
    ls->enumVideoDrvD3D         = "Direct3D";

    ls->enumVideoFrameskip0     = "Aucune";
    ls->enumVideoFrameskip1     = "1 image";
    ls->enumVideoFrameskip2     = "2 images";
    ls->enumVideoFrameskip3     = "3 images";
    ls->enumVideoFrameskip4     = "4 images";
    ls->enumVideoFrameskip5     = "5 images";

	ls->enumD3DARAuto           = "Automatique";
	ls->enumD3DARStretch        = "�tirer";
	ls->enumD3DARPAL            = "PAL";
	ls->enumD3DARNTSC           = "NTSC";
	ls->enumD3DAR11             = "1:1";

	ls->enumD3DCropNone         = "Aucun";
	ls->enumD3DCropMSX1         = "MSX1";
	ls->enumD3DCropMSX1Plus8    = "MSX1+8";
	ls->enumD3DCropMSX2         = "MSX2";
	ls->enumD3DCropMSX2Plus8    = "MSX2+8";
	ls->enumD3DCropCustom       = "Personnalis�";

    ls->enumSoundDrvNone        = "Pas de son";
    ls->enumSoundDrvWMM         = "Pilote WMM";
    ls->enumSoundDrvDirectX     = "Pilote DirectX";

    ls->enumEmuSync1ms          = "Sync sur MSX refresh";
    ls->enumEmuSyncAuto         = "Auto (rapide)";
    ls->enumEmuSyncNone         = "Aucune";
    ls->enumEmuSyncVblank       = "Sync sur PC Vertical Blank";
    ls->enumEmuAsyncVblank      = "PC Vblank asynchrone";             

    ls->enumControlsJoyNone     = "Aucune";
    ls->enumControlsJoyMouse    = "Souris";
    ls->enumControlsJoyTetris2Dongle = "Dongle Tetris 2"; 
    ls->enumControlsJoyTMagicKeyDongle = "Dongle MagicKey";             
    ls->enumControlsJoy2Button = "Joystick 2 boutons";                   
    ls->enumControlsJoyGunstick  = "Gun Stick";                         
    ls->enumControlsJoyAsciiLaser="ASCII Plus-X Terminator Laser";      
    ls->enumControlsArkanoidPad  ="Arkanoid Pad";                   // New in 2.7.1
    ls->enumControlsJoyColeco = "Joystick ColecoVision";                

    ls->enumDiskMsx35Dbl9Sect    = "MSX 3.5\" double face, 9 secteurs";     
    ls->enumDiskMsx35Dbl8Sect    = "MSX 3.5\" double face, 8 secteurs";     
    ls->enumDiskMsx35Sgl9Sect    = "MSX 3.5\" simple face, 9 secteurs";     
    ls->enumDiskMsx35Sgl8Sect    = "MSX 3.5\" simple face, 8 secteurs";     
    ls->enumDiskSvi525Dbl        = "SVI-328 5.25\" double face";           
    ls->enumDiskSvi525Sgl        = "SVI-328 5.25\" simple face";           
    ls->enumDiskSf3Sgl           = "Sega SF-7000 3\" simple face";  


    //----------------------
    // Configuration related lines
    //----------------------

    ls->confTitle               = "blueMSX - Editeur de machine";
    ls->confConfigText          = "Configuration";
    ls->confSlotLayout          = "Disposition des ports";
    ls->confMemory              = "M�moire";
    ls->confChipEmulation       = "Emulation de la puce";
    ls->confChipExtras          = "Extras";

    ls->confOpenRom             = "Ouvrir une image-ROM";
    ls->confSaveTitle           = "blueMSX - Sauver la configuration";
    ls->confSaveText            = "Voulez-vous remplacer cette configuration ? :";
    ls->confSaveAsTitle         = "Sauver sous..."; 
    ls->confSaveAsMachineName   = "Nom de la machine:";
    ls->confDiscardTitle        = "blueMSX - Configuration";
    ls->confExitSaveTitle       = "blueMSX - Quitter l'�diteur de machine";
    ls->confExitSaveText        = "Voulez-vous ignorer les changements apport�s � la configuration actuelle ?";

    ls->confSlotLayoutGB        = "Disposition des ports ";
    ls->confSlotExtSlotGB       = "Ports externes ";
    ls->confBoardGB             = "Syst�me ";
    ls->confBoardText           = "Type de syst�me:";
    ls->confSlotPrimary         = "Primaire";
    ls->confSlotExpanded        = "Etendu (4 sous-ports)";

    ls->confSlotCart            = "Cartouche";
    ls->confSlot                = "Slot";
    ls->confSubslot             = "Sous-slot";

    ls->confMemAdd              = "Ajouter...";
    ls->confMemEdit             = "Editer...";
    ls->confMemRemove           = "Supprimer";
    ls->confMemSlot             = "Port";
    ls->confMemAddresss         = "Adresses";
    ls->confMemType             = "Type";
    ls->confMemRomImage         = "Image de la ROM";

    ls->confChipVideoGB         = "Video ";
    ls->confChipVideoChip       = "Puce Video:";
    ls->confChipVideoRam        = "Video RAM:";
    ls->confChipSoundGB         = "Son ";
    ls->confChipPsgStereoText    = " PSG St�r�o";

    ls->confCmosGB                = "CMOS "; 
    ls->confCmosEnable            = " Activer la CMOS"; 
    ls->confCmosBattery           = " Utiliser une Pile Charg�e";

    ls->confCpuFreqGB            = "Fr�quence CPU ";
    ls->confZ80FreqText          = "Fr�quence Z80:";
    ls->confR800FreqText         = "Fr�quence R800:";
    ls->confFdcGB                = "Contr�leur de lecteur de disquettes ";
    ls->confCFdcNumDrivesText    = "Nombre de lecteurs:";

    ls->confEditMemTitle        = "blueMSX - Editer le Mapper";
    ls->confEditMemGB           = "Details du Mapper ";
    ls->confEditMemType         = "Type:";
    ls->confEditMemFile         = "Fichier:";
    ls->confEditMemAddress      = "Adresse";
    ls->confEditMemSize         = "Taille";
    ls->confEditMemSlot         = "Port";


    //----------------------
    // Shortcut lines
    //----------------------

    ls->shortcutKey             = "Touche rapide";
    ls->shortcutDescription     = "Raccourci";

    ls->shortcutSaveConfig      = "blueMSX - Sauver la configuration";
    ls->shortcutOverwriteConfig = "Voulez-vous remplacer cette configuration ?:";
    ls->shortcutExitConfig      = "blueMSX - Quitter l'�diteur de raccourcis";
    ls->shortcutDiscardConfig   = "Voulez-vous ignorer les changements apport�s � la configuration actuelle ?";
    ls->shortcutSaveConfigAs    = "blueMSX - Sauver la configuration comme....";
    ls->shortcutConfigName      = "Nom de la configuration:";
    ls->shortcutNewProfile      = "< Nouveau profil >";
    ls->shortcutConfigTitle     = "blueMSX - Editeur de la carte des raccourcis";
    ls->shortcutAssign          = "Assigner";
    ls->shortcutPressText       = "Appuyer sur la (les) touche(s):";
    ls->shortcutScheme          = "Agencement:";
    ls->shortcutCartInsert1     = "Ins�rer une cartouche dans le port 1";
    ls->shortcutCartRemove1     = "Ejecter la cartouche du port 1";
    ls->shortcutCartInsert2     = "Ins�rer la cartouche dans le port 2";
    ls->shortcutCartRemove2     = "Ejecter la cartouche du port 2";
    ls->shortcutSpecialMenu1    = "Acc�der au menu sp�cial pour les cartouches en port 1";
    ls->shortcutSpecialMenu2    = "Acc�der au menu sp�cial pour les cartouches en port 2";
    ls->shortcutCartAutoReset   = "Reset apr�s insertion d'une cartouche";
    ls->shortcutDiskInsertA     = "Ins�rer une disquette dans le lecteur A";
    ls->shortcutDiskDirInsertA  = "Ins�rer un r�pertoire comme disquette A"; 
    ls->shortcutDiskRemoveA     = "Ejecter la disquette du lecteur A";
    ls->shortcutDiskChangeA     = "Changer rapidement de disquette dans le lecteur A";
    ls->shortcutDiskAutoResetA  = "Reset apr�s insertion d'une disquette dans le lecteur A";
    ls->shortcutDiskInsertB     = "Ins�rer une disquette dans le lecteur B";
    ls->shortcutDiskDirInsertB  = "Ins�rer un r�pertoire comme disquette B"; 
    ls->shortcutDiskRemoveB     = "Ejecter la disquette du lecteur B";
    ls->shortcutCasInsert       = "Ins�rer une cassette";
    ls->shortcutCasEject        = "Ejecter la cassette";
    ls->shortcutCasAutorewind   = "Rembobinage automatique ou non de la cassette";
    ls->shortcutCasReadOnly     = "Cassette en mode lecture seule ou non";
    ls->shortcutCasSetPosition  = "D�finir la position";
    ls->shortcutCasRewind       = "Rembobiner la cassette";
    ls->shortcutCasSave         = "Sauver l'image de la cassette";
    ls->shortcutPrnFormFeed     = "Passage � la page suivante"; 
    ls->shortcutCpuStateLoad    = "Charger une image du CPU";
    ls->shortcutCpuStateSave    = "Sauver une image du CPU";
    ls->shortcutCpuStateQload   = "Acc�s instantan� � l'image du CPU";
    ls->shortcutCpuStateQsave   = "Sauvegarde instantan�e de l'image du CPU";
    ls->shortcutAudioCapture    = "D�marrer/arr�ter la capture du son";
    ls->shortcutScreenshotOrig  = "Capture d'�cran";
    ls->shortcutScreenshotSmall = "Petite capture d'�cran sans filtre";
    ls->shortcutScreenshotLarge = "Grande capture d'�cran sans filtre";
    ls->shortcutQuit            = "Quitter blueMSX";
    ls->shortcutRunPause        = "D�marrer/geler l'�mulation";
    ls->shortcutStop            = "Arr�ter l'�mulation";
    ls->shortcutResetHard       = "Reset mat�riel";
    ls->shortcutResetSoft       = "Reset logiciel";
    ls->shortcutResetClean      = "Reset complet";
    ls->shortcutSizeSmall       = "Passer en mode petite fen�tre";
    ls->shortcutSizeNormal      = "Passer en mode fen�tre normal";
    ls->shortcutSizeFullscreen  = "Passer en mode plein �cran";
    ls->shortcutSizeMinimized   = "R�duire la fen�tre";
    ls->shortcutToggleFullscren = "Balance mode fen�tre/mode plein �cran";
    ls->shortcutVolumeIncrease  = "Augmenter le volume sonore";
    ls->shortcutVolumeDecrease  = "Diminuer le volume sonore";
    ls->shortcutVolumeMute      = "Arr�ter le son";
    ls->shortcutVolumeStereo    = "Balance mono/st�r�o";
    ls->shortcutSwitchMsxAudio  = "Actionner le commutateur MSX-AUDIO";
    ls->shortcutSwitchFront     = "Actionner le commutateur frontal Panasonic";
    ls->shortcutSwitchPause     = "Actionner le commutateur Pause";
    ls->shortcutToggleMouseLock = "Activer/d�sactiver le blocage de la souris";
    ls->shortcutEmuSpeedMax     = "Vitesse maximale d'�mulation";
    ls->shortcutEmuPlayReverse  = "Rewind emulation";                     // New in 2.8.3
    ls->shortcutEmuSpeedToggle  = "Balance vitesse maximale d'�mulation";
    ls->shortcutEmuSpeedNormal  = "Vitesse normale d'�mulation";
    ls->shortcutEmuSpeedInc     = "Augmenter la vitesse d'�mulation";
    ls->shortcutEmuSpeedDec     = "Diminuer la vitesse d'�mulation";
    ls->shortcutThemeSwitch     = "Changer de th�me";
    ls->shortcutShowEmuProp     = "Acc�der au menu Emulation";
    ls->shortcutShowVideoProp   = "Acc�der au menu Video";
    ls->shortcutShowAudioProp   = "Acc�der au menu Son";
    ls->shortcutShowCtrlProp    = "Acc�der au menu Contr�les";
    ls->shortcutShowEffectsProp = "Show Effects Properties";     // New in 2.9
    ls->shortcutShowSettProp    = "Acc�der au menu R�glages";
    ls->shortcutShowPorts       = "Acc�der au menu Ports";
    ls->shortcutShowLanguage    = "Acc�der au menu Langue";
    ls->shortcutShowMachines    = "Acc�der � l'�diteur de machines";
    ls->shortcutShowShortcuts   = "Acc�der � l'�diteur de raccourcis";
    ls->shortcutShowKeyboard    = "Acc�der � l'�diteur de contr�leurs/clavier"; 
    ls->shortcutShowMixer       = "Acc�der au M�langeur audio";
    ls->shortcutShowDebugger    = "Acc�der au D�bogueur"; 
    ls->shortcutShowTrainer     = "Acc�der au Trainer"; 
    ls->shortcutShowHelp        = "Acc�der aux rubriques d'aide";
    ls->shortcutShowAbout       = "Voir la rubrique A propos de blueMSX";
    ls->shortcutShowFiles       = "Acc�der au menu Fichiers";
    ls->shortcutToggleSpriteEnable = "Montrer/Cacher les sprites";
    ls->shortcutToggleFdcTiming = "Synchroniser ou non le lecteur de disquettes"; 
    ls->shortcutToggleNoSpriteLimits = "Basculer limitation de l'affichage des sprites";
    ls->shortcutEnableMsxKeyboardQuirk = "Emulate MSX Keyboard Quirk";              // New in 2.9
    ls->shortcutToggleCpuTrace  = "Valider/Invalider la trace du CPU";
    ls->shortcutVideoLoad       = "Charger une capture vid�o";             
    ls->shortcutVideoPlay       = "Voir la plus r�cente capture vid�o";   
    ls->shortcutVideoRecord     = "Enregistrer une capture vid�o";              
    ls->shortcutVideoStop       = "Arr�ter la capture vid�o";                
    ls->shortcutVideoRender     = "Cr�er un clip vid�o";   


    //----------------------
    // Keyboard config lines
    //----------------------

    ls->keyconfigSelectedKey    = "Touche MSX:"; 
    ls->keyconfigMappedTo       = "Touche PC :"; 
    ls->keyconfigMappingScheme  = "Configuration du clavier:"; 

    
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

    ls->aboutScrollThanksTo     = "Sp�cial remerciement �: ";
    ls->aboutScrollAndYou       = "et TOI !!!!";
};

#endif
