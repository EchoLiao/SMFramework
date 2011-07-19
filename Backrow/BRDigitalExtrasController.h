/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRController.h"

@class BRDigitalExtrasWebControl, BRWaitPromptControl, NSTimer;

__attribute__((visibility("hidden")))
@interface BRDigitalExtrasController : BRController {
@private
	BRDigitalExtrasWebControl *_digitalExtrasWebControl;	// 56 = 0x38
	BRControl *_blackBackground;	// 60 = 0x3c
	BRWaitPromptControl *_spinner;	// 64 = 0x40
	NSTimer *_spinnerTimer;	// 68 = 0x44
	NSTimer *_busyTimer;	// 72 = 0x48
	NSTimer *_syncHoldOffTimer;	// 76 = 0x4c
	int _pageState;	// 80 = 0x50
}
+ (id)controllerWithAsset:(id)asset;	// 0x31662365
- (id)initWithAsset:(id)asset;	// 0x31662711
- (void)_assetWillBeDeleted:(id)_asset;	// 0x31661ef5
- (void)_busyTimerFired:(id)fired;	// 0x31661db5
- (void)_holdOffSyncing:(id)syncing;	// 0x31661d95
- (void)_mediaHostRemoved:(id)removed;	// 0x31661f39
- (void)_pageLoaded;	// 0x31661df9
- (void)_setPageBusy:(id)busy;	// 0x31662399
- (void)_spinnerTimerFired:(id)fired;	// 0x31661e95
- (BOOL)brEventAction:(id)action;	// 0x31662231
- (void)dealloc;	// 0x316622a9
- (id)digitalExtrasMediaURL;	// 0x3166208d
- (void)handleCustomJSEvent:(id)event;	// 0x31661f7d
- (void)layoutSubcontrols;	// 0x31662981
- (void)openTabNamed:(id)named withRequest:(id)request;	// 0x31661d8d
- (void)unnavigableLinkClicked:(id)clicked;	// 0x31662afd
- (void)wasPopped;	// 0x316620c9
- (void)wasPushed;	// 0x3166214d
- (void)webControl:(id)control didFailLoadWithError:(id)error;	// 0x31662ba1
- (void)webControl:(id)control didReceiveTitle:(id)title;	// 0x31661d89
- (void)webControl:(id)control saveStateToHistoryItem:(id)historyItem;	// 0x31661d91
- (void)webControlDidFinishLoad:(id)webControl;	// 0x31662079
- (void)webControlDidStartLoad:(id)webControl;	// 0x31661d85
@end

