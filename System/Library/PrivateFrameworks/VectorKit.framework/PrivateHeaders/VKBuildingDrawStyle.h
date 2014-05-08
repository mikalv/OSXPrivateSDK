//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKDrawStyle.h>

__attribute__((visibility("hidden")))
@interface VKBuildingDrawStyle : VKDrawStyle
{
    BOOL _hasStrokeColor3D;
    BOOL _hasStrokeWidth3D;
    struct VKProfileSparseRamp<signed char> visibility;
    struct VKProfileSparseRamp<_VGLColor> topColor;
    struct VKProfileSparseRamp<_VGLColor> facadeColor;
    struct VKProfileSparseRamp<_VGLColor> outlineColor;
    struct VKProfileSparseRamp<_VGLColor> landmarkColor;
    struct VKProfileSparseRamp<_VGLColor> flatColor;
    struct VKProfileSparseRamp<signed char> outline;
    int roofStyle;
    struct VKProfileSparseRamp<_VGLColor> footprintStrokeColor;
    struct VKProfileSparseRamp<float> footprintStrokeWidth;
    struct VKProfileSparseRamp<_VGLColor> strokeColor3D;
    struct VKProfileSparseRamp<float> strokeWidth3D;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)strokeWidth3DAtZoom:(float)arg1;
- (struct _VGLColor)strokeColor3DAtZoom:(float)arg1;
- (BOOL)hasStrokeWidth3D;
- (BOOL)hasStrokeColor3D;
- (float)footprintStrokeWidthAtZoom:(float)arg1;
- (struct _VGLColor)footprintStrokeColorAtZoom:(float)arg1;
- (int)roofStyle;
- (BOOL)visibleAtZoom:(float)arg1;
- (BOOL)outlineAtZoom:(float)arg1;
- (struct _VGLColor)flatColorAtZoom:(float)arg1;
- (struct _VGLColor)landmarkColorAtZoom:(float)arg1;
- (struct _VGLColor)outlineColorAtZoom:(float)arg1;
- (struct _VGLColor)facadeColorAtZoom:(float)arg1;
- (struct _VGLColor)topColorAtZoom:(float)arg1;
- (void)takeFromZoomInvariantProperties:(id)arg1;
- (void)takeFromStyleProperties:(id)arg1 atZoom:(unsigned long long)arg2 globals:(id)arg3;
- (id)variant;

@end
