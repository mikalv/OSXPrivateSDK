//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface BKItemFormatEntry : NSObject
{
    NSMutableArray *_itemKeys;
    NSMutableArray *_itemLabels;
    NSMutableArray *_itemFormatters;
    NSMutableArray *_itemTransformers;
}

- (id)itemValueAtIndex:(long long)arg1 forItem:(id)arg2 withDefaultAttributes:(id)arg3;
- (id)itemLabelAtIndex:(long long)arg1 forItem:(id)arg2 withDefaultAttributes:(id)arg3;
- (long long)itemAttributeCount;
- (id)itemKeys;
- (void)dealloc;
- (id)initWithItemKeys:(id)arg1;

@end
