//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSScroller.h"

__attribute__((visibility("hidden")))
@interface SidebarScroller : NSScroller
{
}

+ (BOOL)isCompatibleWithOverlayScrollers;
- (void)drawKnob;
- (void)drawKnobSlotInRect:(struct CGRect)arg1 highlight:(BOOL)arg2;
- (struct CGRect)rectForPart:(unsigned long long)arg1;
- (void)setFrameOrigin:(struct CGPoint)arg1;

@end
