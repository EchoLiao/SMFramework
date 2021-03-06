/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRListControl, NSAttributedString, BRVerticalScrollBarControl;

@interface BRScrollingTextBoxControl : BRControl {
@private
	BRListControl *_list;	// 44 = 0x2c
	NSAttributedString *_text;	// 48 = 0x30
	BRVerticalScrollBarControl *_scrollBar;	// 52 = 0x34
	float _textHeightFactor;	// 56 = 0x38
	long _upperFocusLimit;	// 60 = 0x3c
	long _lowerFocusLimit;	// 64 = 0x40
}
@property(retain) NSAttributedString *text;	// G=0x34d32631; S=0x34d325c1; converted property
@property(assign) float textHeightFactor;	// G=0x34d32651; S=0x34d32641; converted property
- (id)init;	// 0x34d322e5
- (void)_calculateFocusLimitsWithTextBoxSize:(CGSize)textBoxSize;	// 0x34d32a59
- (void)_forceSelectionToFocusLimit;	// 0x34d32989
- (void)_listSelectionChanged:(id)changed;	// 0x34d32975
- (void)_providerCountChanged:(id)changed;	// 0x34d32c05
- (id)accessibilityLabel;	// 0x34d32951
- (BOOL)brEventAction:(id)action;	// 0x34d32661
- (void)dealloc;	// 0x34d32531
- (void)layoutSubcontrols;	// 0x34d326ed
// converted property setter: - (void)setText:(id)text;	// 0x34d325c1
// converted property setter: - (void)setTextHeightFactor:(float)factor;	// 0x34d32641
// converted property getter: - (id)text;	// 0x34d32631
// converted property getter: - (float)textHeightFactor;	// 0x34d32651
@end

