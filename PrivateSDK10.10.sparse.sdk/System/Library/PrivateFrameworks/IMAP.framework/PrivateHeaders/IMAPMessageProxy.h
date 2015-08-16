/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MCManagedObjectProxy.h"

#import <IMAP/IMAPMessage-Protocol.h>
#import "IMAPPersistedMessage-Protocol.h"

@class NSString;

@interface IMAPMessageProxy : MCManagedObjectProxy <IMAPMessage, IMAPPersistedMessage>
{
    CDStruct_07ba05d6 _remoteFlags;
}

- (void)appendData:(id)arg1 part:(id)arg2;
- (void)setData:(id)arg1 isPartial:(BOOL)arg2;
- (void)setRemoteID:(id)arg1;
- (id)remoteID;
- (id)managedObjectID;
@property(readonly, nonatomic) BOOL persistentIDType;
- (id)mailboxName;
- (id)dateReceived;
- (id)subject;
- (unsigned long long)messageSize;
- (CDStruct_07ba05d6)remoteFlags;
- (void)setHasTemporaryUid:(BOOL)arg1;
- (BOOL)hasTemporaryUid;
- (void)setPartsHaveBeenCached:(BOOL)arg1;
- (BOOL)partsHaveBeenCached;
- (void)setIsPartial:(BOOL)arg1;
- (BOOL)isPartial;
- (id)messageID;
- (void)setUid:(unsigned int)arg1;
- (unsigned int)uid;
- (id)initWithManagedObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
