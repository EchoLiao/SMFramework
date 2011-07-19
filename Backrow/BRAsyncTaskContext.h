/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library

@class NSString, NSMutableArray;

@interface BRAsyncTaskContext : NSObject {
@private
	int _maxRunningTasks;	// 4 = 0x4
	int _numRunningTasks;	// 8 = 0x8
	NSMutableArray *_taskQueue;	// 12 = 0xc
	NSMutableArray *_allTasks;	// 16 = 0x10
	NSString *_name;	// 20 = 0x14
}
+ (id)defaultContext;	// 0x34dba439
+ (void)initialize;	// 0x34dba1c1
- (id)initWithMaxTasks:(int)maxTasks;	// 0x34dba221
- (id)initWithMaxTasks:(int)maxTasks name:(id)name;	// 0x34dba239
- (void)_addManagerObserverForTask:(id)task;	// 0x34dba869
- (void)_cancelAllTasks;	// 0x34dbad59
- (void)_removeManagerObserverForTask:(id)task;	// 0x34dba8b9
- (void)_scheduleNextTask:(id)task;	// 0x34dbaa15
- (void)_taskComplete:(id)complete;	// 0x34dba8fd
- (void)_threadDeath:(id)death;	// 0x34dbac09
- (void)cancelTask:(id)task;	// 0x34dba6c9
- (void)cancelTaskWithIdentifier:(id)identifier;	// 0x34dba445
- (void)dealloc;	// 0x34dba34d
- (id)description;	// 0x34dba3dd
- (void)scheduleTask:(id)task;	// 0x34dba579
@end

