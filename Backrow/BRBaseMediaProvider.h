/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMediaProvider.h"
#import <Foundation/Foundation.h> // Unknown library
#import "BRMediaLoading.h"


@interface BRBaseMediaProvider : NSObject <BRMediaProvider, BRMediaLoading> {
@private
	int _providerStatus;	// 4 = 0x4
	BOOL _passwordProtected;	// 8 = 0x8
}
@property(assign) BOOL isPasswordProtected;	// G=0x34d9ed05; S=0x34d9ed15; converted property
@property(assign) int status;	// G=0x34d9eb9d; S=0x34d9ebc5; converted property
+ (id)errorStateOfProvider:(id)provider;	// 0x34d9e8fd
+ (id)mediaProvider;	// 0x34d9e935
- (BOOL)autoload;	// 0x34d9ece9
- (long)countOfObjectsWithMediaType:(id)mediaType;	// 0x34d9ed3d
- (void)dealloc;	// 0x34d9e96d
- (int)errorCodeForProvider;	// 0x34d9ebc1
- (void)flush;	// 0x34d9ed39
// converted property getter: - (BOOL)isPasswordProtected;	// 0x34d9ed05
- (int)load;	// 0x34d9ecb9
- (int)loadWithUsername:(id)username password:(id)password;	// 0x34d9ecc9
- (id)mediaForEntityName:(id)entityName;	// 0x34d9e9f9
- (id)mediaTypes;	// 0x34d9e9d9
- (id)objectsWithEntityName:(id)entityName qualifiedByPredicate:(id)predicate sortDescriptors:(id)descriptors error:(id *)error;	// 0x34d9ea19
- (id)objectsWithEntityName:(id)entityName qualifiedByPredicate:(id)predicate sortDescriptors:(id)descriptors excludeHiddenObjects:(BOOL)objects error:(id *)error;	// 0x34d9ea45
- (id)providerID;	// 0x34d9e9c1
- (id)providerName;	// 0x34d9e9c5
- (void)reset;	// 0x34d9eced
// converted property setter: - (void)setIsPasswordProtected:(BOOL)aProtected;	// 0x34d9ed15
// converted property setter: - (void)setStatus:(int)status;	// 0x34d9ebc5
// converted property getter: - (int)status;	// 0x34d9eb9d
- (int)unload;	// 0x34d9ecd9
@end

