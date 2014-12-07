/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class BRCAccountSession, NSObject<OS_dispatch_queue>;

// Not exported
@interface BRCDiskSpaceReclaimer : NSObject
{
    BRCAccountSession *_session;
    BOOL _isClosed;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (BOOL)createTablesWithDB:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)descriptionForItem:(id)arg1 context:(id)arg2;
- (void)_enumerateItemsForEvictSyncWithBlock:(id)arg1 withUrgency:(void)arg2;
- (BOOL)containerWasReset:(id)arg1;
- (void)documentWasAccessed:(id)arg1;
- (BOOL)documentChangedEvictability:(id)arg1;
- (BOOL)documentWasDeleted:(id)arg1;
- (BOOL)documentWasCreated:(id)arg1;
- (long long)periodicReclaimSpace:(long long)arg1 withUrgency:(int)arg2;
- (long long)purgeSpace:(long long)arg1 withUrgency:(int)arg2;
- (long long)_purgeSpaceUnderQueue:(long long)arg1 withUrgency:(int)arg2;
- (long long)computePurgableSpaceWithUrgency:(int)arg1;
- (void)close;
- (id)initWithAccountSession:(id)arg1;
- (void)unlinkInBackgroundItemsRenamedBeforeRestart;
- (BOOL)renameAndUnlinkInBackgroundItemAtPath:(id)arg1;

@end
