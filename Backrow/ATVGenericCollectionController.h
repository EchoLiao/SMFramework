/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRViewController.h"

@class BRMediaMenuView, ATVMerchant, ATVURLDocument, NSString, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVGenericCollectionController : BRViewController {
@private
	BRMediaMenuView *_mediaMenuView;	// 64 = 0x40
	NSDictionary *_data;	// 68 = 0x44
	ATVMerchant *_merchant;	// 72 = 0x48
	long _lastPreviewIndex;	// 76 = 0x4c
	ATVURLDocument *_documentForPreviewChange;	// 80 = 0x50
	NSString *_previousLoadPreviewURL;	// 84 = 0x54
}
@property(readonly, assign) NSDictionary *data;	// G=0x34ca2df1; @synthesize=_data
@property(readonly, assign) BRMediaMenuView *mediaMenuView;	// G=0x34ca2de1; @synthesize=_mediaMenuView
- (id)initWithDictionary:(id)dictionary;	// 0x34ca2729
- (void)_cancelAllDocumentRequests;	// 0x34ca33b9
- (void)_cancelDocumentRequest:(id *)request;	// 0x34ca3345
- (void)_cancelPreviousLoadPreviewPerformSelector;	// 0x34ca33d9
- (id)_itemAtIndexPath:(id)indexPath;	// 0x34ca3291
- (void)_loadPreviewForURL:(id)url;	// 0x34ca2eb1
- (void)_previewDocumentReadyNotification:(id)notification;	// 0x34ca2ff9
- (void)_updatePreviewWithPropertyList:(id)propertyList;	// 0x34ca2e01
// declared property getter: - (id)data;	// 0x34ca2df1
- (void)dealloc;	// 0x34ca2971
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x34ca2c71
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x34ca2c59
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x34ca2c6d
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x34ca2c0d
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x34ca2bb1
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x34ca2b15
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x34ca2a69
// declared property getter: - (id)mediaMenuView;	// 0x34ca2de1
- (long)numberOfSectionsInList:(id)list;	// 0x34ca2a25
@end

