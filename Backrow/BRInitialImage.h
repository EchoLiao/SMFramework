/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRImage.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface BRInitialImage : BRImage {
@private
	NSData *_data;	// 44 = 0x2c
}
+ (id)initialImageWithData:(id)data;	// 0x34dcacb5
- (void)dealloc;	// 0x34dcad35
- (void)purgeRawData;	// 0x34dcad89
- (id)rawData;	// 0x34dcad79
@end

