/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"
#import "BRTabControlDelegate.h"

@class BRMediaPlayer, NSValue, BRTabControl, BRImage, BRTextControl, BRImageControl, BRVideoChapterProvider, BRCoverArtPreviewControl, BRReflectionControl;

__attribute__((visibility("hidden")))
@interface BRChapterSubtitleAudioPickerControl : BRControl <BRTabControlDelegate> {
@private
	BRImage *_currentVideoFrame;	// 44 = 0x2c
	BRControl *_screenShotPreviewAndReflectionComboControl;	// 48 = 0x30
	BRImageControl *_screenShotPreviewControl;	// 52 = 0x34
	CGPoint _screenShotPreviewControlFullScreenPosition;	// 56 = 0x38
	BRReflectionControl *_reflectionToPreviewControl;	// 64 = 0x40
	NSValue *_previewTransform;	// 68 = 0x44
	NSValue *_reflectionTransform;	// 72 = 0x48
	BRVideoChapterProvider *_chapterProvider;	// 76 = 0x4c
	BRCoverArtPreviewControl *_preview;	// 80 = 0x50
	BRControl *_csaPicker;	// 84 = 0x54
	BRTabControl *_tabControl;	// 88 = 0x58
	BRTextControl *_titleControl;	// 92 = 0x5c
	BRMediaPlayer *_player;	// 96 = 0x60
	BRControl *_currentContentControl;	// 100 = 0x64
	BRControl *_chapterPicker;	// 104 = 0x68
	BOOL _inScreenShotMode;	// 108 = 0x6c
	BOOL _controlWasActivated;	// 109 = 0x6d
	BOOL _controlWasDeactivated;	// 110 = 0x6e
}
+ (id)controlWithPlayer:(id)player;	// 0x34cfa1e9
- (id)init;	// 0x34cfa23d
- (void)_addCSAPicker;	// 0x34cfbaad
- (void)_addFullScreenVideoSnapshot;	// 0x34cfb7c9
- (void)_animatePreviewBackToScreenshot;	// 0x34cfb7d1
- (void)_animateScreenshotToPreview;	// 0x34cfb7cd
- (BOOL)_chapterPreviewsAvailable;	// 0x34cface1
- (void)_createCSAPicker;	// 0x34cfb809
- (void)_endPositionForPreview:(CGPoint *)preview forReflection:(CGPoint *)reflection;	// 0x34cfbae5
- (void)_loadAudioList;	// 0x34cfb43d
- (void)_loadChapters;	// 0x34cfad99
- (void)_loadGraphicalChapterList;	// 0x34cfaf31
- (void)_loadListWithTitles:(id)titles forTrackIDs:(id)trackIDs withCurrentSelection:(long)currentSelection withSelectionHandler:(id)selectionHandler;	// 0x34cfb5b5
- (void)_loadSubtitleList;	// 0x34cfb245
- (void)_loadTextualChapterList;	// 0x34cfadd1
- (void)_setAudioTrack:(id)track;	// 0x34cfac65
- (void)_setChapter:(id)chapter;	// 0x34cfaa99
- (void)_setSubtitleTrack:(id)track;	// 0x34cfabe9
- (id)_titleControlItemLabelAttributes;	// 0x34cfbb85
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x34cfaa15
- (BOOL)brEventAction:(id)action;	// 0x34cfa909
- (void)controlWasActivated;	// 0x34cfa789
- (void)dealloc;	// 0x34cfa2d5
- (void)layoutSubcontrols;	// 0x34cfa7d5
- (void)orderOut;	// 0x34cfa741
- (void)setPlayer:(id)player;	// 0x34cfa3f1
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x34cfa9b5
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x34cfaa0d
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x34cfaa11
@end

