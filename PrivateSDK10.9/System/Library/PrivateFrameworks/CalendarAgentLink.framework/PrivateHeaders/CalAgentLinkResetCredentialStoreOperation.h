//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarAgentLink/CalAgentLinkOneWayOperation.h>

@class NSString;

@interface CalAgentLinkResetCredentialStoreOperation : CalAgentLinkOneWayOperation
{
    NSString *_accountObjectID;
}

@property(readonly, nonatomic) NSString *accountObjectID; // @synthesize accountObjectID=_accountObjectID;
- (id)inputPayload;
- (id)description;
- (void)dealloc;
- (id)initWithAccountObjectID:(id)arg1;
- (id)init;

@end
