/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NccpRequestMetrics : NSObject {
@private
	NSString *method;	// 4 = 0x4
	BOOL isParseSuccess;	// 8 = 0x8
	BOOL networkError;	// 9 = 0x9
	BOOL success;	// 10 = 0xa
	int errorCode;	// 12 = 0xc
	int actionId;	// 16 = 0x10
	NSString *errorUserText;	// 20 = 0x14
	int httpStatusCode;	// 24 = 0x18
	int nfErr;	// 28 = 0x1c
	long long startTime;	// 32 = 0x20
	long long endTime;	// 40 = 0x28
}
@property(readonly, assign) int actionId;	// G=0x34f14154; @synthesize
@property(readonly, assign) long long endTime;	// G=0x34f14554; @synthesize
@property(readonly, assign) int errorCode;	// G=0x34f14168; @synthesize
@property(readonly, assign) NSString *errorUserText;	// G=0x34f14140; @synthesize
@property(readonly, assign) int httpStatusCode;	// G=0x34f1412c; @synthesize
@property(readonly, assign) BOOL isParseSuccess;	// G=0x34f141a4; @synthesize
@property(readonly, assign) NSString *method;	// G=0x34f141b8; @synthesize
@property(readonly, assign) BOOL networkError;	// G=0x34f14190; @synthesize
@property(readonly, assign) int nfErr;	// G=0x34f14118; @synthesize
@property(readonly, assign) long long startTime;	// G=0x34f14514; @synthesize
@property(readonly, assign) BOOL success;	// G=0x34f1417c; @synthesize
- (id)initWithResponseData:(ResponseData *)responseData;	// 0x34f14594
// declared property getter: - (int)actionId;	// 0x34f14154
- (void)dealloc;	// 0x34f14498
// declared property getter: - (long long)endTime;	// 0x34f14554
// declared property getter: - (int)errorCode;	// 0x34f14168
// declared property getter: - (id)errorUserText;	// 0x34f14140
// declared property getter: - (int)httpStatusCode;	// 0x34f1412c
// declared property getter: - (BOOL)isParseSuccess;	// 0x34f141a4
- (id)jsonString;	// 0x34f141cc
// declared property getter: - (id)method;	// 0x34f141b8
// declared property getter: - (BOOL)networkError;	// 0x34f14190
// declared property getter: - (int)nfErr;	// 0x34f14118
// declared property getter: - (long long)startTime;	// 0x34f14514
// declared property getter: - (BOOL)success;	// 0x34f1417c
@end

