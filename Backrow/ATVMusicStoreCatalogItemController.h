/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRController.h"

@class NSDictionary, BRMerchant;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreCatalogItemController : BRController {
@private
	NSDictionary *_itemDictionary;	// 60 = 0x3c
	BRMerchant *_merchant;	// 64 = 0x40
}
@property(retain) NSDictionary *itemDictionary;	// G=0x34c20ec1; S=0x34c20ed1; converted property
@property(readonly, retain) BRMerchant *merchant;	// G=0x34c20f09; converted property
- (id)initWithItemDictionary:(id)itemDictionary;	// 0x34c20d25
- (void)augmentRelatedContentItemsFromPage:(id)page;	// 0x34c21249
- (void)dealloc;	// 0x34c20e55
- (void)fetchRelatedContent;	// 0x34c20f41
- (void)fetchRelatedContentFromURL:(id)url;	// 0x34c20fe9
// converted property getter: - (id)itemDictionary;	// 0x34c20ec1
// converted property getter: - (id)merchant;	// 0x34c20f09
- (void)relatedContentLoaded:(id)loaded;	// 0x34c20f19
- (void)relatedContentReceived:(id)received;	// 0x34c210f1
// converted property setter: - (void)setItemDictionary:(id)dictionary;	// 0x34c20ed1
@end

