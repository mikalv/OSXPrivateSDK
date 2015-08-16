//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XSLogParser.h"

@class XSLogMessageSet;

@interface XSLogFileParser : NSObject <XSLogParser>
{
    XSLogMessageSet *_messageSet;
}

+ (id)messageWithLogEntry:(id)arg1;
+ (unsigned long long)messageIdentifierForLogEntry:(id)arg1;
+ (unsigned long long)levelForMessageString:(id)arg1;
+ (BOOL)messageStringIsDebug:(id)arg1;
+ (BOOL)messageStringIsWarning:(id)arg1;
+ (BOOL)messageStringIsError:(id)arg1;
+ (id)dateWithString:(id)arg1;
+ (id)monthStrings;
@property __weak XSLogMessageSet *messageSet; // @synthesize messageSet=_messageSet;
- (id)messageSetForMessagesBetween:(id)arg1 and:(id)arg2 limit:(unsigned long long)arg3;

@end
