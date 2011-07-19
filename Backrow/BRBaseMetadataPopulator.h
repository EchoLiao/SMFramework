/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library
#import "BRMetadataPopulator.h"


__attribute__((visibility("hidden")))
@interface BRBaseMetadataPopulator : NSObject <BRMetadataPopulator> {
}
- (void)_populateMetadataLabels:(id *)labels andValues:(id *)values forAsset:(id)asset;	// 0x34d821bd
- (id)axMetadataFromAsset:(id)asset;	// 0x34d81ccd
- (id)copyrightForAsset:(id)asset;	// 0x34d81f39
- (void)populateLayer:(id)layer fromAsset:(id)asset;	// 0x34d81f85
- (void)populateLongDescriptionLayer:(id)layer fromAsset:(id)asset;	// 0x34d820b1
- (void)populateMetadataLabels:(id *)labels andValues:(id *)values forAsset:(id)asset;	// 0x34d81f3d
- (id)ratingForAsset:(id)asset;	// 0x34d81e25
- (id)starRatingForAsset:(id)asset;	// 0x34d81e69
- (id)summaryForAsset:(id)asset;	// 0x34d81ead
- (id)titleForAsset:(id)asset;	// 0x34d81de1
@end

