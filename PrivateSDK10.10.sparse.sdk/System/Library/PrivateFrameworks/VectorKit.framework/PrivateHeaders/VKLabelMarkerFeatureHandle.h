/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface VKLabelMarkerFeatureHandle : NSObject
{
    int _featureType;
    long long _featureIndex;
    int _tileX;
    int _tileY;
    int _tileZ;
}

- (id)initWithFeature:(CDStruct_e41bf108 *)arg1 featureType:(int)arg2;
- (int)tileZ;
- (int)tileY;
- (int)tileX;
- (long long)featureIndex;
- (int)featureType;

@end
