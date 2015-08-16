/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ScreenSharing/SSGestureEvent.h>

// Not exported
@interface SSGestureMagnifyEvent : SSGestureEvent
{
    double mMagnification;
    void *mReservedForInstanceVariablesGestureMagnify;
}

+ (id)gestureMagnifyEventWithCoordinates:(struct SSPoint)arg1 subType:(long long)arg2 magnification:(double)arg3;
@property(readonly) double magnification; // @synthesize magnification=mMagnification;
- (id)initWithCoordinates:(struct SSPoint)arg1 subType:(long long)arg2 magnification:(double)arg3;

@end
