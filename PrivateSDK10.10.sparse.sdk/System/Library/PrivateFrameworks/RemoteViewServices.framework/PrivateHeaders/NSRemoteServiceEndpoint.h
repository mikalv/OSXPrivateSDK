/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface NSRemoteServiceEndpoint : NSObject
{
    struct _xpc_connection_s *_connection;
    id _errorHandler;
    id _connectionHandler;
    BOOL _isAcceptingConnections;
}

- (void)stop;
- (void)start;
- (void)_connectionDidReceiveEvent:(void *)arg1;
- (void)setConnectionHandler:(id)arg1;
- (void)setErrorHandler:(id)arg1;
- (void *)endpoint;
- (void)dealloc;
- (id)init;

@end
