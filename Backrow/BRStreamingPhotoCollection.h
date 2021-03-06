/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRPhotoMediaCollection.h"
#import "AppleTV-Structs.h"

@class BRImageManager, NSArray, BRMediaCollectionType;

@interface BRStreamingPhotoCollection : BRPhotoMediaCollection {
@private
	ATVMediaCollectionRef _collection;	// 44 = 0x2c
	NSArray *_atvItems;	// 48 = 0x30
	ATVDataClientRef _dataClient;	// 52 = 0x34
	NSArray *_assets;	// 56 = 0x38
	BRMediaCollectionType *_type;	// 60 = 0x3c
	BOOL _useForScreenSaver;	// 64 = 0x40
}
@property(readonly, assign) ATVDataClientRef dataClient;	// G=0x34ce6741; converted property
@property(readonly, assign) BRImageManager *preferredImageManager;	// G=0x34ce6771; 
@property(assign) BOOL useForScreenSaver;	// G=0x34ce6761; S=0x34ce6751; converted property
+ (id)collectionWithATVMediaCollection:(ATVMediaCollectionRef)atvmediaCollection;	// 0x34ce5d65
- (id)initWithATVItems:(id)atvitems dataClient:(ATVDataClientRef)client;	// 0x34ce5dfd
- (id)initWithATVMediaCollection:(ATVMediaCollectionRef)atvmediaCollection;	// 0x34ce5d99
- (ATVMediaCollectionRef)atvCollection;	// 0x34ce6261
- (id)collectionID;	// 0x34ce6141
- (id)collectionName;	// 0x34ce64c9
- (id)collectionType;	// 0x34ce64dd
- (int)count;	// 0x34ce61ed
// converted property getter: - (ATVDataClientRef)dataClient;	// 0x34ce6741
- (void)dealloc;	// 0x34ce5e65
- (id)description;	// 0x34ce5ee5
- (id)imageProxy;	// 0x34ce60f1
- (BOOL)isLibrary;	// 0x34ce66a1
- (BOOL)isLocal;	// 0x34ce6661
- (id)keyAssetID;	// 0x34ce6665
- (id)mediaAssets;	// 0x34ce6271
- (id)mediaTypes;	// 0x34ce6705
- (id)photoAssets;	// 0x34ce6425
// declared property getter: - (id)preferredImageManager;	// 0x34ce6771
// converted property setter: - (void)setUseForScreenSaver:(BOOL)screenSaver;	// 0x34ce6751
- (id)title;	// 0x34ce648d
// converted property getter: - (BOOL)useForScreenSaver;	// 0x34ce6761
@end

