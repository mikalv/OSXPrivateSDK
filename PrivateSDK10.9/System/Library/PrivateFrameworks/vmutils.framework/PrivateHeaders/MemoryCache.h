//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MemoryCache : NSObject
{
    struct {
        unsigned long _field1;
        unsigned long _field2;
        struct *_field3;
    } *_memoryRegions;
}

- (void)finalize;
- (void)dealloc;
- (id)readUTF8String:(char *)arg1;
- (int)readString:(char *)arg1 returnsString:(char **)arg2 isNullTerminated:(char *)arg3;
- (int)peekAtAddress:(unsigned int)arg1 returnsSize:(unsigned int *)arg2 returnsBuf:(void **)arg3;
- (int)readPointerAt:(unsigned int)arg1 value:(unsigned int *)arg2;
- (int)peekAtAddress:(unsigned int)arg1 size:(unsigned int)arg2 returnsBuf:(void **)arg3;
- (int)stopPeeking;
- (int)startPeeking;
- (void)flushMemoryCache;
- (id)init;

@end
