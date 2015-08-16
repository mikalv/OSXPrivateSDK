/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Slideshows/MCAnimationPathPhysics.h>

@interface MRAnimationPathPhysics : MCAnimationPathPhysics
{
    float mBaseValue;
    float mDeltaValue;
    float mVelocity;
    double mTime;
}

@property(nonatomic) float velocity; // @synthesize velocity=mVelocity;
@property(nonatomic) float baseValue; // @synthesize baseValue=mBaseValue;
- (float)computeValueForTime:(double)arg1 withContext:(id)arg2;
- (id)initWithMCAnimationPath:(id)arg1;

@end
