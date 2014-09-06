//
//  KALPlayer.h
//  KalPlayerSDK
//
//  Created by Eliza Sapir on 8/13/14.
//  Copyright (c) 2014 Kaltura. All rights reserved.
//

#import <MediaPlayer/MediaPlayer.h>
#import "KalPlayerViewController.h"

@interface KALPlayer : MPMoviePlayerController <KalturaPlayer>

- (void)pause;
- (void)play;
- (void)stop;
- (id)view;
- (double)currentPlaybackTime;
- (int)controlStyle;
- (int)playbackState;
- (int)loadState;
- (void)prepareToPlay;
- (BOOL)isPreparedToPlay;
- (void)setContentURL:(NSURL *)url;
- (double)playableDuration;
- (double)duration;
- (void)bindPlayerEvents;
- (void)sendCurrentTime:(NSTimer *)timer;
- (void)updatePlaybackProgressFromTimer:(NSTimer *)timer;
- (NSTimeInterval)getCurrentPlaybackTime;
- (void)setCurrentPlaybackTime:(double)cs;
- (void)initWV: (NSString *)src andKey: (NSString *)key;
- (void)setWideVideConfigurations;

@end