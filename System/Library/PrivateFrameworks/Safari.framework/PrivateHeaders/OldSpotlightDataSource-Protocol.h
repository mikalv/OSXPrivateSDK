//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol OldSpotlightDataSource <NSObject>
- (void)updateDidEndForSpotlightDataType:(NSString *)arg1;
- (void)updateWillBeginForSpotlightDataType:(NSString *)arg1;
- (void)resetAdditionsAndDeletionsForSpotlightDataType:(NSString *)arg1;
- (NSArray *)allItemsForSpotlightDataType:(NSString *)arg1;
- (NSArray *)itemsToDeleteForSpotlightDataType:(NSString *)arg1;
- (NSArray *)itemsToAddForSpotlightDataType:(NSString *)arg1;
@end
