/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVMusicStoreItemDetailController.h"

@protocol BRMediaAsset;

@interface ATVMusicStoreAssetController : ATVMusicStoreItemDetailController {
@private
	id<BRMediaAsset> _asset;	// 92 = 0x5c
}
- (id)initWithAsset:(id)asset;	// 0x34c16051
- (id)_actionProviders;	// 0x34c16605
- (void)_assetDeleted:(id)deleted;	// 0x34c168f5
- (BOOL)_assetIsExpired:(id)expired;	// 0x34c168c9
- (void)_assetPlayable:(id)playable;	// 0x34c1688d
- (void)_setCopyrightText;	// 0x34c164e1
- (void)_setImageProxy;	// 0x34c165bd
- (void)_setMetadataControl;	// 0x34c16811
- (void)_setupDetailedControl;	// 0x34c16475
- (id)_storeID;	// 0x34c16525
- (void)_verifyAsset;	// 0x34c16951
- (id)asset;	// 0x34c163d9
- (void)controlWasActivated;	// 0x34c162e1
- (void)dealloc;	// 0x34c1636d
- (void)fetchRelatedContent;	// 0x34c163e9
@end
