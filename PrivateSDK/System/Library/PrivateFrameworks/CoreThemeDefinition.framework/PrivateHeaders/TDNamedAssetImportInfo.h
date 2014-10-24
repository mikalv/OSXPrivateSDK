//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, NSURL;

@interface TDNamedAssetImportInfo : NSObject
{
    NSString *_name;
    long long _nameIdentifier;
    NSURL *_fileURL;
    NSDate *_modificationDate;
    long long _idiom;
    long long _subtype;
    unsigned long long _scaleFactor;
    long long _renditionType;
    long long _resizingMode;
    struct CGSize _resizableSliceSize;
    struct TDNamedAssetImportEdgeInsets _sliceInsets;
}

@property(nonatomic) struct CGSize resizableSliceSize; // @synthesize resizableSliceSize=_resizableSliceSize;
@property(nonatomic) long long resizingMode; // @synthesize resizingMode=_resizingMode;
@property(nonatomic) long long renditionType; // @synthesize renditionType=_renditionType;
@property(nonatomic) struct TDNamedAssetImportEdgeInsets sliceInsets; // @synthesize sliceInsets=_sliceInsets;
@property(nonatomic) unsigned long long scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) long long subtype; // @synthesize subtype=_subtype;
@property(nonatomic) long long idiom; // @synthesize idiom=_idiom;
@property(copy, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(nonatomic) long long nameIdentifier; // @synthesize nameIdentifier=_nameIdentifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (long long)renditionSubtype;
- (void)dealloc;

@end
