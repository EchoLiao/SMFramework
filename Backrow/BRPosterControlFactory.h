/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControlFactory.h"
#import "BRControlHeightFactory.h"
#import <Foundation/Foundation.h> // Unknown library

@class BRImage;

@interface BRPosterControlFactory : NSObject <BRControlFactory, BRControlHeightFactory> {
@private
	BRImage *_defaultImage;	// 4 = 0x4
}
+ (id)factory;	// 0x34cf048d
- (id)init;	// 0x34cf04bd
- (id)_posterForGridFromAsset:(id)asset currentControl:(id)control requestedBy:(id)by;	// 0x34cf08bd
- (id)_posterForShelfFromAsset:(id)asset currentControl:(id)control requestedBy:(id)by;	// 0x34cf0901
- (id)_posterFromAsset:(id)asset currentControl:(id)control requestedBy:(id)by;	// 0x34cf0951
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x34cf0539
- (void)dealloc;	// 0x34cf04f5
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x34cf07a9
- (void)setDefaultImage:(id)image;	// 0x34cf0885
@end

