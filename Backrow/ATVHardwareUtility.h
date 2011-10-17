/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"


@interface ATVHardwareUtility : BRSingleton {
@private
	BOOL _isEmbeddedHardwareDevice;	// 4 = 0x4
}
+ (BOOL)bootedFromRecoveryPartition;	// 0x34bf8065
+ (id)configurationInfo;	// 0x34bf80dd
+ (BOOL)isEmbeddedHardwareDevice;	// 0x34bf8039
+ (id)mediaFolderPath;	// 0x34bf8069
+ (BOOL)pushSeedData;	// 0x34bf8409
+ (BOOL)pushSeedFileAtPath:(id)path;	// 0x34bf8411
+ (BOOL)pushSeedSyslog;	// 0x34bf840d
+ (BOOL)reboot;	// 0x34bf80ad
+ (void)setSILState_HardwareProblem;	// 0x34bf800d
+ (void)setSILState_Off;	// 0x34bf7f5d
+ (void)setSILState_On;	// 0x34bf7f89
+ (void)setSILState_RejectedCommand;	// 0x34bf7fe1
+ (void)setSILState_Starting;	// 0x34bf7fb5
+ (void)setSingleton:(id)singleton;	// 0x34bf7f51
+ (id)singleton;	// 0x34bf7f45
- (id)init;	// 0x34bf8415
- (BOOL)_determineIfEmbeddedHardwareDevice;	// 0x34bf8471
- (BOOL)_isEmbeddedHardwareDevice;	// 0x34bf8461
@end
