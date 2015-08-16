/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface CHBGraphicProperties : NSObject
{
}

+ (id)oadGraphicPropertiesFromXlMarkerStyle:(const struct XlChartMarkerStyle *)arg1 complex:(_Bool)arg2 state:(id)arg3;
+ (id)oadStrokeFrom:(const struct XlChartLineStyle *)arg1;
+ (id)oadGraphicPropertiesFromState:(id)arg1 xlLineStyle:(const struct XlChartLineStyle *)arg2 xlFillStyle:(const struct XlChartFillStyle *)arg3;
+ (id)oadGraphicPropertiesFromXlChartSeriesFormat:(const struct XlChartSeriesFormat *)arg1 state:(id)arg2;
+ (id)oadGraphicPropertiesFromXlChartFrameType:(struct XlChartFrameType *)arg1 state:(id)arg2;
+ (int)lineWeightEnumFromWidth:(float)arg1;
+ (int)presetLinePatternEnumFromDash:(id)arg1;
+ (float)widthFromLineWeightEnum:(int)arg1;
+ (int)oaPresetDashTypeFromLinePatternEnum:(int)arg1;
+ (id)mapAssociatedEscherObjectstate:(id)arg1;
+ (id)mapFillStyleForMarker:(const struct XlChartMarkerStyle *)arg1 complex:(_Bool)arg2 state:(id)arg3;
+ (id)mapFillStyle:(const struct XlChartFillStyle *)arg1 xlPictureFormat:(const struct XlChartPicF *)arg2 state:(id)arg3;
+ (id)mapPresetDashFromPattern:(int)arg1;

@end
