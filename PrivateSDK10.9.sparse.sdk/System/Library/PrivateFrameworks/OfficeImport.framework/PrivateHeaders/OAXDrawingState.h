//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, OADBlipCollection, OADColorMap, OADColorScheme, OADFontScheme, OADStyleMatrix, OAVState, OAXClient, OAXTableStyleCache, OCPPackagePart;

__attribute__((visibility("hidden")))
@interface OAXDrawingState : NSObject
{
    OAXClient *mClient;
    OCPPackagePart *mPackagePart;
    OADStyleMatrix *mStyleMatrix;
    OAXTableStyleCache *mTableStyleCache;
    NSMutableDictionary *mShapeIdMap;
    id mDocumentState;
    OADBlipCollection *mTgtBlipCollection;
    NSMutableDictionary *mSrcURLToTgtBlipIndexMap;
    NSMutableArray *mTgtBulletBlips;
    NSMutableDictionary *mSrcURLToTgtBulletBlipIndexMap;
    OAVState *mOavState;
    OADColorScheme *mColorScheme;
    OADColorMap *mColorMap;
    OADFontScheme *mFontScheme;
    unsigned int mGroupDepth;
}

@property(retain, nonatomic) NSMutableDictionary *sourceURLToTargetBulletBlipIndexMap; // @synthesize sourceURLToTargetBulletBlipIndexMap=mSrcURLToTgtBulletBlipIndexMap;
@property(retain, nonatomic) NSMutableDictionary *sourceURLToTargetBlipIndexMap; // @synthesize sourceURLToTargetBlipIndexMap=mSrcURLToTgtBlipIndexMap;
- (BOOL)isInsideGroup;
- (void)popGroup;
- (void)pushGroup;
- (id)bulletBlipRefForURL:(id)arg1;
- (id)blipRefForURL:(id)arg1;
- (id)blipRefWithURL:(id)arg1 blipArray:(id)arg2 blipURLtoIndexMap:(id)arg3;
- (void)setTargetBulletBlipArray:(id)arg1;
- (void)setTargetBlipCollection:(id)arg1;
- (void)clearTargetBlipCollection;
- (id)targetBlipCollection;
- (void)setFontScheme:(id)arg1;
- (id)fontScheme;
- (void)setColorMap:(id)arg1;
- (id)colorMap;
- (void)setColorScheme:(id)arg1;
- (id)colorScheme;
- (void)setOavState:(id)arg1;
- (id)oavState;
- (void)setDocumentState:(id)arg1;
- (id)documentState;
- (void)resetForNewDrawing;
- (void)setDrawable:(id)arg1 forShapeId:(unsigned long long)arg2;
- (id)drawableForShapeId:(unsigned int)arg1;
- (void)setTableStyleCache:(id)arg1;
- (id)tableStyleCache;
- (void)setStyleMatrix:(id)arg1;
- (id)styleMatrix;
- (void)setPackagePart:(id)arg1;
- (id)packagePart;
- (id)client;
- (void)dealloc;
- (id)init;
- (id)initWithClient:(id)arg1;

@end

