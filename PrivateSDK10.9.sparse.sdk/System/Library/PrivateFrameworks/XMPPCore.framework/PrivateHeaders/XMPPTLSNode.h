//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XMPPCore/XMPPNode.h>

@interface XMPPTLSNode : XMPPNode
{
    int _result;
}

- (BOOL)shouldNotifyDelegate;
- (int)result;
- (BOOL)tlsRequired;
- (BOOL)tlsSupported;
- (id)newChildWithName:(id)arg1 attributes:(id)arg2;
- (id)initWithName:(id)arg1 attributes:(id)arg2;

@end
