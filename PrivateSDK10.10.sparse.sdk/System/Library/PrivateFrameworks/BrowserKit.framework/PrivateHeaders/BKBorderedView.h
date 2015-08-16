/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class NSColor;

// Not exported
@interface BKBorderedView : NSView
{
    NSColor *_backgroundColor;
    NSColor *_edgeColors[4];
    double _edgeWidths[4];
}

- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (void)getColor:(id *)arg1 width:(double *)arg2 ofEdge:(unsigned long long)arg3;
- (void)setColor:(id)arg1 width:(double)arg2 ofEdge:(unsigned long long)arg3;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (void)finalize;
- (void)dealloc;

@end
