/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRTransportDataProvider.h"
#import <Foundation/Foundation.h> // Unknown library

@class NSMutableArray;

@interface BRMediaPlayer : NSObject <BRTransportDataProvider> {
@private
	NSMutableArray *_stateStack;	// 4 = 0x4
}
@property(assign) long chapterGroupIndex;	// G=0x34dad9c9; S=0x34dad9c5; converted property
@property(assign) long currentChapterIndex;	// G=0x34dad9b1; S=0x34dad9ad; converted property
@property(assign) BOOL disablePlatformFilters;	// G=0x34dada01; S=0x34dad9fd; converted property
@property(assign) double elapsedTime;	// G=0x34dad935; S=0x34dad931; converted property
@property(assign) BOOL isPlaylistDynamic;	// G=0x34dadaad; S=0x34dadaa9; converted property
@property(assign) BOOL muted;	// G=0x34dadabd; S=0x34dadab9; converted property
@property(retain) id playbackDate;	// G=0x34dad94d; S=0x34dad949; converted property
@property(retain) id playerSpecificOptions;	// G=0x34dadaf9; S=0x34dadaf5; converted property
@property(assign) int playlistEndAction;	// G=0x34dada4d; S=0x34dada49; converted property
@property(assign) int repeatMode;	// G=0x34dada99; S=0x34dada95; converted property
@property(assign) long selectedAudioTrackID;	// G=0x34dada85; S=0x34dada81; converted property
@property(assign) long selectedSubtitleTrackID;	// G=0x34dada71; S=0x34dada6d; converted property
@property(assign) BOOL shufflePlayback;	// G=0x34dada8d; S=0x34dada89; converted property
@property(assign) BOOL skipExplicit;	// G=0x34dadaa5; S=0x34dadaa1; converted property
@property(assign) double startTime;	// G=0x34dad975; S=0x34dad971; converted property
@property(assign) double stopTime;	// G=0x34dad95d; S=0x34dad959; converted property
@property(assign) double virtualChapterMark;	// G=0x34dad991; S=0x34dad98d; converted property
@property(assign) BOOL visualsSuppressed;	// G=0x34dada09; S=0x34dada05; converted property
@property(assign) float volume;	// G=0x34dadac9; S=0x34dadac5; converted property
+ (BOOL)allowMultiplePlayers;	// 0x34dad6ed
+ (id)contentTypes;	// 0x34dad6e9
+ (BOOL)handlesVideoForType:(id)type;	// 0x34dad6f1
- (id)init;	// 0x34dad6f5
- (void)_checkPlayerMedia:(id)media;	// 0x34dadda1
- (void)_invalidateAsset:(id)asset;	// 0x34dadd45
- (void)appendMediaList:(id)list;	// 0x34dad855
- (void)appendMediaToSlidingWindow:(id)slidingWindow;	// 0x34dad859
- (BOOL)attemptAuthorizationWithError:(id *)error;	// 0x34dada0d
- (id)audioTrackIDs;	// 0x34dada79
- (BRTimeRange)bufferedRange;	// 0x34dad9e1
- (float)bufferingProgress;	// 0x34dad9f1
- (id)chapterAtIndex:(long)index;	// 0x34dad9d9
- (long)chapterCount;	// 0x34dad9d5
- (id)chapterGroupAtIndex:(long)index;	// 0x34dad9cd
- (long)chapterGroupCount;	// 0x34dad9c1
// converted property getter: - (long)chapterGroupIndex;	// 0x34dad9c9
- (long)chapterIndexForTime:(double)time;	// 0x34dad9b5
- (BOOL)chapterIsPlayable:(long)playable;	// 0x34dad9b9
- (id)chapters;	// 0x34dad9d1
- (void)clearStack;	// 0x34dadd15
- (id)collection;	// 0x34dad85d
- (BOOL)cueMediaWithError:(id *)error;	// 0x34dad8b1
// converted property getter: - (long)currentChapterIndex;	// 0x34dad9b1
- (id)currentVideoFrame;	// 0x34dada59
- (void)dealloc;	// 0x34dad7a1
- (id)debugStringForState:(int)state;	// 0x34dadafd
// converted property getter: - (BOOL)disablePlatformFilters;	// 0x34dada01
- (id)displayStringForAudioTrackID:(long)audioTrackID;	// 0x34dada7d
- (id)displayStringForSubtitleTrackID:(long)subtitleTrackID;	// 0x34dada69
- (double)duration;	// 0x34dad91d
// converted property getter: - (double)elapsedTime;	// 0x34dad935
- (void)handleFailedURLResponse:(id)response requester:(id)requester;	// 0x34dadd41
- (BOOL)hasRealChapters;	// 0x34dad9bd
// converted property getter: - (BOOL)isPlaylistDynamic;	// 0x34dadaad
- (double)keyframeTimeNearTime:(double)time searchForwards:(BOOL)forwards;	// 0x34dada5d
- (id)media;	// 0x34dad861
- (int)mediaCount;	// 0x34dad869
- (long)mediaIndex;	// 0x34dad8ad
// converted property getter: - (BOOL)muted;	// 0x34dadabd
- (void)nextChapter;	// 0x34dad9a5
- (void)nextMedia;	// 0x34dadab5
- (int)peekState;	// 0x34dadc69
// converted property getter: - (id)playbackDate;	// 0x34dad94d
- (id)playbackInfo;	// 0x34dad9f9
// converted property getter: - (id)playerSpecificOptions;	// 0x34dadaf9
- (int)playerState;	// 0x34dad911
- (BOOL)playingVisualContent;	// 0x34dada51
// converted property getter: - (int)playlistEndAction;	// 0x34dada4d
- (int)popState;	// 0x34dadc99
- (void)previousChapter;	// 0x34dad9a9
- (void)previousMedia;	// 0x34dadab1
- (void)pushState:(int)state;	// 0x34dadbbd
// converted property getter: - (int)repeatMode;	// 0x34dada99
- (void)resetToBeginning;	// 0x34dad989
- (BOOL)reverseTouchSwipeBehavior;	// 0x34dad811
// converted property getter: - (long)selectedAudioTrackID;	// 0x34dada85
// converted property getter: - (long)selectedSubtitleTrackID;	// 0x34dada71
// converted property setter: - (void)setChapterGroupIndex:(long)index;	// 0x34dad9c5
// converted property setter: - (void)setCurrentChapterIndex:(long)index;	// 0x34dad9ad
// converted property setter: - (void)setDisablePlatformFilters:(BOOL)filters;	// 0x34dad9fd
// converted property setter: - (void)setElapsedTime:(double)time;	// 0x34dad931
- (void)setFailedURLDelegate:(id)delegate;	// 0x34dadd3d
// converted property setter: - (void)setIsPlaylistDynamic:(BOOL)dynamic;	// 0x34dadaa9
- (void)setMediaAsCurrentlyPlayingAppendingTrackList:(id)list;	// 0x34dad851
- (BOOL)setMediaAtIndex:(long)index inCollection:(id)collection error:(id *)error;	// 0x34dad819
- (BOOL)setMediaAtIndex:(long)index inTrackList:(id)trackList error:(id *)error;	// 0x34dad815
// converted property setter: - (void)setMuted:(BOOL)muted;	// 0x34dadab9
// converted property setter: - (void)setPlaybackDate:(id)date;	// 0x34dad949
// converted property setter: - (void)setPlayerSpecificOptions:(id)options;	// 0x34dadaf5
// converted property setter: - (void)setPlaylistEndAction:(int)action;	// 0x34dada49
// converted property setter: - (void)setRepeatMode:(int)mode;	// 0x34dada95
// converted property setter: - (void)setSelectedAudioTrackID:(long)anId;	// 0x34dada81
// converted property setter: - (void)setSelectedSubtitleTrackID:(long)anId;	// 0x34dada6d
// converted property setter: - (void)setShufflePlayback:(BOOL)playback;	// 0x34dada89
// converted property setter: - (void)setSkipExplicit:(BOOL)anExplicit;	// 0x34dadaa1
- (void)setStartDate:(id)date isEstimate:(BOOL)estimate;	// 0x34dad951
// converted property setter: - (void)setStartTime:(double)time;	// 0x34dad971
- (BOOL)setState:(int)state error:(id *)error;	// 0x34dad90d
// converted property setter: - (void)setStopTime:(double)time;	// 0x34dad959
// converted property setter: - (void)setVirtualChapterMark:(double)mark;	// 0x34dad98d
// converted property setter: - (void)setVisualsSuppressed:(BOOL)suppressed;	// 0x34dada05
// converted property setter: - (void)setVolume:(float)volume;	// 0x34dadac5
// converted property getter: - (BOOL)shufflePlayback;	// 0x34dada8d
// converted property getter: - (BOOL)skipExplicit;	// 0x34dadaa5
- (id)startDate;	// 0x34dad955
// converted property getter: - (double)startTime;	// 0x34dad975
// converted property getter: - (double)stopTime;	// 0x34dad95d
- (BOOL)stopsActiveAudioPlayer;	// 0x34dad80d
- (id)subtitleTrackIDs;	// 0x34dada65
- (BOOL)supportsBufferedRange;	// 0x34dad9dd
- (BOOL)supportsMultipleTrickSpeeds;	// 0x34dad915
- (BOOL)supportsRepeatModes;	// 0x34dada9d
- (BOOL)supportsShufflePlayback;	// 0x34dada91
- (BOOL)supportsTrickPlay;	// 0x34dad919
- (BOOL)supportsVolumeControl;	// 0x34dadac1
- (int)swapState:(int)state;	// 0x34dadc39
- (id)trackList;	// 0x34dad865
// converted property getter: - (double)virtualChapterMark;	// 0x34dad991
- (id)visuals;	// 0x34dada55
// converted property getter: - (BOOL)visualsSuppressed;	// 0x34dada09
// converted property getter: - (float)volume;	// 0x34dadac9
@end

