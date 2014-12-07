/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOperation.h"

@class SiteMetadataRequest;

// Not exported
@interface SiteMetadataFetchOperation : NSOperation
{
    int _status;
    SiteMetadataRequest *_request;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(nonatomic, getter=_status, setter=_setStatus:) int status; // @synthesize status=_status;
@property(readonly, nonatomic) SiteMetadataRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)start;
- (id)initWithRequest:(id)arg1;
- (id)init;

@end
