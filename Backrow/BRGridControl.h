/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSString, BRProviderGroup;

@interface BRGridControl : BRControl {
@private
	BRProviderGroup *_group;	// 44 = 0x2c
	BRControl *_requester;	// 48 = 0x30
	NSRange _range;	// 52 = 0x34
	float _lastGapHeight;	// 60 = 0x3c
	double _heightToRange;	// 64 = 0x40
	double _allRowsHeight;	// 72 = 0x48
	float _singleControlHeight;	// 80 = 0x50
	BOOL _allRowsAreSameHeight;	// 84 = 0x54
	float _allColumnWidths;	// 88 = 0x58
	long _columnCount;	// 92 = 0x5c
	float _horizontalGap;	// 96 = 0x60
	float _verticalGap;	// 100 = 0x64
	float _leftMargin;	// 104 = 0x68
	float _rightMargin;	// 108 = 0x6c
	float _bottomMargin;	// 112 = 0x70
	float _bottomMarginFactor;	// 116 = 0x74
	float _topMargin;	// 120 = 0x78
	float _topMarginFactor;	// 124 = 0x7c
	BOOL _wrapsNavigation;	// 128 = 0x80
	BOOL _explicitlyAcceptsFocus;	// 129 = 0x81
	NSString *_accessibilityLabel;	// 132 = 0x84
}
@property(retain) NSString *accessibilityLabel;	// G=0x34d09839; S=0x34d097f1; converted property
@property(assign) BOOL allRowsAreSameHeight;	// G=0x34d091d1; S=0x34d091c1; converted property
@property(assign) long columnCount;	// G=0x34d08a05; S=0x34d089d5; converted property
@property(assign) float horizontalGap;	// G=0x34d08a59; S=0x34d08a15; converted property
@property(assign) float leftMargin;	// G=0x34d08b39; S=0x34d08af9; converted property
@property(retain) id providerRequester;	// G=0x34d08ba9; S=0x34d08b99; converted property
@property(retain) id providers;	// G=0x34d08921; S=0x34d08745; converted property
@property(assign) float rightMargin;	// G=0x34d08b89; S=0x34d08b49; converted property
@property(assign) float verticalGap;	// G=0x34d08ab9; S=0x34d08a69; converted property
@property(assign) BOOL wrapsNavigation;	// G=0x34d090b9; S=0x34d090a9; converted property
- (id)init;	// 0x34d085c1
- (id)_controlAtIndex:(long)index controls:(id)controls;	// 0x34d0ab95
- (long)_controlsInHeight:(double)height startingAt:(long)at actualHeight:(double *)height3;	// 0x34d0a779
- (long)_controlsInHeightBackwards:(double)heightBackwards startingAt:(long)at actualHeight:(double *)height;	// 0x34d0a84d
- (id)_controlsInRange:(NSRange)range;	// 0x34d0aa29
- (id)_createControlsInRange:(NSRange)range;	// 0x34d0a96d
- (CGRect)_frameForControlAtIndex:(long)index controls:(id)controls;	// 0x34d0a24d
- (CGRect)_frameForControlAtIndex:(long)index rowFrame:(CGRect)frame controls:(id)controls;	// 0x34d0a3b5
- (void)_frameRowInRange:(NSRange)range rowFrame:(CGRect)frame controls:(id)controls;	// 0x34d0a461
- (float)_heightOfControlAtIndex:(long)index controls:(id)controls;	// 0x34d0a599
- (double)_heightOfRowsInRange:(NSRange)range includeVerticalGap:(BOOL)gap controls:(id)controls;	// 0x34d0a6cd
- (double)_heightToRange;	// 0x34d0a06d
- (long)_indexOfFocusedControl;	// 0x34d0a919
- (float)_positionOfColumn:(long)column inRowWidth:(float)rowWidth cellWidth:(float *)width;	// 0x34d0a14d
- (void)_providerDataSetChanged:(id)changed;	// 0x34d0ace9
- (void)_providerModified:(id)modified;	// 0x34d0ad4d
- (float)_rowHeightForControlsInRange:(NSRange)range controls:(id)controls;	// 0x34d0a4f9
- (void)_sceneBoundsChanged:(id)changed;	// 0x34d0ae95
- (id)_setControlRange:(NSRange)range withHeightToRange:(double)range2;	// 0x34d09e71
- (double)_totalHeight;	// 0x34d09f7d
- (void)_updateControlsInRange:(NSRange)range controls:(id)controls;	// 0x34d0abfd
// converted property getter: - (id)accessibilityLabel;	// 0x34d09839
// converted property getter: - (BOOL)allRowsAreSameHeight;	// 0x34d091d1
- (BOOL)brEventAction:(id)action;	// 0x34d08d81
- (int)cellCount;	// 0x34d09849
// converted property getter: - (long)columnCount;	// 0x34d08a05
- (BOOL)controlAcceptsFocusAtIndex:(long)index;	// 0x34d09955
- (CGRect)controlFocusFrameAtIndex:(long)index;	// 0x34d09b85
- (CGRect)controlFrameAtIndex:(long)index;	// 0x34d09aa1
- (long)dataCount;	// 0x34d08941
- (void)dealloc;	// 0x34d0868d
- (void)focusControlAtIndex:(long)index;	// 0x34d09991
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x34d08e99
- (float)heightOfControlAtIndex:(long)index;	// 0x34d08d51
- (float)heightToMaximum:(float)maximum;	// 0x34d08c4d
// converted property getter: - (float)horizontalGap;	// 0x34d08a59
- (int)indexOfCell:(id)cell;	// 0x34d0985d
- (id)initialFocus;	// 0x34d09895
- (void)layoutSubcontrols;	// 0x34d091f5
// converted property getter: - (float)leftMargin;	// 0x34d08b39
- (float)positionOfColumn:(long)column;	// 0x34d08d0d
- (id)providerForDataAtIndex:(long)index providerIndex:(long *)index2;	// 0x34d08961
// converted property getter: - (id)providerRequester;	// 0x34d08ba9
// converted property getter: - (id)providers;	// 0x34d08921
- (void)reloadData;	// 0x34d09cc9
// converted property getter: - (float)rightMargin;	// 0x34d08b89
- (long)rowCount;	// 0x34d08989
- (void)setAcceptsFocus:(BOOL)focus;	// 0x34d09c61
// converted property setter: - (void)setAccessibilityLabel:(id)label;	// 0x34d097f1
- (void)setAllColumnWidths:(float)widths;	// 0x34d089c5
// converted property setter: - (void)setAllRowsAreSameHeight:(BOOL)height;	// 0x34d091c1
- (void)setBottomMargin:(float)margin;	// 0x34d090c9
// converted property setter: - (void)setColumnCount:(long)count;	// 0x34d089d5
// converted property setter: - (void)setHorizontalGap:(float)gap;	// 0x34d08a15
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0x34d08af9
- (void)setProvider:(id)provider;	// 0x34d0870d
// converted property setter: - (void)setProviderRequester:(id)requester;	// 0x34d08b99
// converted property setter: - (void)setProviders:(id)providers;	// 0x34d08745
// converted property setter: - (void)setRightMargin:(float)margin;	// 0x34d08b49
- (void)setTopMargin:(float)margin;	// 0x34d09145
// converted property setter: - (void)setVerticalGap:(float)gap;	// 0x34d08a69
- (void)setVerticalMargins:(float)margins;	// 0x34d08ac9
// converted property setter: - (void)setWrapsNavigation:(BOOL)navigation;	// 0x34d090a9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x34d09711
// converted property getter: - (float)verticalGap;	// 0x34d08ab9
- (id)visibleControlAtIndex:(long)index;	// 0x34d08c0d
- (id)visibleControlsWithRange:(NSRange *)range;	// 0x34d08bb9
- (NSRange)visibleRange;	// 0x34d08bf1
- (void)visibleScrollRectChanged;	// 0x34d091e1
// converted property getter: - (BOOL)wrapsNavigation;	// 0x34d090b9
@end

