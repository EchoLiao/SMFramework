/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMediaAssetDerivesMediaURL.h"
#import "BRChapterGroupProvider.h"
#import "BRXMLMediaAsset.h"

@class NSMutableArray, ATVMerchant, NSDate, NSDictionary, ATVEventMediaAssetUpdater;

__attribute__((visibility("hidden")))
@interface ATVEventMediaAsset : BRXMLMediaAsset <BRMediaAssetDerivesMediaURL, BRChapterGroupProvider> {
@private
	NSDictionary *_data;	// 12 = 0xc
	ATVMerchant *_merchant;	// 16 = 0x10
	NSDate *_eventStart;	// 20 = 0x14
	NSMutableArray *_chapterGroups;	// 24 = 0x18
	ATVEventMediaAssetUpdater *_updater;	// 28 = 0x1c
}
@property(readonly, retain) NSMutableArray *chapterGroups;	// G=0x34caa32d; converted property
@property(retain, nonatomic) NSDate *eventStart;	// G=0x34caa465; S=0x34caa475; @synthesize=_eventStart
@property(retain, nonatomic) ATVMerchant *merchant;	// G=0x34caa431; S=0x34caa441; @synthesize=_merchant
- (id)initWithDictionary:(id)dictionary;	// 0x34ca9b25
- (id)_currentlyPlayingChapter;	// 0x34caa499
- (void)addOrReplaceChapterGroup:(id)group;	// 0x34caa1e5
- (id)chapterGroupAtIndex:(unsigned)index;	// 0x34caa2e1
- (unsigned)chapterGroupCount;	// 0x34caa2a1
// converted property getter: - (id)chapterGroups;	// 0x34caa32d
- (void)dealloc;	// 0x34ca9dbd
// declared property getter: - (id)eventStart;	// 0x34caa465
- (BOOL)hasChapterGroupAtIndex:(unsigned)index;	// 0x34caa2c1
- (id)imageProxy;	// 0x34caa35d
- (id)mediaDescription;	// 0x34caa40d
// declared property getter: - (id)merchant;	// 0x34caa431
- (id)networkBugImageProxy;	// 0x34caa381
- (id)resolveMediaURL;	// 0x34ca9e49
// declared property setter: - (void)setEventStart:(id)start;	// 0x34caa475
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x34caa441
- (id)startDate;	// 0x34caa199
- (id)title;	// 0x34caa3e9
@end
