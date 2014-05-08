//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "CNAutocompleteFetchDelegate.h"
#import "NSMenuDelegate.h"
#import "NSPopoverDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"
#import "NSTokenFieldDelegate.h"
#import "SOTokenAttachmentCellDelegate.h"
#import "SOTokenFieldCellDragDelegate.h"

@class IMBatchIDStatusQueryController, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString, NSTimer, SOChatDisplayController, SOTokenField, SOTokenFieldCell;

@interface SOTokenFieldController : NSViewController <NSTokenFieldDelegate, NSMenuDelegate, NSPopoverDelegate, NSTableViewDataSource, NSTableViewDelegate, SOTokenAttachmentCellDelegate, SOTokenFieldCellDragDelegate, CNAutocompleteFetchDelegate>
{
    long long _selectedRow;
    NSString *_searchString;
    NSMutableSet *_forcedDanglingIDs;
    NSArray *_unmaskedIMHandles;
    NSMutableDictionary *_imHandleGUIDToMenuItemMap;
    NSMutableSet *_requestingIMHandles;
    NSMutableSet *_handlesKnownToBeValid;
    NSDate *_previousCompletionDisplayDate;
    unsigned long long _previousListCount;
    BOOL _wroteToPasteboard;
    BOOL _addTokensFromDrag;
    id _widthForHeightContentsCache;
    unsigned int _skipCompletionRebuilding:1;
    unsigned int _delegateRespondsToHasError:1;
    unsigned int _delegateRespondsToAdditionalSearchHandles:1;
    NSMutableArray *_autoCompleteResults;
    _Bool _canShowCompletionResults;
    NSTimer *_showCompletionResultsTimer;
    BOOL _isChangingFirstResponder;
    BOOL _suppressErrorDisplay;
    BOOL _isSearchingServer;
    BOOL _foundResults;
    SOTokenFieldCell *_layoutTestCell;
    SOTokenFieldCell *_uncachedLayoutTestCell;
    NSMutableOrderedSet *_searchResults;
    SOChatDisplayController *_chatDisplayController;
    long long _completionWindowLevel;
    id <SOTokenFieldControllerDelegate> _soTokenFieldControllerDelegate;
    id <CNCancelable> _currentSearchRequest;
    IMBatchIDStatusQueryController *_statusQueryController;
    id _showingMenuForRepresentedObject;
}

