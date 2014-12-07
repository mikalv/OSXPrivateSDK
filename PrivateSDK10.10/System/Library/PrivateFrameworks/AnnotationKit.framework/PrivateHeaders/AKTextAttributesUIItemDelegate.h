/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "AKTextAttributesUserInterfaceItem-Protocol.h"
#import "AKUserInterfaceItem-Protocol.h"

@class AKTextAttributesViewController, NSString;

@interface AKTextAttributesUIItemDelegate : NSObject <AKUserInterfaceItem, AKTextAttributesUserInterfaceItem>
{
    AKTextAttributesViewController *_parentController;
}

@property __weak AKTextAttributesViewController *parentController; // @synthesize parentController=_parentController;
- (void).cxx_destruct;
- (void)syncTextAttributesToUI:(id)arg1;
- (id)convertTextAttributes:(id)arg1;
- (long long)tag;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
