/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSURL;

// Not exported
@interface SiteMetadataResponse : NSObject
{
    int _type;
    NSURL *_url;
    NSDictionary *_metadata;
}

+ (id)responseWithURL:(id)arg1 type:(int)arg2 metadata:(id)arg3;
@property(readonly, copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 type:(int)arg2 metadata:(id)arg3;
- (id)init;

@end
