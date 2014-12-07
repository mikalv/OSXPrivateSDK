/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary;

@interface ISUserNotification : NSObject
{
    long long _allowedRetryCount;
    long long _currentRetryCount;
    NSDictionary *_dictionary;
    unsigned long long _optionFlags;
    NSDictionary *_userInfo;
}

@property(retain) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property unsigned long long optionFlags; // @synthesize optionFlags=_optionFlags;
@property(retain) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property long long currentRetryCount; // @synthesize currentRetryCount=_currentRetryCount;
@property long long allowedRetryCount; // @synthesize allowedRetryCount=_allowedRetryCount;
- (void).cxx_destruct;
- (struct __CFUserNotification *)copyUserNotification;
- (id)initWithDictionary:(id)arg1 options:(unsigned long long)arg2;
- (id)init;

@end
