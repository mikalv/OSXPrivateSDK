//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface AFAssistantNibObjectInfo : NSObject <NSCoding>
{
    NSString *_title;
    NSString *_nextPage;
    BOOL _finishing;
}

+ (void)initialize;
- (BOOL)hasInfo;
- (void)setFinishing:(BOOL)arg1;
- (BOOL)finishing;
- (void)setNextPage:(id)arg1;
- (id)nextPage;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end
