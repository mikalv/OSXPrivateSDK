/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ScreenSharing/SSCredentials.h>

@class NSString;

@interface SSPasswordCredentials : SSCredentials
{
    NSString *mPassword;
    void *mReservedForInstanceVariablesPassword;
}

+ (id)vncAuthenticationCredentialsWithPassword:(id)arg1;
@property(readonly) NSString *password; // @synthesize password=mPassword;
- (void)dealloc;
- (id)initWithAuthenticationType:(id)arg1 withPassword:(id)arg2;

@end
