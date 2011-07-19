/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library

@class ATVRCButtonPatternSet, NSTimer, NSArray;
@protocol ATVRCPatternMatcherDelegate;

__attribute__((visibility("hidden")))
@interface ATVRCPatternMatcher : NSObject {
@private
	int _matchState;	// 4 = 0x4
	int _buttonState;	// 8 = 0x8
	ATVRCButtonPatternSet *_patternSet;	// 12 = 0xc
	long _matchIndex;	// 16 = 0x10
	NSTimer *_discontinuityTrigger;	// 20 = 0x14
	NSTimer *_holdTrigger;	// 24 = 0x18
	double _lastEventTimestamp;	// 28 = 0x1c
	unsigned long _pairingMask;	// 36 = 0x24
	unsigned long _payloadMask;	// 40 = 0x28
	unsigned long _pairingID;	// 44 = 0x2c
	NSArray *_upEvents;	// 48 = 0x30
	NSArray *_holdEvents;	// 52 = 0x34
	NSArray *_downEvents;	// 56 = 0x38
	id<ATVRCPatternMatcherDelegate> _delegate;	// 60 = 0x3c
}
@property(retain) NSArray *downEvents;	// G=0x34c3f845; S=0x34c3f79d; converted property
@property(retain) NSArray *holdEvents;	// G=0x34c3f855; S=0x34c3f7d5; converted property
@property(retain) ATVRCButtonPatternSet *patternSet;	// G=0x34c3f78d; S=0x34c3f745; converted property
@property(retain) NSArray *upEvents;	// G=0x34c3f865; S=0x34c3f80d; converted property
+ (BOOL)findEventInSet:(id)set event:(id)event startIndex:(long)index numEventstoSearch:(long)search;	// 0x34c3fac5
+ (id)findFirstPattern:(id)pattern startIndex:(long)index minPatternLength:(long)length;	// 0x34c3fa19
+ (id)findRepeatPattern:(id)pattern startIndex:(long)index;	// 0x34c3f975
+ (double)intervalBetweenFirstAndLastEvent:(id)event;	// 0x34c3fd19
+ (double)intervalBetweenLastEvents:(id)events;	// 0x34c3fc6d
+ (BOOL)matchEvent:(id)event withEvent:(id)event2;	// 0x34c3fbf1
+ (BOOL)matchPattern:(id)pattern pattern:(id)pattern2 atIndex:(long)index;	// 0x34c3fb4d
- (id)initWithPatternSet:(id)patternSet delegate:(id)delegate;	// 0x34c3f625
- (void)_checkDiscontinuityTrigger:(id)trigger;	// 0x34c40355
- (void)_clearDiscontinuityTrigger;	// 0x34c40205
- (void)_clearHoldTrigger;	// 0x34c4028d
- (void)_commandPatternMatched;	// 0x34c40069
- (double)_discontinuityTriggerInterval;	// 0x34c402c5
- (void)_discontinuityTriggered;	// 0x34c4041d
- (void)_dispatchEvents:(id)events;	// 0x34c40565
- (void)_holdTriggered;	// 0x34c404e1
- (BOOL)_matchEvent:(id)event against:(id)against;	// 0x34c3ffcd
- (id)_processPairingInfo:(id)info uidMismatchStatus:(BOOL *)status;	// 0x34c3fe1d
- (void)_resetDiscontinuityTrigger;	// 0x34c40195
- (void)_resetHoldTrigger;	// 0x34c4023d
- (void)dealloc;	// 0x34c3f679
// converted property getter: - (id)downEvents;	// 0x34c3f845
- (void)forceReleaseState;	// 0x34c3fded
// converted property getter: - (id)holdEvents;	// 0x34c3f855
// converted property getter: - (id)patternSet;	// 0x34c3f78d
- (BOOL)processEvent:(id)event uidMismatchStatus:(BOOL *)status;	// 0x34c3f875
- (void)reset;	// 0x34c3f6f5
- (void)setDelegate:(id)delegate;	// 0x34c3f77d
// converted property setter: - (void)setDownEvents:(id)events;	// 0x34c3f79d
// converted property setter: - (void)setHoldEvents:(id)events;	// 0x34c3f7d5
- (void)setPairingInfo:(unsigned long)info pairingMask:(unsigned long)mask payloadMask:(unsigned long)mask3;	// 0x34c3fdbd
// converted property setter: - (void)setPatternSet:(id)set;	// 0x34c3f745
// converted property setter: - (void)setUpEvents:(id)events;	// 0x34c3f80d
// converted property getter: - (id)upEvents;	// 0x34c3f865
@end

