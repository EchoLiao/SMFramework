/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <Foundation/Foundation.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NflxhlsAuthenticationPrimer : NSObject {
@private
	BOOL myPassword[100];	// 4 = 0x4
}
- (id)init;	// 0x34e06e30
- (BOOL)connection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;	// 0x34e073d8
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x34e07100
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;	// 0x34e07178
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x34e06ddc
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x34e07158
- (void)connectionDidFinishLoading:(id)connection;	// 0x34e07138
- (void)dealloc;	// 0x34e06df4
- (char *)getGeneratedPassword;	// 0x34e06de0
- (void)logTrusts:(SecTrust *)trusts;	// 0x34e06f2c
- (void)prime;	// 0x34e06fd8
- (void)primeAuthorization;	// 0x34e06ff4
@end

