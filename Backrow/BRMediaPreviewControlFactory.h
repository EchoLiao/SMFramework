/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library
#import "BRControlFactory.h"

@class BRMediaType;

@interface BRMediaPreviewControlFactory : NSObject <BRControlFactory> {
@private
	BRMediaType *_missingType;	// 4 = 0x4
	BOOL _deletterboxArtwork;	// 8 = 0x8
	BOOL _shouldShowMetadata;	// 9 = 0x9
	BOOL _showMetadataImmediately;	// 10 = 0xa
}
@property(retain) BRMediaType *missingType;	// G=0x34cefa71; S=0x34cefa35; converted property
@property(assign) BOOL previewShouldShowMetadata;	// G=0x34cefa91; S=0x34cefa81; converted property
@property(assign) BOOL previewShouldShowMetadataImmediately;	// G=0x34cefab1; S=0x34cefaa1; converted property
@property(assign) BOOL shouldDeletterboxArtwork;	// G=0x34cefad1; S=0x34cefac1; converted property
+ (id)factory;	// 0x34cef265
+ (id)filterProxies:(id)proxies;	// 0x34cef2a5
- (id)init;	// 0x34cef4bd
- (id)_coverArtControllerForAssets:(id)assets;	// 0x34cefbd9
- (id)_metadataControllerForAsset:(id)asset;	// 0x34cefced
- (id)_paradeControllerForAssets:(id)assets;	// 0x34cefd79
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x34cefae1
- (void)dealloc;	// 0x34cef525
// converted property getter: - (id)missingType;	// 0x34cefa71
- (id)previewControlForAsset:(id)asset;	// 0x34cef569
- (id)previewControlForAssets:(id)assets;	// 0x34cef635
- (id)previewControlForImageProxies:(id)imageProxies;	// 0x34cef8dd
- (id)previewControlForImageProxy:(id)imageProxy;	// 0x34cef5a5
// converted property getter: - (BOOL)previewShouldShowMetadata;	// 0x34cefa91
// converted property getter: - (BOOL)previewShouldShowMetadataImmediately;	// 0x34cefab1
// converted property setter: - (void)setMissingType:(id)type;	// 0x34cefa35
// converted property setter: - (void)setPreviewShouldShowMetadata:(BOOL)showMetadata;	// 0x34cefa81
// converted property setter: - (void)setPreviewShouldShowMetadataImmediately:(BOOL)showMetadataImmediately;	// 0x34cefaa1
// converted property setter: - (void)setShouldDeletterboxArtwork:(BOOL)deletterboxArtwork;	// 0x34cefac1
// converted property getter: - (BOOL)shouldDeletterboxArtwork;	// 0x34cefad1
@end

