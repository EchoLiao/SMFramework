/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRController.h"
#import "AppleTV-Structs.h"

@class BRTextControl, BRWaitPromptControl, BRCursorControl, NSMutableDictionary, NSMutableArray, BRGridView, NSTimer, BRScrollControl;

@interface ATVFavoritesController : BRController {
@private
	int _itemType;	// 60 = 0x3c
	NSMutableArray *_favorites;	// 64 = 0x40
	BRScrollControl *_scroller;	// 68 = 0x44
	BRGridView *_grid;	// 72 = 0x48
	BRCursorControl *_cursor;	// 76 = 0x4c
	BRTextControl *_rearrangeInstructions;	// 80 = 0x50
	BOOL _hasBeenActivated;	// 84 = 0x54
	NSMutableDictionary *_redDotMap;	// 88 = 0x58
	NSTimer *_spinnerTimer;	// 92 = 0x5c
	BRWaitPromptControl *_spinner;	// 96 = 0x60
	BOOL _showsSpinner;	// 100 = 0x64
	BOOL _favoriteOrderChanged;	// 101 = 0x65
}
- (id)initWithItemType:(int)itemType error:(id *)error;	// 0x34bf3e61
- (void)_fadeOutAnimationCompleted:(id)completed;	// 0x34bf5191
- (void)_favoriteChanged:(id)changed;	// 0x34bf4ed1
- (void)_favoriteInsertedNotification:(id)notification;	// 0x34bf4d7d
- (void)_favoriteRemovedNotification:(id)notification;	// 0x34bf4e49
- (void)_favoritesShowDataChangedNotification:(id)notification;	// 0x34bf50ed
- (void)_fetchEpisodesForCurrentSeason:(id)currentSeason;	// 0x34bf5d09
- (void)_fetchFavorites:(id)favorites;	// 0x34bf5c79
- (void)_fetchShowInfo:(id)info;	// 0x34bf5f09
- (void)_initiateNetworkFetches;	// 0x34bf46c5
- (ATVMediaTypeRef)_mediaType;	// 0x34bf5a2d
- (id)_noFavoritesController;	// 0x34bf5119
- (void)_rebuildRedDotMapWithFavoritesIfNecessary:(id)favoritesIfNecessary;	// 0x34bf5b89
- (int)_redDotCountForStoreFavorite:(id)storeFavorite;	// 0x34bf5b21
- (void)_reload;	// 0x34bf4bd1
- (void)_removeRedDotCountForStoreFavorite:(id)storeFavorite;	// 0x34bf5ad1
- (void)_resort;	// 0x34bf4c31
- (void)_setRedDotCount:(int)count forStoreFavorite:(id)storeFavorite;	// 0x34bf5a69
- (BOOL)_setupAfterFavoritesFetch;	// 0x34bf48f1
- (BOOL)_shouldShowRedDots;	// 0x34bf5175
- (void)_showDataChangedNotification:(id)notification;	// 0x34bf5025
- (void)_showGrid;	// 0x34bf5359
- (void)_showSpinner:(BOOL)spinner;	// 0x34bf51cd
- (id)_sortedFavorites;	// 0x34bf4a61
- (void)_spinnerTimerFired:(id)fired;	// 0x34bf529d
- (id)accessibilityScreenContent;	// 0x34bf61a9
- (void)controlWasActivated;	// 0x34bf3fd9
- (void)controlWasDeactivated;	// 0x34bf4075
- (void)dealloc;	// 0x34bf3f01
- (BOOL)grid:(id)grid canMoveItemAtIndex:(long)index;	// 0x34bf4579
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x34bf468d
- (long)grid:(id)grid indexForItemID:(id)itemID;	// 0x34bf4571
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x34bf42ed
- (id)grid:(id)grid itemIDAtIndex:(long)index;	// 0x34bf456d
- (void)grid:(id)grid moveItemAtIndex:(long)index toIndex:(long)index3;	// 0x34bf457d
- (long)grid:(id)grid targetIndexForMoveFromItemAtIndex:(long)index toProposedIndex:(long)proposedIndex;	// 0x34bf469d
- (BOOL)isNetworkDependent;	// 0x34bf4149
- (void)layoutSubcontrols;	// 0x34bf414d
- (long)numberOfColumnsInGrid:(id)grid;	// 0x34bf42d5
- (long)numberOfItemsInGrid:(id)grid;	// 0x34bf42b5
- (void)wasPushed;	// 0x34bf40fd
@end
