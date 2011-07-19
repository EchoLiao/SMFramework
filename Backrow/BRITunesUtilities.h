/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "NSObject.h"


@protocol BRITunesUtilities <NSObject>
- (BOOL)attemptAuthorizationForAsset:(id)asset error:(id *)error;
- (void)deauthorizeAssetIfNecessary:(id)necessary;
- (id)iTunesCompareAscending:(BOOL)ascending withKey:(id)key;
- (int)iTunesCompareString:(id)string toString:(id)string2;
- (id)keyBagPathForMachineID:(unsigned long long)machineID;
- (unsigned long)randomPlaylistIndex:(unsigned long)index;
- (id)rentalGUID;
- (id)sortStringForString:(id)string;
- (id)urlSuitableForPlayback:(id)playback;
@end

