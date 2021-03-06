/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRListControl, BRResumeMenuControlLayoutManager, BRImageControl;

@interface BRResumeMenuControl : BRControl {
@private
	BRTextControl *_title;	// 44 = 0x2c
	BRListControl *_resumeMenu;	// 48 = 0x30
	BRImageControl *_blurControl;	// 52 = 0x34
	BRResumeMenuControlLayoutManager *_layoutManager;	// 56 = 0x38
	float _blurOversizeFactor;	// 60 = 0x3c
}
@property(retain) BRTextControl *title;	// G=0x34d2f35d; S=0x34d2f26d; converted property
- (id)init;	// 0x34d2f061
- (CGColorRef)blurControlBackgroundColor;	// 0x34d2f7b1
- (BOOL)brEventAction:(id)action;	// 0x34d2f545
- (void)dealloc;	// 0x34d2f1f1
- (void)layoutSubcontrols;	// 0x34d2f38d
- (id)list;	// 0x34d2f5d5
- (id)preferredActionForKey:(id)key;	// 0x34d2f6d9
- (void)setBlurOversizeFactor:(float)factor;	// 0x34d2f6b9
- (void)setImage:(id)image;	// 0x34d2f5e5
// converted property setter: - (void)setTitle:(id)title;	// 0x34d2f26d
// converted property getter: - (id)title;	// 0x34d2f35d
@end

