/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface GKServerWebViewJSEnvironment : NSObject
{
}

+ (BOOL)isKeyExcludedFromWebScript:(const char *)arg1;
@property(readonly, nonatomic) NSString *dateFieldsOrder;
@property(readonly, nonatomic) NSString *client;
@property(readonly, nonatomic) NSString *osBuild;
@property(readonly, nonatomic) int osRevision;
@property(readonly, nonatomic) int osMinorVersion;
@property(readonly, nonatomic) int osMajorVersion;
@property(readonly, nonatomic) NSString *device;
@property(readonly, nonatomic) NSString *platform;
@property(readonly, nonatomic) NSString *udid;
- (id)attributeKeys;

@end
