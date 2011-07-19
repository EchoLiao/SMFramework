/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library

@class NSString;

@interface BRDeviceKeyboardMessage : NSObject {
@private
	NSString *_string;	// 4 = 0x4
	NSString *_title;	// 8 = 0x8
	NSString *_subText;	// 12 = 0xc
	unsigned long long _sessionID;	// 16 = 0x10
	int _msgType;	// 24 = 0x18
	int _keyboardType;	// 28 = 0x1c
	BOOL _secureText;	// 32 = 0x20
	unsigned _version;	// 36 = 0x24
}
@property(assign) int keyboardType;	// G=0x34dbfedd; S=0x34dbfeed; converted property
@property(assign) int msgType;	// G=0x34dbfebd; S=0x34dbfecd; converted property
@property(assign) BOOL secureText;	// G=0x34dbff49; S=0x34dbff59; converted property
@property(assign) unsigned long long sessionID;	// G=0x34dbfefd; S=0x34dbff15; converted property
@property(retain) NSString *string;	// G=0x34dbfde5; S=0x34dbfdf5; converted property
@property(retain) NSString *subText;	// G=0x34dbfe75; S=0x34dbfe85; converted property
@property(retain) NSString *title;	// G=0x34dbfe2d; S=0x34dbfe3d; converted property
@property(assign) unsigned version;	// G=0x34dbff29; S=0x34dbff39; converted property
+ (id)_dictionaryArraytoDictionary:(id)dictionary;	// 0x34dc005d
+ (id)_keyValueToDictionary:(id)dictionary key:(id)key;	// 0x34dc0149
+ (id)dictionaryToDictionaryArray:(id)dictionaryArray;	// 0x34dbff69
+ (id)messageFromDictionary:(id)dictionary;	// 0x34dbf9bd
+ (id)messageFromDictionaryArray:(id)dictionaryArray;	// 0x34dbf98d
+ (unsigned long)vendNewSessionID;	// 0x34dbf97d
- (void)dealloc;	// 0x34dbfb85
- (id)dictionary;	// 0x34dbfc1d
- (id)dictionaryArray;	// 0x34dbfbed
// converted property getter: - (int)keyboardType;	// 0x34dbfedd
// converted property getter: - (int)msgType;	// 0x34dbfebd
// converted property getter: - (BOOL)secureText;	// 0x34dbff49
// converted property getter: - (unsigned long long)sessionID;	// 0x34dbfefd
// converted property setter: - (void)setKeyboardType:(int)type;	// 0x34dbfeed
// converted property setter: - (void)setMsgType:(int)type;	// 0x34dbfecd
// converted property setter: - (void)setSecureText:(BOOL)text;	// 0x34dbff59
// converted property setter: - (void)setSessionID:(unsigned long long)anId;	// 0x34dbff15
// converted property setter: - (void)setString:(id)string;	// 0x34dbfdf5
// converted property setter: - (void)setSubText:(id)text;	// 0x34dbfe85
// converted property setter: - (void)setTitle:(id)title;	// 0x34dbfe3d
// converted property setter: - (void)setVersion:(unsigned)version;	// 0x34dbff39
// converted property getter: - (id)string;	// 0x34dbfde5
// converted property getter: - (id)subText;	// 0x34dbfe75
// converted property getter: - (id)title;	// 0x34dbfe2d
// converted property getter: - (unsigned)version;	// 0x34dbff29
@end

