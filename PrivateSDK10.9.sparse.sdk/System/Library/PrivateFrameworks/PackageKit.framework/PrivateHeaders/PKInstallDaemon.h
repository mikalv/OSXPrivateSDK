//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"
#import "PKInstallService.h"

@class NSMutableArray, NSMutableDictionary, NSString, NSXPCListener;

@interface PKInstallDaemon : NSObject <PKInstallService, NSXPCListenerDelegate>
{
    NSXPCListener *_listener;
    NSString *_connectionName;
    NSMutableDictionary *_tokenToInstallDictionary;
    NSMutableDictionary *_tokenToDoneBlockDictionary;
    id _currentToken;
    NSMutableArray *_tokenQueue;
    NSMutableDictionary *_validatedAuthorizations;
    NSMutableArray *_clients;
    struct dispatch_queue_s *_queueQueue;
    struct dispatch_queue_s *_serviceQueue;
    struct dispatch_queue_s *_clientNotifyQueue;
    struct dispatch_queue_s *_stateQueue;
    int _daemonState;
    int _idleCount;
}

+ (BOOL)doingRecursiveInstall;
+ (id)sharedServiceDaemon;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_runIdleTasks;
- (BOOL)_isProvidingPrivilegeEscalation;
- (BOOL)_requestHasValidAuthorization:(id)arg1 allowInteraction:(BOOL)arg2;
- (BOOL)_evaluateSecurityOfRequest:(id)arg1;
- (void)_invokeDoneBlocksForToken:(id)arg1;
- (void)_attachToToken:(id)arg1 withDoneBlock:(CDUnknownBlockType)arg2;
- (BOOL)removeTokenIfPossible:(id)arg1;
- (void)startNextInstallIfNeeded;
- (id)_currentClients;
- (void)startPurgeOfSandboxesOnVolume:(id)arg1 untilFreeSpaceAvailable:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)estimateOfPurgeableSpaceForSandboxesOnVolume:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)currentStageStatusOfInstallRequest:(id)arg1 calculatePurgeableSize:(BOOL)arg2 reply:(CDUnknownBlockType)arg3;
- (void)registerAuthorizationFromInstallRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)adoptToken:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)tokenForCurrentCommitIgnoringBlockingClients:(BOOL)arg1 reply:(CDUnknownBlockType)arg2;
- (void)displayNamesForToken:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)installStatusForToken:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)addToken:(id)arg1 deferReply:(BOOL)arg2 reply:(CDUnknownBlockType)arg3;
- (void)tokenForInstallRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)description;
- (id)_descriptionForToken:(id)arg1;
- (void)startListeningForConnectionsToService:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)installDidCancel:(id)arg1;
- (void)installDidFinish:(id)arg1;
- (void)install:(id)arg1 didFailWithError:(id)arg2;
- (void)_installDidEnd;
- (void)installWillFinish:(id)arg1;
- (void)installDidBegin:(id)arg1;

@end

