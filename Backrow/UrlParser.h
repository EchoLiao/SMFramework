/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UrlParser : NSObject {
@private
	NSMutableDictionary *dict;	// 4 = 0x4
}
- (id)initWithString:(id)string;	// 0x34e07654
- (void)dealloc;	// 0x34e075f4
- (int)intValue:(id)value;	// 0x34e07568
- (id)urlDecodedValue:(id)value;	// 0x34e0752c
- (id)value:(id)value;	// 0x34e075a0
@end
