/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface EWSPhysicalAddressDictionaryEntryType : NSObject
{
    NSString *_Street;
    NSString *_City;
    NSString *_State;
    NSString *_CountryOrRegion;
    NSString *_PostalCode;
    NSString *_Key;
}

+ (id)definition;
@property(copy, nonatomic) NSString *Key; // @synthesize Key=_Key;
@property(copy, nonatomic) NSString *PostalCode; // @synthesize PostalCode=_PostalCode;
@property(copy, nonatomic) NSString *CountryOrRegion; // @synthesize CountryOrRegion=_CountryOrRegion;
@property(copy, nonatomic) NSString *State; // @synthesize State=_State;
@property(copy, nonatomic) NSString *City; // @synthesize City=_City;
@property(copy, nonatomic) NSString *Street; // @synthesize Street=_Street;
- (id)description;
- (void)dealloc;

@end
