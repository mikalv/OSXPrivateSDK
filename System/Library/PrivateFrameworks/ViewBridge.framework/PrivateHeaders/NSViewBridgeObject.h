//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<NSSecureCoding>;

@interface NSViewBridgeObject : NSObject
{
    unsigned char _owner;
    NSObject<NSSecureCoding> *_object;
}

@property(retain) NSObject<NSSecureCoding> *object; // @synthesize object=_object;
@property unsigned char owner; // @synthesize owner=_owner;
- (id)initWithObject:(id)arg1 owner:(unsigned char)arg2;
- (id)description;
- (void)dealloc;

@end
