/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRKeyboardRomanSquare.h"


__attribute__((visibility("hidden")))
@interface BRKeyboardJapaneseSquareHiragana : BRKeyboardRomanSquare {
}
- (CGSize)_actionKeysContainerSize:(id)size resolutionScale:(float)scale;	// 0x34d3dbf9
- (float)_candidatesBackgroundBaseGap:(id)gap resolutionScale:(float)scale;	// 0x34d3db99
- (CGSize)_candidatesBackgroundSize:(id)size resolutionScale:(float)scale;	// 0x34d3db41
- (id)_mainKeyRowPlane;	// 0x34d3d9c9
- (id)_mainKeyRowWithKeys:(id)keys index:(int)index;	// 0x34d3d969
- (CGSize)_mainKeysContainerSize:(id)size resolutionScale:(float)scale;	// 0x34d3dbb5
- (float)_mainKeysVerticalSpacing;	// 0x34d3da25
- (CGSize)_minTextEntryControlSize:(id)size resolutionScale:(float)scale;	// 0x34d3da2d
- (int)_numberOfColumnsForMainKeyRowIndex:(int)mainKeyRowIndex;	// 0x34d3d95d
- (int)_numberOfMainKeyRows;	// 0x34d3d959
- (int)_scrollDirectionForMainKeys;	// 0x34d3da21
- (long)_startingIndexOfActionKeysInKeyRowData;	// 0x34d3dc49
- (float)_topMostUIElementGap:(id)gap resolutionScale:(float)scale;	// 0x34d3db25
- (id)actionDictionaryForKeyControl:(id)keyControl;	// 0x34d3d6fd
- (id)actionKeysContainer;	// 0x34d3d645
- (id)name;	// 0x34d3d445
- (void)setFocusToDefaultGlyph;	// 0x34d3d451
- (void)setFocusToDefaultSwitchKeyboardGlyph:(id)defaultSwitchKeyboardGlyph;	// 0x34d3d4ad
@end

