/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Slideshows/MUPoolObject.h>

@interface MURandom : MUPoolObject
{
    long long _state[31];
    long long *_frontPtr;
    long long *_rearPtr;
    long long *_endPtr;
}

+ (id)randomGeneratorWithSeed:(unsigned long long)arg1;
+ (BOOL)clearVars;
+ (CDStruct_7b508128 *)poolInfo;
- (double)randomFloatInRange:(double)arg1:(double)arg2;
- (long long)randomInt;
- (void)_seed:(unsigned long long)arg1;

@end
