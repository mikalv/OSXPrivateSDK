//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFileManager.h"

@interface NSFileManager (XSRemoteAdditions)
- (BOOL)copyItemAtPath:(id)arg1 toServer:(id)arg2 atPath:(id)arg3 userName:(id)arg4 password:(id)arg5 error:(out id *)arg6;
- (BOOL)copyItemFromServer:(id)arg1 atPath:(id)arg2 toPath:(id)arg3 userName:(id)arg4 password:(id)arg5 error:(out id *)arg6;
- (BOOL)copyItemFromServer:(id)arg1 atPath:(id)arg2 sourceUserName:(id)arg3 sourcePassword:(id)arg4 toServer:(id)arg5 atPath:(id)arg6 destinationUserName:(id)arg7 destinationPassword:(id)arg8 error:(out id *)arg9;
- (BOOL)fileExistsOnServer:(id)arg1 atPath:(id)arg2 userName:(id)arg3 password:(id)arg4 error:(out id *)arg5;
- (id)temporaryPathWithTemplate:(id)arg1;
@end
