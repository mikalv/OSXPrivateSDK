//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSharingServiceDelegate.h"
#import "NSSharingServicePickerDelegate.h"

@class MUIWKViewController, NSDictionary, NSMapTable, NSMenu, NSSharingServicePicker;

@interface MUIContextMenuController : NSObject <NSSharingServiceDelegate, NSSharingServicePickerDelegate>
{
    MUIWKViewController *_viewController;
    NSMenu *_shareMenu;
    NSSharingServicePicker *_picker;
    NSDictionary *_applicationDictionary;
    NSMapTable *_sharingItems;
}

@property(retain, nonatomic) NSMapTable *sharingItems; // @synthesize sharingItems=_sharingItems;
@property(retain, nonatomic) NSDictionary *applicationDictionary; // @synthesize applicationDictionary=_applicationDictionary;
@property(retain, nonatomic) NSSharingServicePicker *picker; // @synthesize picker=_picker;
@property(retain, nonatomic) NSMenu *shareMenu; // @synthesize shareMenu=_shareMenu;
@property(nonatomic) MUIWKViewController *viewController; // @synthesize viewController=_viewController;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2;
- (id)sharingServicePicker:(id)arg1 delegateForSharingService:(id)arg2;
- (id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3;
- (void)_handleClickedItem:(struct OpaqueWKContextMenuItem *)arg1;
- (void)_addProposedContextMenuItems:(struct OpaqueWKArray *)arg1 toMenu:(struct OpaqueWKArray **)arg2;
- (id)_applicationNameFromIdentifier:(id)arg1;
- (struct WKPageContextMenuClient)contextMenuClient;
- (void)dealloc;

@end
