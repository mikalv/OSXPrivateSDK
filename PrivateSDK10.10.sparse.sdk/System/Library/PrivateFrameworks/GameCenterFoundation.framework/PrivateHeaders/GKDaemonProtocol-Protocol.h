/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol GKDaemonProtocol <NSObject>
- (oneway void)getAuthenticatedPlayerInfo:(id)arg1;
- (oneway void)getAuthenticatedPlayerIDWithHandler:(id)arg1;
- (oneway void)getAccountNameWithHandler:(id)arg1;
- (oneway void)getPrivateServicesForPID:(int)arg1 reply:(id)arg2;
- (oneway void)getServicesForPID:(int)arg1 reply:(id)arg2;
- (oneway void)setHostPID:(int)arg1 reply:(id)arg2;
@end
