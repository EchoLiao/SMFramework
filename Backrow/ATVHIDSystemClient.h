/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <Foundation/Foundation.h> // Unknown library

@class NSArray;

@interface ATVHIDSystemClient : NSObject {
@private
	IOHIDEventSystemClientRef _hidSystemClient;	// 4 = 0x4
	IOHIDServiceClientRef _appleTVIRService;	// 8 = 0x8
	NSArray *_remotes;	// 12 = 0xc
}
@property(readonly, retain) NSArray *remotes;	// G=0x34c6fead; converted property
+ (id)sharedInstance;	// 0x34c6f809
- (id)init;	// 0x34c6f845
- (long)_init;	// 0x34c6f89d
- (void)cancelLearning;	// 0x34c70175
- (void)commitLearningRemote;	// 0x34c70055
- (void)dealloc;	// 0x34c6fa25
- (void)deleteRemote:(id)remote;	// 0x34c6ff59
- (BOOL)isPairedWithAppleRemote;	// 0x34c6fcdd
- (id)mcuVersion;	// 0x34c6fcad
- (void)pairAppleRemote;	// 0x34c6fd09
- (void)processHIDEvent:(IOHIDEventRef)event;	// 0x34c6fa79
- (id)propertyForKey:(id)key error:(id *)error;	// 0x34c6fe11
// converted property getter: - (id)remotes;	// 0x34c6fead
- (void)rereadRemotes;	// 0x34c6ff05
- (void)resetLearningRemote;	// 0x34c70025
- (void)saveLearning;	// 0x34c70131
- (void)setName:(id)name ofRemote:(id)remote;	// 0x34c6ffb1
- (BOOL)setProperty:(id)property forKey:(id)key error:(id *)error;	// 0x34c6fe41
- (void)setSILState_HardwareProblem;	// 0x34c70219
- (void)setSILState_Off;	// 0x34c701a9
- (void)setSILState_On;	// 0x34c701c5
- (void)setSILState_RejectedCommand;	// 0x34c701fd
- (void)setSILState_Starting;	// 0x34c701e1
- (void)setSILToState:(id)state;	// 0x34c70235
- (void)sleepDisplay;	// 0x34c6fdb1
- (void)startLearningUsagePage:(unsigned)page usageCode:(unsigned)code forRemoteUUID:(id)remoteUUID;	// 0x34c70095
- (void)unpairAppleRemote;	// 0x34c6fd5d
- (void)wakeDisplay;	// 0x34c6fde1
@end

