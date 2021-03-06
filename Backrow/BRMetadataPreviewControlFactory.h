/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControlHeightFactory.h"
#import <Foundation/Foundation.h> // Unknown library
#import "BRControlFactory.h"


@interface BRMetadataPreviewControlFactory : NSObject <BRControlFactory, BRControlHeightFactory> {
}
+ (id)factory;	// 0x34cefe19
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x34cefe49
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x34ceff39
@end

