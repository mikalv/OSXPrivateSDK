/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, NSString;

@interface IADataPluginNotificationEvent : NSObject
{
    NSString *_uid;
    NSString *_pluginID;
    NSString *_eventType;
    NSDate *_date;
}

+ (id)eventForPlugin:(id)arg1 uid:(id)arg2 eventType:(id)arg3 date:(id)arg4;
@property(retain) NSDate *date; // @synthesize date=_date;
@property(retain) NSString *eventType; // @synthesize eventType=_eventType;
@property(retain) NSString *pluginID; // @synthesize pluginID=_pluginID;
@property(retain) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)description;

@end
