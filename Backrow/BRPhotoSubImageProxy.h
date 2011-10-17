/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRATVDataImageProxy.h"

@class NSString;

@interface BRPhotoSubImageProxy : BRATVDataImageProxy {
@private
	CGRect _rect;	// 20 = 0x14
	NSString *_rectString;	// 36 = 0x24
	int _requestedImageSize;	// 40 = 0x28
}
+ (id)subImageProxyWithMediaObject:(void *)mediaObject dataClient:(ATVDataClientRef)client rect:(CGRect)rect;	// 0x34ce1409
- (id)initWithMediaObject:(void *)mediaObject dataClient:(ATVDataClientRef)client rect:(CGRect)rect;	// 0x34ce145d
- (void)_imageLoadFailed:(id)failed;	// 0x34ce1a59
- (void)_imageLoaded:(id)loaded;	// 0x34ce1895
- (id)_rectString;	// 0x34ce17f9
- (void)dealloc;	// 0x34ce14b1
- (id)imageForImageSize:(int)imageSize;	// 0x34ce15dd
- (id)imageIDForImageSize:(int)imageSize;	// 0x34ce151d
@end
