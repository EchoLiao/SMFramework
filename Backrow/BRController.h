/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRContextMenuControl, NSMutableDictionary, BRControllerStack;

@interface BRController : BRControl {
@private
	NSMutableDictionary *_labels;	// 44 = 0x2c
	BRControllerStack *_stack;	// 48 = 0x30
	BOOL _depthLimited;	// 52 = 0x34
	BRContextMenuControl *_contextMenu;	// 56 = 0x38
	id _wasPushedBlock;	// 60 = 0x3c
	id _wasPoppedBlock;	// 64 = 0x40
	id _wasBuriedBlock;	// 68 = 0x44
	id _wasExhumedBlock;	// 72 = 0x48
}
@property(assign) BOOL depthLimited;	// G=0x34cc85ed; S=0x34cc85dd; converted property
@property(retain) BRControllerStack *stack;	// G=0x34cc84e9; S=0x34cc84d9; converted property
@property(copy, nonatomic) id wasBuriedBlock;	// G=0x34cc8689; S=0x34cc8699; @synthesize=_wasBuriedBlock
@property(copy, nonatomic) id wasExhumedBlock;	// G=0x34cc86c1; S=0x34cc86d1; @synthesize=_wasExhumedBlock
@property(copy, nonatomic) id wasPoppedBlock;	// G=0x34cc8651; S=0x34cc8661; @synthesize=_wasPoppedBlock
@property(copy, nonatomic) id wasPushedBlock;	// G=0x34cc8619; S=0x34cc8629; @synthesize=_wasPushedBlock
+ (id)controllerWithContentControl:(id)contentControl;	// 0x34cc7f9d
- (id)init;	// 0x34cc7fd5
- (void)_contextMenuCancelItemSelected:(id)selected;	// 0x34cc8895
- (void)addLabel:(id)label;	// 0x34cc8529
- (BOOL)brEventAction:(id)action;	// 0x34cc8101
- (BOOL)canBeRemovedFromStack;	// 0x34cc8525
- (int)contextMenuDimOption;	// 0x34cc877d
- (BOOL)contextMenuIsVisible;	// 0x34cc8705
- (id)controlForContextMenuPositioning;	// 0x34cc86fd
- (id)controlForContextMenuStart;	// 0x34cc8701
- (id)controlToDim;	// 0x34cc8779
- (void)controlWasDeactivated;	// 0x34cc80c5
- (void)dealloc;	// 0x34cc8029
// converted property getter: - (BOOL)depthLimited;	// 0x34cc85ed
- (id)description;	// 0x34cc83b9
- (void)dismissContextMenu;	// 0x34cc872d
- (long)errorNumberForNoContent;	// 0x34cc8601
- (BOOL)isLabelled:(id)labelled;	// 0x34cc85a9
- (BOOL)isNetworkDependent;	// 0x34cc85d5
- (BOOL)isValidAfterDataUpdate;	// 0x34cc85fd
- (id)providersForContextMenu;	// 0x34cc86f9
- (BOOL)recreateOnReselect;	// 0x34cc85d9
- (void)removeLabel:(id)label;	// 0x34cc8589
// converted property setter: - (void)setDepthLimited:(BOOL)limited;	// 0x34cc85dd
// converted property setter: - (void)setStack:(id)stack;	// 0x34cc84d9
// declared property setter: - (void)setWasBuriedBlock:(id)block;	// 0x34cc8699
// declared property setter: - (void)setWasExhumedBlock:(id)block;	// 0x34cc86d1
// declared property setter: - (void)setWasPoppedBlock:(id)block;	// 0x34cc8661
// declared property setter: - (void)setWasPushedBlock:(id)block;	// 0x34cc8629
// converted property getter: - (id)stack;	// 0x34cc84e9
- (BOOL)topOfStack;	// 0x34cc84f9
- (id)transitionType;	// 0x34cc8609
- (void)wasBuried;	// 0x34cc8849
// declared property getter: - (id)wasBuriedBlock;	// 0x34cc8689
- (void)wasExhumed;	// 0x34cc8879
// declared property getter: - (id)wasExhumedBlock;	// 0x34cc86c1
- (void)wasPopped;	// 0x34cc87dd
// declared property getter: - (id)wasPoppedBlock;	// 0x34cc8651
- (void)wasPushed;	// 0x34cc8781
// declared property getter: - (id)wasPushedBlock;	// 0x34cc8619
@end
