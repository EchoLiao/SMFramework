/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <Foundation/Foundation.h> // Unknown library

@class NSString, NSArray;
@protocol BRControlFactory;

@interface BRMediaObjectProvider : NSObject <BRProvider> {
@private
	id<BRControlFactory> _controlFactory;	// 4 = 0x4
	NSArray *_mediaObjects;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
}
@property(retain) id controlFactory;	// G=0x34d85c29; S=0x34d85bcd; converted property
@property(retain) NSArray *mediaObjects;	// G=0x34d85bbd; S=0x34d85b85; converted property
@property(retain) NSString *name;	// G=0x34d85cf9; S=0x34d85cc1; converted property
+ (id)providerWithMediaObjects:(id)mediaObjects controlFactory:(id)factory;	// 0x34d85ab1
- (long)controlCount;	// 0x34d85cad
// converted property getter: - (id)controlFactory;	// 0x34d85c29
- (id)dataAtIndex:(long)index;	// 0x34d85c39
- (long)dataCount;	// 0x34d85c05
- (void)dealloc;	// 0x34d85b1d
- (id)hashForDataAtIndex:(long)index;	// 0x34d85c61
// converted property getter: - (id)mediaObjects;	// 0x34d85bbd
// converted property getter: - (id)name;	// 0x34d85cf9
// converted property setter: - (void)setControlFactory:(id)factory;	// 0x34d85bcd
// converted property setter: - (void)setMediaObjects:(id)objects;	// 0x34d85b85
// converted property setter: - (void)setName:(id)name;	// 0x34d85cc1
@end

