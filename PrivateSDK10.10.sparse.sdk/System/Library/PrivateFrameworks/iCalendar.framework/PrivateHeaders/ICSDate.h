/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iCalendar/ICSProperty.h>

@class NSString;

@interface ICSDate : ICSProperty
{
}

- (id)parametersToIncludeForChecksumVersion:(int)arg1;
- (id)description;
- (BOOL)hasFloatingTimeZone;
- (BOOL)hasTimeComponent;
- (id)components;
@property(retain, nonatomic) NSString *tzid;
- (id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 timeZone:(id)arg7;
- (id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6;
- (id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
- (id)initWithValue:(id)arg1;

@end
