/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"

@class BRTextControl, BRImageControl, NSMutableDictionary, NSArray;

@interface ATVPlayerEventDisplayControl : BRControl {
@private
	NSMutableDictionary *_textAttrs;	// 44 = 0x2c
	BRImageControl *_background;	// 48 = 0x30
	BRTextControl *_displayText;	// 52 = 0x34
	NSArray *_eventLogs;	// 56 = 0x38
}
+ (void)hidePlaybackEventPopup;	// 0x34cb9a4d
+ (void)showPlaybackEventPopup:(id)popup;	// 0x34cb9959
- (id)init;	// 0x34cb9a81
- (void)_readableBitRate:(double *)rate andUnitsString:(id *)string forBitsPerSecond:(double)bitsPerSecond;	// 0x34cba07d
- (void)_readableBitRate:(double *)rate andUnitsString:(id *)string forBytes:(double)bytes andDuration:(double)duration;	// 0x34cba04d
- (void)dealloc;	// 0x34cb9bf9
- (void)layoutSubcontrols;	// 0x34cb9c75
- (void)setEventLogs:(id)logs;	// 0x34cba005
@end

