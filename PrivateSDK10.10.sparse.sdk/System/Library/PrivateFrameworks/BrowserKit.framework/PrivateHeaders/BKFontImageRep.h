/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSImageRep.h"

@class NSString;

// Not exported
@interface BKFontImageRep : NSImageRep
{
    NSString *_fontName;
}

+ (id)imageWithFontName:(id)arg1;
- (void)dealloc;
- (BOOL)_drawFromRect:(struct CGRect)arg1 toRect:(struct CGRect)arg2 operation:(unsigned long long)arg3 alpha:(float)arg4 compositing:(BOOL)arg5 flipped:(BOOL)arg6 ignoreContext:(BOOL)arg7;
- (BOOL)drawInRect:(struct CGRect)arg1;
- (BOOL)drawAtPoint:(struct CGPoint)arg1;
- (BOOL)draw;
- (id)initWithFontName:(id)arg1;

@end
