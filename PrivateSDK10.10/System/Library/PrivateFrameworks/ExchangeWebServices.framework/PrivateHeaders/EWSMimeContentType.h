/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface EWSMimeContentType : NSObject
{
    NSString *_CharacterSet;
    NSString *_stringValue;
}

+ (id)definition;
@property(copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(copy, nonatomic) NSString *CharacterSet; // @synthesize CharacterSet=_CharacterSet;
- (id)description;
- (void)dealloc;

@end
