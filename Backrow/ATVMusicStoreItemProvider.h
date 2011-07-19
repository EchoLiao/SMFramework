/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <Foundation/Foundation.h> // Unknown library

@class NSMutableDictionary, NSMutableArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreItemProvider : NSObject <BRProvider> {
@private
	NSDictionary *_catalogItem;	// 4 = 0x4
	NSMutableArray *_items;	// 8 = 0x8
	BOOL _reverseOrder;	// 12 = 0xc
	BOOL _isAnyItemBlueDotted;	// 13 = 0xd
	NSMutableDictionary *_watchedStatesForItems;	// 16 = 0x10
}
@property(assign, getter=isOrderReversed) BOOL orderReversed;	// G=0x34c28d65; S=0x34c28d11; converted property
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x34c28afd
- (id)initWithCatalogItem:(id)catalogItem;	// 0x34c28b31
- (id)_augmentCollectionItem:(id)item atIndex:(long)index;	// 0x34c29535
- (void)_checkForBlueDottedItems;	// 0x34c29735
- (void)_resetBlueDottedItems;	// 0x34c299a1
- (id)accessibilityLabel;	// 0x34c28d0d
- (id)controlFactory;	// 0x34c28d75
- (id)dataAtIndex:(long)index;	// 0x34c28db5
- (long)dataCount;	// 0x34c28d95
- (void)dealloc;	// 0x34c28c7d
- (id)hashForDataAtIndex:(long)index;	// 0x34c28ea1
// converted property getter: - (BOOL)isOrderReversed;	// 0x34c28d65
- (void)loadSupplementalItemsFromURL:(id)url;	// 0x34c290a1
- (void)moreItemSelected:(id)selected;	// 0x34c28ff5
- (void)registerMoreItem;	// 0x34c28f09
// converted property setter: - (void)setOrderReversed:(BOOL)reversed;	// 0x34c28d11
- (void)supplementalItemsLoaded:(id)loaded;	// 0x34c29319
- (void)supplementalItemsReceived:(id)received;	// 0x34c291c9
@end

