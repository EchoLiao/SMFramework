/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRButtonControl.h"


__attribute__((visibility("hidden")))
@interface ATVMoviesPlayActionButtonControl : BRButtonControl {
}
+ (id)playButtonForAsset:(id)asset;	// 0x34c576a5
+ (id)playButtonForMediaItem:(ATVMediaItemRef)mediaItem;	// 0x34c577c1
- (void)_downloadStateChanged:(id)changed;	// 0x34c57849
- (void)_updateButtonStateWithAsset:(id)asset;	// 0x34c57875
- (void)dealloc;	// 0x34c577f5
@end

