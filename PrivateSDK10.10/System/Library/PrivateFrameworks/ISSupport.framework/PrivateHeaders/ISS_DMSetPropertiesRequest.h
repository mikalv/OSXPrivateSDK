/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ISSupport/ISS_DMDAVPost.h>

@class ISS_MMiDiskSession, NSDictionary, NSMutableSet;

@interface ISS_DMSetPropertiesRequest : ISS_DMDAVPost
{
    ISS_MMiDiskSession *_iDiskSession;
    NSDictionary *_propsByPath;
    NSMutableSet *_lockTokens;
}

- (void)dealloc;
- (id)_lockHeaderWithTokens:(id)arg1;
- (id)_errorsFromResponse;
- (id)_generateRequestBody;
- (id)initWithIDiskSession:(id)arg1 andPropertiesForPaths:(id)arg2;

@end
