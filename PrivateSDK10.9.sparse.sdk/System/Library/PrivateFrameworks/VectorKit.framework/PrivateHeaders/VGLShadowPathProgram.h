//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VGLProgram.h>

__attribute__((visibility("hidden")))
@interface VGLShadowPathProgram : VGLProgram
{
    int _uDirection;
    CDStruct_03942939 _direction;
    int _uWidth;
    float _width;
    int _uColor;
    struct _VGLColor _color;
}

+ (id)fragName;
+ (id)vertName;
@property(nonatomic) struct _VGLColor color; // @synthesize color=_color;
@property(nonatomic) float width; // @synthesize width=_width;
@property(nonatomic) CDStruct_03942939 direction; // @synthesize direction=_direction;
- (id).cxx_construct;
- (void)setup;

@end
