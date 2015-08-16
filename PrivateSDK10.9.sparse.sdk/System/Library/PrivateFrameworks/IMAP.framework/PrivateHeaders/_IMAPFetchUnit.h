//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMAPClientFetchDataItem, IMAPFetchResult;

@interface _IMAPFetchUnit : NSObject
{
    unsigned int _uid;
    IMAPClientFetchDataItem *_fetchItem;
    IMAPFetchResult *_expectedFetchResult;
}

@property(retain) IMAPFetchResult *expectedFetchResult; // @synthesize expectedFetchResult=_expectedFetchResult;
@property(retain) IMAPClientFetchDataItem *fetchItem; // @synthesize fetchItem=_fetchItem;
@property unsigned int uid; // @synthesize uid=_uid;
- (id)newFailedFetchResponse;
- (BOOL)matchesFetchResponse:(id)arg1;
- (void)_setupExpectedFetchResult;
- (id)description;
- (void)dealloc;

@end
