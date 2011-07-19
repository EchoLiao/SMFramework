/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreRottenTomatoesControl : BRControl {
@private
	NSDictionary *_itemDictionary;	// 44 = 0x2c
}
+ (id)rottenTomatesControlWithDictionary:(id)dictionary;	// 0x34c61591
- (id)initWithDictionary:(id)dictionary;	// 0x34c615c5
- (CGRect)_addTextControlWithAttributedString:(id)attributedString maxSize:(CGSize)size origin:(CGPoint)origin;	// 0x34c62755
- (CGRect)_addTextControlWithAttributedString:(id)attributedString maxSize:(CGSize)size xOrigin:(float)origin topLine:(float)line;	// 0x34c62809
- (CGRect)_addTextControlWithText:(id)text attributes:(id)attributes maxSize:(CGSize)size origin:(CGPoint)origin;	// 0x34c626e1
- (id)_imageForFreshnessRating:(int)freshnessRating;	// 0x34c628cd
- (id)_labelForFreshnessRating:(int)freshnessRating locInfo:(id)info;	// 0x34c628f5
- (id)accessibilityLabel;	// 0x34c626c9
- (void)dealloc;	// 0x34c61615
- (void)layoutSubcontrols;	// 0x34c61659
@end

