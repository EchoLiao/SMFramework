/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRBackgroundTask.h"


__attribute__((visibility("hidden")))
@interface ATVSWUpdateCheckTask : BRBackgroundTask {
}
+ (BOOL)_shouldPerformCheck;	// 0x34c5f8f9
+ (double)checkAgainDelay;	// 0x34c5f7dd
+ (double)normalCheckInterval;	// 0x34c5f63d
+ (void)scheduleCheckAgainSoonTask;	// 0x34c5f725
+ (void)scheduleNormalCheckTask;	// 0x34c5f595
+ (void)setCheckAgainDelay:(double)delay;	// 0x34c5f835
+ (void)setNormalCheckInterval:(double)interval;	// 0x34c5f695
- (BOOL)perform:(id)perform;	// 0x34c5f8c5
@end

