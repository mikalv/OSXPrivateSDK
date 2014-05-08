//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFont;

@interface CalUILocationFieldOptions : NSObject
{
    BOOL _shouldDisplaySubtextField;
    BOOL _shouldDisplayControlBackground;
    BOOL _shouldDisplayLocationIcon;
    BOOL _shouldDrawControlBorder;
    BOOL _shouldDrawControlBezel;
    BOOL _shouldDisplayLocationDistances;
    BOOL _includeLocalSearchResults;
    BOOL _includeCurrentLocation;
    NSFont *_controlFont;
}

@property(retain) NSFont *controlFont; // @synthesize controlFont=_controlFont;
@property BOOL includeCurrentLocation; // @synthesize includeCurrentLocation=_includeCurrentLocation;
@property BOOL includeLocalSearchResults; // @synthesize includeLocalSearchResults=_includeLocalSearchResults;
@property BOOL shouldDisplayLocationDistances; // @synthesize shouldDisplayLocationDistances=_shouldDisplayLocationDistances;
@property BOOL shouldDrawControlBezel; // @synthesize shouldDrawControlBezel=_shouldDrawControlBezel;
@property BOOL shouldDrawControlBorder; // @synthesize shouldDrawControlBorder=_shouldDrawControlBorder;
@property BOOL shouldDisplayLocationIcon; // @synthesize shouldDisplayLocationIcon=_shouldDisplayLocationIcon;
@property BOOL shouldDisplayControlBackground; // @synthesize shouldDisplayControlBackground=_shouldDisplayControlBackground;
@property BOOL shouldDisplaySubtextField; // @synthesize shouldDisplaySubtextField=_shouldDisplaySubtextField;

@end