+ (BOOL)_errorIsCritical:(int)arg1;
+ (id)_localizedMessageForError:(int)arg1 imHandle:(id)arg2;
+ (void)initialize;
+ (id)_connectedServices;
+ (void)_updateABPropertyToIMServiceMap;
@property(retain) id showingMenuForRepresentedObject; // @synthesize showingMenuForRepresentedObject=_showingMenuForRepresentedObject;
@property(retain, nonatomic) IMBatchIDStatusQueryController *statusQueryController; // @synthesize statusQueryController=_statusQueryController;
@property(retain, nonatomic) id <CNCancelable> currentSearchRequest; // @synthesize currentSearchRequest=_currentSearchRequest;
@property BOOL foundResults; // @synthesize foundResults=_foundResults;
@property BOOL isSearchingServer; // @synthesize isSearchingServer=_isSearchingServer;
@property __weak id <SOTokenFieldControllerDelegate> soTokenFieldControllerDelegate; // @synthesize soTokenFieldControllerDelegate=_soTokenFieldControllerDelegate;
@property long long completionWindowLevel; // @synthesize completionWindowLevel=_completionWindowLevel;
@property BOOL suppressErrorDisplay; // @synthesize suppressErrorDisplay=_suppressErrorDisplay;
@property(nonatomic) BOOL isChangingFirstResponder; // @synthesize isChangingFirstResponder=_isChangingFirstResponder;
@property(nonatomic) __weak SOChatDisplayController *chatDisplayController; // @synthesize chatDisplayController=_chatDisplayController;
- (void).cxx_destruct;
- (int)_handleHasError:(id)arg1;
- (void)menuDidClose:(id)arg1;
- (id)tokenField:(id)arg1 menuForRepresentedObject:(id)arg2;
- (id)_actionItemForHandle:(id)arg1;
- (void)_resolveErrorForHandle:(id)arg1;
- (id)_tokenMenuItemWithTitle:(id)arg1 label:(id)arg2 representedObject:(id)arg3 action:(SEL)arg4;
- (BOOL)tokenField:(id)arg1 hasMenuForRepresentedObject:(id)arg2;
- (void)showErrorMessageForHandle:(id)arg1;
- (void)switchToHandle:(id)arg1;
- (void)_switchHandle:(id)arg1 toHandle:(id)arg2;
- (id)_alternativeHandlesForHandle:(id)arg1 includeABCombinations:(BOOL)arg2;
- (void)_handleIDStatusChangedInMenu:(id)arg1;
- (void)showInAddressBook:(id)arg1;
- (BOOL)_showContactCardForIMHandle:(id)arg1;
- (BOOL)tokenField:(id)arg1 writeRepresentedObjects:(id)arg2 toPasteboard:(id)arg3;
- (id)tokenField:(id)arg1 readFromPasteboard:(id)arg2;
- (id)_strippedPboardString:(id)arg1;
- (id)tokenField:(id)arg1 editingStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 setUpTokenAttachmentCell:(id)arg2 forRepresentedObject:(id)arg3;
- (id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 shouldAddObjects:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)tokenField:(id)arg1 representedObjectForEditingString:(id)arg2;
- (id)control:(id)arg1 textView:(id)arg2 completions:(id)arg3 forPartialWordRange:(struct _NSRange)arg4 indexOfSelectedItem:(long long *)arg5;
- (void)tokenFieldCellDidEndDropOperation:(id)arg1;
- (void)tokenFieldCellDidBeginDropOperation:(id)arg1;
- (void)_invalidateShowCompletionResultsTimer;
- (id)_nameForMatches:(id)arg1 ID:(id)arg2 fullName:(id)arg3 firstName:(id)arg4 lastName:(id)arg5;
- (void)_addSearchResult:(id)arg1 toSearchResults:(id)arg2;
- (void)_updateAutoCompleteUI;
- (BOOL)_substringMatch:(id)arg1 first:(id)arg2 second:(id)arg3;
- (void)showCompletions;
- (id)_sharedCompletionWindow;
- (id)_sharedCompletionTableView;
- (void)_handleIDStatusChanged:(id)arg1;
- (void)_traceCompletionSelection;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)autocompleteFetchDidFinish:(id)arg1;
- (void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;
- (void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;
- (void)controlTextDidChange:(id)arg1;
- (void)_showCompletionResultsTimerFired:(id)arg1;
- (void)_startAutocompletionWithServer:(BOOL)arg1;
- (void)_tokenizeCompletionRangeInTextView:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (BOOL)tableView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 dataCellForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (_Bool)tokenAttachmentCellShouldBeDrawnSelected:(id)arg1;
- (BOOL)tokenAttachmentCellHasErrorState:(id)arg1;
- (BOOL)cellClicked:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 withEvent:(id)arg4;
- (void)_alertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)_imHandleFromCompletionResult:(id)arg1;
- (id)_imHandleFromCompletionResult:(id)arg1 suppressValidationCheck:(BOOL)arg2;
- (void)_postTokensDidChangeNotification;
- (double)desiredHeightForWidth:(double)arg1;
- (void)unmaskAllTokens;
- (id)maskTokensToFitWidth:(double)arg1;
- (BOOL)needMaskingForTokenFieldWidth:(double)arg1;
- (void)chatDisplayControllerDidChange;
- (void)chatDisplayControllerWillChange:(id)arg1;
- (void)setSOTokenFieldControllerDelegate:(id)arg1;
- (id)localizedErrorMessage;
- (void)dismissCompletionUI;
- (double)_desiredHeightForWidth:(double)arg1 content:(id)arg2;
- (double)_desiredHeightForWidth:(double)arg1 content:(id)arg2 useCache:(BOOL)arg3;
- (id)_firstHandleAccount;
- (id)imHandlesList;
- (void)getValidHandles:(id *)arg1 validatingHandles:(id *)arg2 invalidHandles:(id *)arg3;
- (id)errorHandles;
- (void)appendIMHandle:(id)arg1 allowChangingAccount:(BOOL)arg2;
- (void)_requestIDStatusForHandles:(id)arg1;
- (void)_requestIDStatusForHandle:(id)arg1;
@property(retain, nonatomic) NSArray *imHandles;
- (void)setImHandles:(id)arg1 allowChangingAccount:(BOOL)arg2;
- (id)_tokenFieldObjectValue;
- (void)_setTokenFieldObjectValue:(id)arg1;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
@property(readonly, nonatomic) SOTokenField *tokenField; // @dynamic tokenField;
- (void)loadView;
- (void)dealloc;
- (id)init;
@property(readonly) NSMutableOrderedSet *searchResults; // @synthesize searchResults=_searchResults;
@property(readonly) SOTokenFieldCell *uncachedLayoutTestCell; // @synthesize uncachedLayoutTestCell=_uncachedLayoutTestCell;
@property(readonly) SOTokenFieldCell *layoutTestCell; // @synthesize layoutTestCell=_layoutTestCell;

@end
