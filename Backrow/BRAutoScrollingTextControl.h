/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRMarqueeTextControl, BRTextControl, NSAttributedString;

__attribute__((visibility("hidden")))
@interface BRAutoScrollingTextControl : BRControl {
@private
	NSAttributedString *_text;	// 44 = 0x2c
	BRMarqueeTextControl *_scrollingTextControl;	// 48 = 0x30
	BRTextControl *_textControl;	// 52 = 0x34
	BOOL _crossfadeEnabled;	// 56 = 0x38
	BOOL _autoScrollEnabled;	// 57 = 0x39
	BOOL _displaysText;	// 58 = 0x3a
	BOOL _useAlphaFadeMask;	// 59 = 0x3b
	BOOL _animationUsesDelay;	// 60 = 0x3c
}
@property(assign) BOOL animationUsesDelay;	// G=0x34cf2c09; S=0x34cf2bf9; converted property
@property(retain) id attributedString;	// G=0x34cf2aed; S=0x34cf2a15; converted property
@property(assign) BOOL autoScrollEnabled;	// G=0x34cf2b49; S=0x34cf2b1d; converted property
@property(assign) BOOL crossfadeEnabled;	// G=0x34cf2b0d; S=0x34cf2afd; converted property
@property(assign) BOOL displaysText;	// G=0x34cf2be9; S=0x34cf2b59; converted property
@property(assign) BOOL useAlphaFadeMask;	// G=0x34cf2c29; S=0x34cf2c19; converted property
- (id)init;	// 0x34cf2909
- (void)_removeMarqueeControl;	// 0x34cf3271
- (void)_removeTextControl;	// 0x34cf3229
// converted property getter: - (BOOL)animationUsesDelay;	// 0x34cf2c09
// converted property getter: - (id)attributedString;	// 0x34cf2aed
// converted property getter: - (BOOL)autoScrollEnabled;	// 0x34cf2b49
// converted property getter: - (BOOL)crossfadeEnabled;	// 0x34cf2b0d
- (void)dealloc;	// 0x34cf2949
// converted property getter: - (BOOL)displaysText;	// 0x34cf2be9
- (void)layoutSubcontrols;	// 0x34cf2c39
- (id)preferredActionForKey:(id)key;	// 0x34cf3145
// converted property setter: - (void)setAnimationUsesDelay:(BOOL)delay;	// 0x34cf2bf9
// converted property setter: - (void)setAttributedString:(id)string;	// 0x34cf2a15
// converted property setter: - (void)setAutoScrollEnabled:(BOOL)enabled;	// 0x34cf2b1d
// converted property setter: - (void)setCrossfadeEnabled:(BOOL)enabled;	// 0x34cf2afd
// converted property setter: - (void)setDisplaysText:(BOOL)text;	// 0x34cf2b59
- (void)setText:(id)text withAttributes:(id)attributes;	// 0x34cf29b1
// converted property setter: - (void)setUseAlphaFadeMask:(BOOL)mask;	// 0x34cf2c19
// converted property getter: - (BOOL)useAlphaFadeMask;	// 0x34cf2c29
@end

