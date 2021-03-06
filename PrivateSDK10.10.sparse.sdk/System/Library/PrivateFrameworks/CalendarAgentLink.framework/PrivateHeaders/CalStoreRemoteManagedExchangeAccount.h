/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarAgentLink/CalStoreRemoteManagedAccount.h>

@class NSString, NSURL;

@interface CalStoreRemoteManagedExchangeAccount : CalStoreRemoteManagedAccount
{
    NSURL *_externalURL;
    NSURL *_internalWebServicesURL;
    NSString *_password;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSURL *internalWebServicesURL; // @synthesize internalWebServicesURL=_internalWebServicesURL;
@property(retain, nonatomic) NSURL *externalURL; // @synthesize externalURL=_externalURL;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

