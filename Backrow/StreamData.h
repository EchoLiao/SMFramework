/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface StreamData : NSObject {
@private
	long long fileSize;	// 4 = 0x4
	NSString *fileID;	// 12 = 0xc
	long long creationTime;	// 16 = 0x10
	long long preroll;	// 24 = 0x18
	long long duration;	// 32 = 0x20
	long long wrapInterval;	// 40 = 0x28
	int alignmentOffset;	// 48 = 0x30
	long long toolsVersion;	// 52 = 0x34
}
- (id)initWithBuffer:(id)buffer;	// 0x34de7bb0
- (void)dealloc;	// 0x34de7b50
- (int)getAlignmentOffset;	// 0x34de7b24
- (long long)getCreationTime;	// 0x34de7ac4
- (long long)getDuration;	// 0x34de7af4
- (id)getFileID;	// 0x34de7ab0
- (int)getFileSize;	// 0x34de7a9c
- (long long)getPreroll;	// 0x34de7adc
- (long long)getToolsVersion;	// 0x34de7b38
- (long long)getWrapInterval;	// 0x34de7b0c
@end

