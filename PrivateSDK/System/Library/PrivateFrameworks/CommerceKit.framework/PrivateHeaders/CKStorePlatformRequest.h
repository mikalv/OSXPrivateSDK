//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CommerceKit/SSRequest.h>

@class NSDictionary, NSString;

@interface CKStorePlatformRequest : SSRequest
{
    NSString *_action;
    NSDictionary *_parameters;
    CDUnknownBlockType _callbackBlock;
}

@property(readonly) NSString *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operationFinished:(id)arg1;
- (BOOL)issueRequestForIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)handleFinishResponse:(id)arg1 error:(id *)arg2;
@property(readonly) NSDictionary *parameters; // @dynamic parameters;
- (void)callbackWithError:(id)arg1;
- (void)callbackWithResponseDictionary:(id)arg1;
- (id)initWithAction:(id)arg1 parameters:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;

@end
