/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library

@class NSMutableDictionary, BRMerchant, NSString, NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVSedonaCatalogItem : NSObject {
@private
	NSMutableDictionary *_catalogItem;	// 4 = 0x4
	NSMutableDictionary *_parentItem;	// 8 = 0x8
	BRMerchant *_merchant;	// 12 = 0xc
	int _itemType;	// 16 = 0x10
}
@property(assign) float averageUserRating;	// G=0x34c6b0b5; S=0x34c6b125; 
@property(readonly, assign) BOOL canBeQueued;	// G=0x34c6acfd; 
@property(readonly, assign) BOOL canBeRated;	// G=0x34c6ad35; 
@property(readonly, assign) NSArray *coverArt;	// G=0x34c6acd1; 
@property(readonly, assign) NSDictionary *data;	// G=0x34c6b569; @synthesize=_catalogItem
@property(readonly, assign) BOOL isMovie;	// G=0x34c6ae1d; 
@property(readonly, assign) BOOL isQueued;	// G=0x34c6ad6d; 
@property(readonly, assign) BOOL isTV;	// G=0x34c6ae71; 
@property(readonly, assign) BOOL isTVEpisode;	// G=0x34c6af05; 
@property(readonly, assign) BOOL isTVSeason;	// G=0x34c6aeb1; 
@property(readonly, assign) int ratingType;	// G=0x34c6b2f1; 
@property(readonly, assign) NSString *title;	// G=0x34c6aca5; 
@property(readonly, assign) unsigned userRatingCount;	// G=0x34c6b359; 
+ (id)itemWithCatalogItem:(id)catalogItem;	// 0x34c6ab45
- (id)init;	// 0x34c6ac21
- (id)initWithCatalogItem:(id)catalogItem;	// 0x34c6ab79
- (id)_neValueForKey:(id)key;	// 0x34c6b579
- (void)_queueRequestComplete:(id)complete;	// 0x34c6b645
- (void)_rateRequestComplete:(id)complete;	// 0x34c6b731
- (void)_setNeValue:(id)value forKey:(id)key;	// 0x34c6b5dd
- (void)addOrRemoveFromQueue;	// 0x34c6b42d
// declared property getter: - (float)averageUserRating;	// 0x34c6b0b5
// declared property getter: - (BOOL)canBeQueued;	// 0x34c6acfd
// declared property getter: - (BOOL)canBeRated;	// 0x34c6ad35
// declared property getter: - (id)coverArt;	// 0x34c6acd1
// declared property getter: - (id)data;	// 0x34c6b569
- (void)dealloc;	// 0x34c6ac39
// declared property getter: - (BOOL)isMovie;	// 0x34c6ae1d
// declared property getter: - (BOOL)isQueued;	// 0x34c6ad6d
// declared property getter: - (BOOL)isTV;	// 0x34c6ae71
// declared property getter: - (BOOL)isTVEpisode;	// 0x34c6af05
// declared property getter: - (BOOL)isTVSeason;	// 0x34c6aeb1
- (id)ratingTitle;	// 0x34c6814d
// declared property getter: - (int)ratingType;	// 0x34c6b2f1
- (id)requestForAction:(int)action;	// 0x34c6af99
// declared property setter: - (void)setAverageUserRating:(float)rating;	// 0x34c6b125
// declared property getter: - (id)title;	// 0x34c6aca5
- (id)titleForAction:(int)action;	// 0x34c6af59
// declared property getter: - (unsigned)userRatingCount;	// 0x34c6b359
@end

