/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSelectionHandler.h"
#import "BRSingleton.h"


__attribute__((visibility("hidden")))
@interface ATVFavoritesSelectionHandler : BRSingleton <BRSelectionHandler> {
}
+ (void)setSingleton:(id)singleton;	// 0x34bf7565
+ (id)singleton;	// 0x34bf7559
- (BOOL)_handleFavoriteSelection:(id)selection autoPlay:(BOOL)play;	// 0x34bf7639
- (BOOL)handlePlayForControl:(id)control;	// 0x34bf75d5
- (BOOL)handleSelectionForControl:(id)control;	// 0x34bf7571
@end

