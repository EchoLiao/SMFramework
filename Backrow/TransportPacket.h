/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library

@class Buffer;

__attribute__((visibility("hidden")))
@interface TransportPacket : NSObject {
@private
	Buffer *buffer;	// 4 = 0x4
	int payloadLength;	// 8 = 0x8
	BOOL objectID[17];	// 12 = 0xc
}
- (id)initWithData:(char *)data length:(unsigned)length;	// 0x34de8870
- (id)initWithData:(char *)data offset:(unsigned)offset length:(unsigned)length;	// 0x34de88fc
- (void)dealloc;	// 0x34de889c
- (id)getError;	// 0x34de883c
- (char *)getHeaderObjectID;	// 0x34de8828
- (char *)getPayload;	// 0x34de8844
- (int)getPayloadLength;	// 0x34de8814
@end

