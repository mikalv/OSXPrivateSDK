//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSConditionLock, NSMutableArray, NSString;

@interface IFDownloadManager : NSObject
{
    BOOL runDownloadQueue;
    NSString *downloadsDirectory;
    NSConditionLock *downloadQLock;
    NSMutableArray *downloadQueue;
    struct _opaque_pthread_t *downloadQueuePthread;
    BOOL runUploadQueue;
    NSConditionLock *uploadQLock;
    NSMutableArray *uploadQueue;
    struct _opaque_pthread_t *uploadQueuePthread;
}

+ (void)registerToken:(id)arg1;
+ (id)sharedManager;
- (void)dealloc;
- (id)init;
- (void)_uploadQueryProcessing;
- (void)_uploadFileProcessing;
- (void)uploadItem:(id)arg1;
- (id)_findProxyFor:(id)arg1;
- (void)_downloadItem:(id)arg1;
- (void)_downloadProcessing;
- (void)downloadItem:(id)arg1;

@end
