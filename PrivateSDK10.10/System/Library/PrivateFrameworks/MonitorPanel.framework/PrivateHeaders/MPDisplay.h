/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MPDisplayMode, NSArray, NSImage, NSMutableArray, NSMutableDictionary, NSString, NSUUID;

@interface MPDisplay : NSObject
{
    int _displayID;
    int _aliasID;
    unsigned int _ioService;
    NSString *_displayName;
    unsigned int _userFlags;
    NSMutableArray *_allModes;
    NSMutableArray *_trimmedModes;
    NSMutableArray *_listHQModes;
    NSMutableArray *_listModes;
    NSMutableArray *_userModes;
    NSMutableDictionary *_trimmedResolutions;
    NSMutableDictionary *_listHQResolutions;
    NSMutableDictionary *_listResolutions;
    NSMutableDictionary *_userResolutions;
    NSMutableArray *_scanRates;
    NSMutableArray *_scanRateStrings;
    MPDisplayMode *_defaultMode;
    MPDisplayMode *_nativeMode;
    MPDisplayMode *_currentMode;
    int _orientation;
    NSUUID *_uuid;
    NSImage *_displayIcon;
    NSImage *_displayResolutionPreviewIcon;
    struct CGRect _displayResolutionPreviewRect;
    BOOL _isSmartDisplay;
    BOOL _hasSafeMode;
    BOOL _hasSimulscan;
    BOOL _hasTVModes;
    BOOL _isHiDPI;
    BOOL _isRetina;
    BOOL _isBuiltIn;
    BOOL _hqModesForChiclets;
    BOOL _isMirrored;
    BOOL _isMirrorMaster;
    BOOL _isTV;
    BOOL _isProjector;
    BOOL _isAirPlayDisplay;
    BOOL _is4K;
    BOOL _hasMultipleRates;
    BOOL _hasZeroRate;
    BOOL _uiProjectorOverride;
    BOOL _needsUpdate;
    int _accessLock;
}

@property(readonly) struct CGRect displayResolutionPreviewRect; // @synthesize displayResolutionPreviewRect=_displayResolutionPreviewRect;
@property(readonly) NSImage *displayResolutionPreviewIcon; // @synthesize displayResolutionPreviewIcon=_displayResolutionPreviewIcon;
@property(readonly) NSImage *displayIcon; // @synthesize displayIcon=_displayIcon;
@property(readonly) BOOL hasZeroRate; // @synthesize hasZeroRate=_hasZeroRate;
@property(readonly) BOOL hasMultipleRates; // @synthesize hasMultipleRates=_hasMultipleRates;
@property(readonly) BOOL isAirPlayDisplay; // @synthesize isAirPlayDisplay=_isAirPlayDisplay;
@property(readonly) BOOL isProjector; // @synthesize isProjector=_isProjector;
@property(readonly) BOOL is4K; // @synthesize is4K=_is4K;
@property(readonly) BOOL isTV; // @synthesize isTV=_isTV;
@property(readonly) BOOL isMirrorMaster; // @synthesize isMirrorMaster=_isMirrorMaster;
@property(readonly) BOOL isMirrored; // @synthesize isMirrored=_isMirrored;
@property(readonly) BOOL isBuiltIn; // @synthesize isBuiltIn=_isBuiltIn;
@property(readonly) BOOL isHiDPI; // @synthesize isHiDPI=_isHiDPI;
@property(readonly) BOOL hasTVModes; // @synthesize hasTVModes=_hasTVModes;
@property(readonly) BOOL hasSimulscan; // @synthesize hasSimulscan=_hasSimulscan;
@property(readonly) BOOL hasSafeMode; // @synthesize hasSafeMode=_hasSafeMode;
@property(readonly) BOOL isSmartDisplay; // @synthesize isSmartDisplay=_isSmartDisplay;
@property int orientation; // @synthesize orientation=_orientation;
@property unsigned int userFlags; // @synthesize userFlags=_userFlags;
@property(readonly) int aliasID; // @synthesize aliasID=_aliasID;
@property(readonly) int displayID; // @synthesize displayID=_displayID;
@property(readonly) NSUUID *uuid;
@property(readonly) struct CGRect hardwareBounds;
@property(readonly) int mirrorMasterDisplayID;
@property(readonly) BOOL isForcedToMirror;
- (void)setMirrorMaster:(BOOL)arg1;
- (void)setMirrorMode:(id)arg1;
- (void)setMirrorModeNumber:(int)arg1;
- (int)setMode:(id)arg1;
- (int)setModeNumber:(int)arg1;
- (BOOL)isModeNative:(id)arg1;
- (BOOL)inDefaultMode;
- (BOOL)inBestForAirPlayMode;
- (id)modesForResolution:(id)arg1;
@property(readonly) MPDisplayMode *currentMode;
@property(readonly) MPDisplayMode *nativeMode;
@property(readonly) MPDisplayMode *defaultMode;
@property(readonly) NSArray *scanRateStrings;
@property(readonly) NSArray *scanRates;
- (id)allModes;
@property BOOL bestForVideoMode;
- (BOOL)supportsBestForVideoMode;
@property int underscan;
@property(readonly) int maxUnderscan;
@property(readonly) int minUnderscan;
- (BOOL)supportsUnderscan;
@property BOOL overscanEnabled;
- (BOOL)supportsOverscan;
- (BOOL)canChangeOrientation;
- (BOOL)hasMultipleScanRates;
@property(readonly) struct CGRect displayBounds;
- (id)modeWithNumber:(int)arg1;
- (id)modeMatchingResolutionOfMode:(id)arg1 withScanRate:(id)arg2;
- (id)modesMatchingResolutionOfMode:(id)arg1;
- (id)modesOfType:(unsigned long long)arg1;
- (id)resolutionsOfType:(unsigned long long)arg1;
- (void)refreshModes;
- (void)refreshResolutions;
- (void)refreshResolutions:(id)arg1 usingModeList:(id)arg2;
- (id)scanRateForString:(id)arg1;
- (id)stringForScanRate:(id)arg1;
- (void)refreshScanRates;
- (void)determineTrimmedModeList;
- (void)bucketizeDisplayModes;
- (void)addMatchingModesToTrimmed;
- (void)addTVModesToPreferred;
- (BOOL)isAlias:(int)arg1;
- (id)multiscanModesForMode:(id)arg1;
@property(readonly) BOOL hasMenuBar;
@property(readonly) BOOL isBuiltInRetina;
@property(readonly) NSString *titleName;
@property(retain, nonatomic) NSString *displayName;
- (void)dealloc;
- (id)initWithCGSDisplayID:(int)arg1;

@end
