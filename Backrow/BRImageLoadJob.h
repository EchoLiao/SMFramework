/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library

@class NSURL, NSString, NSDate, NSDictionary, NSURLConnection;
@protocol BRMusicStoreImageDecryptionAgent;

__attribute__((visibility("hidden")))
@interface BRImageLoadJob : NSObject {
@private
	NSString *_imageName;	// 4 = 0x4
	NSURL *_url;	// 8 = 0x8
	NSDictionary *_headerFields;	// 12 = 0xc
	NSURLConnection *_connection;	// 16 = 0x10
	NSDate *_requestDate;	// 20 = 0x14
	BOOL _writeImage;	// 24 = 0x18
	id<BRMusicStoreImageDecryptionAgent> _decryptionAgent;	// 28 = 0x1c
}
@property(retain) NSURLConnection *connection;	// G=0x34dcaa45; S=0x34dcaa55; converted property
@property(readonly, retain) NSDictionary *headerFields;	// G=0x34dcaa35; converted property
@property(readonly, retain) NSDate *requestDate;	// G=0x34dcaa8d; converted property
@property(readonly, retain) NSURL *url;	// G=0x34dcaa15; converted property
@property(readonly, assign) BOOL writeImage;	// G=0x34dcaa9d; converted property
- (id)initWithName:(id)name url:(id)url headerFields:(id)fields decryptionAgent:(id)agent writeImage:(BOOL)image;	// 0x34dca889
// converted property getter: - (id)connection;	// 0x34dcaa45
- (void)dealloc;	// 0x34dca965
- (id)decryptionAgent;	// 0x34dcaa25
// converted property getter: - (id)headerFields;	// 0x34dcaa35
- (id)name;	// 0x34dcaa05
// converted property getter: - (id)requestDate;	// 0x34dcaa8d
// converted property setter: - (void)setConnection:(id)connection;	// 0x34dcaa55
// converted property getter: - (id)url;	// 0x34dcaa15
// converted property getter: - (BOOL)writeImage;	// 0x34dcaa9d
@end

