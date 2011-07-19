/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library

@class NSString, NSDictionary;

__attribute__((visibility("hidden")))
@interface OAToken : NSObject {
@private
	NSString *key;	// 4 = 0x4
	NSString *secret;	// 8 = 0x8
	NSDictionary *fields;	// 12 = 0xc
}
@property(retain) NSDictionary *fields;	// G=0x34e056c0; S=0x34e05748; @synthesize
@property(copy) NSString *key;	// G=0x34e05680; S=0x34e056e0; @synthesize
@property(copy) NSString *secret;	// G=0x34e056a0; S=0x34e05714; @synthesize
+ (id)tokenWithHTTPResponseBody:(id)httpresponseBody;	// 0x34e051b8
+ (id)tokenWithKey:(id)key secret:(id)secret;	// 0x34e05208
- (id)init;	// 0x34e052dc
- (id)initWithHTTPResponseBody:(id)httpresponseBody;	// 0x34e053e0
- (id)initWithKey:(id)key secret:(id)secret;	// 0x34e05260
- (void)dealloc;	// 0x34e0535c
// declared property getter: - (id)fields;	// 0x34e056c0
// declared property getter: - (id)key;	// 0x34e05680
// declared property getter: - (id)secret;	// 0x34e056a0
// declared property setter: - (void)setFields:(id)fields;	// 0x34e05748
// declared property setter: - (void)setKey:(id)key;	// 0x34e056e0
// declared property setter: - (void)setSecret:(id)secret;	// 0x34e05714
@end

