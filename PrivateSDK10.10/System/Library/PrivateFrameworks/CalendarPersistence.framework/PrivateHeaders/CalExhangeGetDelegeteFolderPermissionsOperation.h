/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface CalExhangeGetDelegeteFolderPermissionsOperation : NSObject
{
}

+ (id)permissionForPrincipal:(id)arg1 fromPermissions:(id)arg2 withBinding:(id)arg3;
+ (int)delegateUserPermissionForCalendarPermission:(int)arg1;
+ (int)permissionFromEWSCalendarPermission:(id)arg1;
+ (int)permissionFromEWSPermission:(id)arg1;
+ (BOOL)executeWithAccount:(id)arg1 withDelegate:(id)arg2 withError:(id *)arg3;

@end
