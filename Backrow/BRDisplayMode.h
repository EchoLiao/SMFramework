/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library

@class CADisplayMode;

@interface BRDisplayMode : NSObject {
@private
	CADisplayMode *_displayMode;	// 4 = 0x4
}
@property(readonly, retain) CADisplayMode *displayMode;	// G=0x34ce8115; converted property
- (id)initWithDisplayMode:(id)displayMode;	// 0x34ce7ff5
- (unsigned long)bitsPerPixel;	// 0x34ce816d
- (void)dealloc;	// 0x34ce8041
- (id)description;	// 0x34ce80f5
// converted property getter: - (id)displayMode;	// 0x34ce8115
- (unsigned long)height;	// 0x34ce814d
- (BOOL)interlaced;	// 0x34ce8171
- (BOOL)isEqual:(id)equal;	// 0x34ce8085
- (double)refreshRate;	// 0x34ce8175
- (BOOL)safe;	// 0x34ce8125
- (BOOL)safeForHardware;	// 0x34ce8129
- (unsigned long)width;	// 0x34ce812d
@end

