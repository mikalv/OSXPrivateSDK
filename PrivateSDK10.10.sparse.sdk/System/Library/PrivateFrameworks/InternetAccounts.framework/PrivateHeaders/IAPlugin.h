/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IAAccount, IAProvider, NSBundle, NSString;

@interface IAPlugin : NSObject
{
    NSBundle *_bundle;
    IAAccount *_account;
    IAProvider *_provider;
}

@property(retain) IAProvider *provider; // @synthesize provider=_provider;
@property(retain) IAAccount *account; // @synthesize account=_account;
@property(retain) NSBundle *bundle; // @synthesize bundle=_bundle;
- (void).cxx_destruct;
- (BOOL)isSocial;
- (long long)authType;
- (Class)authenticatorClass;
- (id)specialPluginBehaviors;
- (id)imageForAccount:(id)arg1;
@property(readonly) NSString *identifier;
- (id)userVisibleProviderName;
- (void)willSelectAccount:(id)arg1;
- (void)pluginDidLoad;
- (id)initWithBundle:(id)arg1;

@end
