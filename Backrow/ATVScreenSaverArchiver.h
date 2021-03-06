/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library
#import "AppleTV-Structs.h"


@interface ATVScreenSaverArchiver : NSObject {
}
+ (void)_dataClientConnectionHandler:(id)handler;	// 0x34c63929
+ (id)_iTunesServerIDFromArchivedServerID:(id)archivedServerID;	// 0x34c63b59
+ (id)_parentalControlVerificationForArchive:(id)archive;	// 0x34c63a2d
+ (void)_postScreenSaverDataReadyNotificationForCollection:(id)collection;	// 0x34c631e1
+ (id)_providerForCollection:(id)collection;	// 0x34c632ed
+ (BOOL)_queryScreenSaverDataForArchive:(id)archive useDefaultServer:(BOOL)server connect:(BOOL)connect;	// 0x34c63531
+ (id)archiveForCollection:(id)collection;	// 0x34c62d39
+ (ATVMediaQueryRef)createItemsQueryForCollection:(CFNumberRef)collection;	// 0x34c630f9
+ (void)requestScreenSaverFromArchive:(id)archive;	// 0x34c62959
+ (void)requestScreenSaverFromArchive:(id)archive connect:(BOOL)connect;	// 0x34c62971
+ (id)screenSaverCollectionIDFromArchive:(id)archive;	// 0x34c62c5d
+ (id)screenSaverCollectionNameFromArchive:(id)archive;	// 0x34c62c01
+ (id)screenSaverServerIDFromArchive:(id)archive;	// 0x34c62cf5
+ (id)screenSaverTypeFromArchive:(id)archive;	// 0x34c62cb9
@end

