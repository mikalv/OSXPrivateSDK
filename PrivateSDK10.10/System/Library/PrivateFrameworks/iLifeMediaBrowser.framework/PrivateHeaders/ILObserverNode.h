/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface ILObserverNode : NSObject
{
    NSMutableArray *observers;
}

- (long long)observedCount;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)removeOneObserver:(id)arg1;
- (id)observers;
- (void)dealloc;
- (id)initWithObserver:(id)arg1;

@end
