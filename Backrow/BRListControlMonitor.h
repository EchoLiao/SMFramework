/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <Foundation/Foundation.h> // Unknown library

@class BRListControl;

@interface BRListControlMonitor : NSObject {
@private
	BRListControl *_listControl;	// 4 = 0x4
	NSRange _loadingRange;	// 8 = 0x8
	long _dataCount;	// 16 = 0x10
}
- (void)_cancelLoads;	// 0x34dcd96d
- (void)_listSelectionFinalized:(id)finalized;	// 0x34dcda41
- (void)_loadImagesForOnScreenRows;	// 0x34dcda55
- (void)cancelCurrentLoads;	// 0x34dcd959
- (void)dealloc;	// 0x34dcd849
- (void)setListControl:(id)control;	// 0x34dcd89d
@end
