//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSButton, NSTextField;

__attribute__((visibility("hidden")))
@interface SafariModalPanelController : NSWindowController
{
    NSTextField *titleField;
    NSTextField *messageField;
    NSButton *defaultButton;
    NSButton *alternateButton;
    NSButton *suppressionButton;
}

- (void)_buttonActivated:(id)arg1;
- (id)suppressionButton;
- (BOOL)showsSuppressionButton;
- (void)setShowsSuppressionButton:(BOOL)arg1;
- (long long)runModal;
- (void)beginSheetModalForWindow:(id)arg1 modalDelegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void *)arg4;
- (id)initWithTitle:(id)arg1 message:(id)arg2 defaultButton:(id)arg3 alternateButton:(id)arg4;
- (id)windowNibName;

@end
