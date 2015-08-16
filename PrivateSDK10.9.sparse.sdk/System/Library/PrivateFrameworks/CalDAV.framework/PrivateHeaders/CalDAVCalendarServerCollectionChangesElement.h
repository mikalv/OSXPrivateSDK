//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalDAV/CalDAVCalendarServerResourceChangeElement.h>

@interface CalDAVCalendarServerCollectionChangesElement : CalDAVCalendarServerResourceChangeElement
{
    long long _created;
    long long _updated;
    long long _deleted;
}

@property long long deleted; // @synthesize deleted=_deleted;
@property long long updated; // @synthesize updated=_updated;
@property long long created; // @synthesize created=_created;
- (id)copyParseRules;
- (void)setDeletedItem:(id)arg1;
- (void)setUpdatedItem:(id)arg1;
- (void)setCreatedItem:(id)arg1;
- (id)init;

@end
