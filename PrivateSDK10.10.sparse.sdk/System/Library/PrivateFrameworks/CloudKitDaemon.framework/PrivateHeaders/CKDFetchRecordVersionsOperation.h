/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSObject<OS_dispatch_group>, NSString;

// Not exported
@interface CKDFetchRecordVersionsOperation : CKDDatabaseOperation
{
    BOOL _isDeleted;
    id _recordVersionFetchedBlock;
    NSArray *_recordIDs;
    NSArray *_desiredKeys;
    NSString *_minimumVersionETag;
    NSObject<OS_dispatch_group> *_fetchVersionsGroup;
}

@property(retain, nonatomic) NSObject<OS_dispatch_group> *fetchVersionsGroup; // @synthesize fetchVersionsGroup=_fetchVersionsGroup;
@property(nonatomic) BOOL isDeleted; // @synthesize isDeleted=_isDeleted;
@property(retain, nonatomic) NSString *minimumVersionETag; // @synthesize minimumVersionETag=_minimumVersionETag;
@property(retain, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(retain, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
@property(copy, nonatomic) id recordVersionFetchedBlock; // @synthesize recordVersionFetchedBlock=_recordVersionFetchedBlock;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)_handleRecordVersionsFecthedForID:(id)arg1 isDeleted:(BOOL)arg2 versions:(id)arg3 responseCode:(id)arg4;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end
