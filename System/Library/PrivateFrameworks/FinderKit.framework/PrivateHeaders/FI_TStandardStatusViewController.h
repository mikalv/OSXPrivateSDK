//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TViewController.h>

@class NSButton, NSImage, NSImageView, NSProgressIndicator, NSString, NSTextField, NSTrackingArea;

__attribute__((visibility("hidden")))
@interface FI_TStandardStatusViewController : FI_TViewController
{
    NSString *_cancelMessageString;
    NSProgressIndicator *_progress;
    NSTextField *_titleText;
    NSTextField *_messageText;
    NSButton *_cancelButton;
    NSImageView *_imageView;
    NSImageView *_badgeView;
    NSTrackingArea *_cancelButtonTrackingArea;
    NSString *_titleString;
    NSString *_messageString;
    NSImage *_image;
    NSImage *_badgeImage;
    BOOL _indeterminate;
    BOOL _hasCancel;
    double _percentComplete;
    BOOL _shouldDisplayCancelString;
}

@property(nonatomic) BOOL hasCancel; // @synthesize hasCancel=_hasCancel;
@property(nonatomic) BOOL indeterminate; // @synthesize indeterminate=_indeterminate;
@property(retain, nonatomic) NSImage *badgeImage; // @synthesize badgeImage=_badgeImage;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(readonly, nonatomic) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
- (void)cancel:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas:(id)arg1;
- (void)updateAccessibilityDescriptionForImages;
- (void)setIcon:(struct OpaqueIconRef *)arg1;
@property(retain, nonatomic) NSString *cancelMessageString;
@property(retain, nonatomic) NSString *messageString;
- (void)loadView;
@property(nonatomic) double percentComplete;
- (void)tearDown;
- (void)finalize;
- (void)dealloc;
- (id)initWithStatusKind:(int)arg1;
- (id)init;

@end
