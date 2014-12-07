/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PackageKit/PKInstallOperation.h>

@class NSString, PKPackageSpecifier;

@interface PKRelocateComponentsInstallOperation : PKInstallOperation
{
    PKPackageSpecifier *_currentPackageSpecifier;
    NSString *_currentOldBundlePath;
    NSString *_currentNewBundlePath;
}

- (void)main;
- (BOOL)_localizeParentFolderForBundleAtPath:(id)arg1;
- (BOOL)_moveRelocatedComponentsForPackageSpecifier:(id)arg1 error:(id *)arg2;
- (id)messageTracerTernarySignature;
- (id)messageTracerComment;
- (id)messageTracerDomain;
- (id)currentPackageSpecifier;
- (int)installState;

@end
