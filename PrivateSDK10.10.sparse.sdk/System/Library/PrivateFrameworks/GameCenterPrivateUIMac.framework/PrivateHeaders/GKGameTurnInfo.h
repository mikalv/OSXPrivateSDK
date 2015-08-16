/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GKGame, NSDate;

@interface GKGameTurnInfo : NSObject
{
    GKGame *_game;
    unsigned long long _numberOfActiveMatches;
    unsigned long long _numberOfLocalPlayerTurns;
    NSDate *_lastTurnDate;
}

@property(retain, nonatomic) NSDate *lastTurnDate; // @synthesize lastTurnDate=_lastTurnDate;
@property(nonatomic) unsigned long long numberOfLocalPlayerTurns; // @synthesize numberOfLocalPlayerTurns=_numberOfLocalPlayerTurns;
@property(nonatomic) unsigned long long numberOfActiveMatches; // @synthesize numberOfActiveMatches=_numberOfActiveMatches;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end
