/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <FinderKit/FI_TLayer.h>

// Not exported
@interface FI_TInlineProgressBarLayer : FI_TLayer
{
    double _percentComplete;
    unsigned int _state;
    int _flatProgressVariant;
    _Bool _selected;
    _Bool _keepingAnimationAlive;
}

+ (BOOL)needsDisplayForKey:(id)arg1;
@property _Bool selected; // @synthesize selected=_selected;
@property int flatProgressVariant; // @synthesize flatProgressVariant=_flatProgressVariant;
@property unsigned int state; // @synthesize state=_state;
@property double percentComplete; // @synthesize percentComplete=_percentComplete;
- (void)keepAnimationAlive;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)setPercentCompleteAnimated:(double)arg1;
- (id)initWithLayer:(id)arg1;
- (id)initVariant:(int)arg1;

@end
