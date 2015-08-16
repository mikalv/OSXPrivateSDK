//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalABListener.h>

@class NSString;

@interface CalMeCardListener : CalABListener
{
    NSString *_meCardUniqueID;
}

+ (id)sharedListener;
@property(retain, nonatomic) NSString *meCardUniqueID; // @synthesize meCardUniqueID=_meCardUniqueID;
- (void)ensureMeCardCacheFileExists;
- (void)_configureInBackground;
- (void)_addressBookChanged:(id)arg1;
- (void)_runUpdateJobIfNecessaryInBackground;
- (BOOL)_checkIfMeCardOutOfDate;
- (void)_runUpdateJobSynchronously;
- (BOOL)_updateMyAttendeeForEventIDs:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)_scheduledEventManagedIDsInContext:(id)arg1;
- (void)_configureMeCardUniqueID;
- (id)_currentABMeCardEmails;
- (void)_writePlistEmails:(id)arg1;
- (id)_emailsFromPlist;
- (id)_plistPath;
- (void)dealloc;

@end
