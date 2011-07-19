/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface BRMediaParadeLayer : BRControl {
@private
	CGSize _animationBounds;	// 44 = 0x2c
	CGSize _maxImageBounds;	// 52 = 0x34
	BOOL _paused;	// 60 = 0x3c
}
@property(assign) BOOL paused;	// G=0x34d21dfd; S=0x34d21b89; converted property
@property(retain) id provider;	// G=0x34d219f9; S=0x34d219dd; converted property
- (id)init;	// 0x34d21935
- (id)_addLayerForImage:(id)image;	// 0x34d21e0d
- (void)_updateAnimationForImageLayer:(id)imageLayer withTimeOffset:(double)timeOffset;	// 0x34d21f69
- (void)_updateAnimations;	// 0x34d21e89
- (void)_updateKeyframes;	// 0x34d2245d
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x34d226b9
- (void)layoutSubcontrols;	// 0x34d21b05
- (long)maxImages;	// 0x34d21a15
// converted property getter: - (BOOL)paused;	// 0x34d21dfd
// converted property getter: - (id)provider;	// 0x34d219f9
- (void)setImages:(id)images;	// 0x34d21a19
// converted property setter: - (void)setPaused:(BOOL)paused;	// 0x34d21b89
// converted property setter: - (void)setProvider:(id)provider;	// 0x34d219dd
@end

