//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Slideshows/MCAsset.h>

@class NSMutableSet;

@interface MCAssetAudio : MCAsset
{
    NSMutableSet *mSongs;
}

- (void)forgetSong:(id)arg1;
- (void)learnSong:(id)arg1;
- (BOOL)isInUse;
- (void)demolish;
- (id)init;

@end
