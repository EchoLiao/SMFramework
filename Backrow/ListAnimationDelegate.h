/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library

@class BRListControl;

__attribute__((visibility("hidden")))
@interface ListAnimationDelegate : NSObject {
@private
	BRListControl *_list;	// 4 = 0x4
	long _animationBalance;	// 8 = 0x8
}
- (id)initWithList:(id)list;	// 0x34d12141
- (void)animationDidStart:(id)animation;	// 0x34d12229
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x34d1223d
- (void)clearScroll;	// 0x34d12181
- (void)decrementBalance;	// 0x34d121d5
- (void)incrementBalance;	// 0x34d12191
- (BOOL)scrolling;	// 0x34d12211
@end

