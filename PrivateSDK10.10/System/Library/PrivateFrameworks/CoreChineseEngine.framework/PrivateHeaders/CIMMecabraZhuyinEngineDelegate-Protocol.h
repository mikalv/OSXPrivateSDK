/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol CIMMecabraZhuyinEngineDelegate <NSObject>

@optional
- (id)inputModeNameForMecabraEngine:(id)arg1;
- (void)mecabraEngine:(id)arg1 willDropComposedText:(id)arg2;
- (void)mecabraEngine:(id)arg1 didUpdateComposedText:(id)arg2 withCursorLocation:(unsigned long long)arg3;
- (id)mecabraEngine:(id)arg1 textAttributeForStyle:(long long)arg2 atRange:(struct _NSRange)arg3;
@end
