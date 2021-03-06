/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRMarqueeTextControl, BRAsyncImageControl, NSDictionary;

__attribute__((visibility("hidden")))
@interface BRChapterGridItem : BRControl {
@private
	BRAsyncImageControl *_imageControl;	// 44 = 0x2c
	BRMarqueeTextControl *_chapterTitleControl;	// 48 = 0x30
	NSDictionary *_chapterInfo;	// 52 = 0x34
}
@property(retain) NSDictionary *chapterInfo;	// G=0x34cfa059; S=0x34cf9d2d; converted property
- (id)init;	// 0x34cf9c71
// converted property getter: - (id)chapterInfo;	// 0x34cfa059
- (void)controlWasFocused;	// 0x34cfa069
- (void)controlWasUnfocused;	// 0x34cfa0cd
- (void)dealloc;	// 0x34cf9cc5
- (void)layoutSubcontrols;	// 0x34cfa115
// converted property setter: - (void)setChapterInfo:(id)info;	// 0x34cf9d2d
@end

