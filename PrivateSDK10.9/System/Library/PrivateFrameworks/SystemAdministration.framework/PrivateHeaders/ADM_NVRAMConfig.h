//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ADM_NVRAMConfig : NSObject
{
}

+ (id)sharedNVRAMConfig;
- (BOOL)write:(id)arg1 withAuthorization:(id)arg2;
- (void)setStartupFromNetBootImage:(id)arg1;
- (void)setStartupFromNetBootImage:(id)arg1 reportSuccessTo:(id)arg2;
- (void)lookForNetBootServersAndReportTo:(id)arg1;
- (void)write:(id)arg1;

@end
