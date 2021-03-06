/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRKeyboardRomanSquare.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRKeyboardCandidates : BRKeyboardRomanSquare {
@private
	NSArray *_rawKeyboardDataStrings;	// 36 = 0x24
}
- (id)_keyboardDataFileName;	// 0x34d3c849
- (id)_mainKeyRowWithKeys:(id)keys index:(int)index;	// 0x34d3c915
- (float)_mainKeysVerticalSpacing;	// 0x34d3c9a9
- (int)_numberOfColumnsForMainKeyRowIndex:(int)mainKeyRowIndex;	// 0x34d3c891
- (int)_numberOfMainKeyRows;	// 0x34d3c869
- (float)_preferredGlyphHeight:(id)height;	// 0x34d3c861
- (int)_scrollDirectionForMainKeys;	// 0x34d3c9a5
- (id)actionKeyRows;	// 0x34d3c759
- (id)actionKeysContainer;	// 0x34d3c845
- (id)attributesForTextFieldLabel;	// 0x34d3c749
- (id)bottomRow;	// 0x34d3c75d
- (void)dealloc;	// 0x34d3c3b9
- (id)mainKeysContainer;	// 0x34d3c781
- (id)name;	// 0x34d3c74d
- (void)setRawKeyboardDataStrings:(id)strings;	// 0x34d3c3fd
- (void)updateMainKeysContainer:(id)container;	// 0x34d3c52d
@end

