/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRImageProxy.h"
#import <Foundation/Foundation.h> // Unknown library

@class NSString;

@interface BRInternetRadioImageProxy : NSObject <BRImageProxy> {
@private
	NSString *_category;	// 4 = 0x4
}
- (id)initWithCategory:(id)category;	// 0x34cdf99d
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x34cdfb99
- (void)dealloc;	// 0x34cdf9ed
- (id)defaultImageForImageSize:(int)imageSize;	// 0x34cdfb49
- (id)imageForImageSize:(int)imageSize;	// 0x34cdfa6d
- (id)imageIDForImageSize:(int)imageSize;	// 0x34cdfa31
- (id)object;	// 0x34cdfb9d
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x34cdfb81
@end

