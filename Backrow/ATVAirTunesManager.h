/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@class NSMutableArray;
@protocol ATVAirTunesManagerDelegate;

@interface ATVAirTunesManager : BRSingleton {
@private
	id<ATVAirTunesManagerDelegate> _delegate;	// 4 = 0x4
	NSMutableArray *_speakersPendingConnection;	// 8 = 0x8
	NSMutableArray *_speakersPendingDisconnection;	// 12 = 0xc
}
+ (void)setSingleton:(id)singleton;	// 0x34beae95
+ (id)singleton;	// 0x34beae89
- (id)init;	// 0x34beaea1
- (void)_connectionFailedToAuth:(id)auth;	// 0x34beb8a5
- (void)_connectionFinished:(id)finished;	// 0x34beb871
- (void)_connectionStarted:(id)started;	// 0x34beb765
- (id)_connectionStatus;	// 0x34beb6cd
- (void)_retryConnection:(id)connection;	// 0x34beb96d
- (id)_supportedMediaTypes;	// 0x34beb5e9
- (BOOL)airTunesAvailableForAsset:(id)asset;	// 0x34beb091
- (id)cachedPasswordForSpeaker:(id)speaker;	// 0x34beb489
- (void)connectSpeaker:(id)speaker withPassword:(id)password saved:(BOOL)saved andDisconnectOthers:(BOOL)others;	// 0x34beb29d
- (void)connectionFinishedForSpeaker:(id)speaker;	// 0x34beb385
- (void)connectionStartedForSpeaker:(id)speaker;	// 0x34beb339
- (void)dealloc;	// 0x34beafc9
- (void)disconnectSpeaker:(id)speaker;	// 0x34beb2f9
- (void)disconnectionFinishedForSpeaker:(id)speaker;	// 0x34beb41d
- (void)disconnectionStartedForSpeaker:(id)speaker;	// 0x34beb3d1
- (int)numRemoteSpeakers;	// 0x34beb0f5
- (id)remoteSpeakerInfoAtIndex:(int)index;	// 0x34beb115
- (id)remoteSpeakerInfoForAllConnectedSpeakers;	// 0x34beb1b1
- (id)remoteSpeakerInfoForSpeakerID:(id)speakerID;	// 0x34beb135
- (void)setAirTunesManagerDelegate:(id)delegate;	// 0x34beb059
- (void)setCachedPassword:(id)password forSpeaker:(id)speaker;	// 0x34beb505
- (void)setControlEnabledFromRemoteSpeakers:(BOOL)remoteSpeakers;	// 0x34beb319
- (id)speakersWithConnectionsPending;	// 0x34beb469
- (id)speakersWithDisconnectionsPending;	// 0x34beb479
@end
