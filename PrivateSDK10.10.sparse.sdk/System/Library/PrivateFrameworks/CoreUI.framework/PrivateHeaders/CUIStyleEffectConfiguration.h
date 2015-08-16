/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@interface CUIStyleEffectConfiguration : NSObject <NSCopying>
{
    long long _state;
    long long _presentationState;
    long long _value;
    BOOL _useSimplifiedEffect;
    BOOL _foregroundColorShouldTintEffects;
}

@property(nonatomic) BOOL foregroundColorShouldTintEffects; // @synthesize foregroundColorShouldTintEffects=_foregroundColorShouldTintEffects;
@property(nonatomic) BOOL useSimplifiedEffect; // @synthesize useSimplifiedEffect=_useSimplifiedEffect;
@property(nonatomic) long long value; // @synthesize value=_value;
@property(nonatomic) long long presentationState; // @synthesize presentationState=_presentationState;
@property(nonatomic) long long state; // @synthesize state=_state;
- (id)description;
- (BOOL)shouldRespectOutputBlending;
- (BOOL)shouldIgnoreForegroundColor;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
