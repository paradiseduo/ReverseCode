//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface WAPeriodFetchInfo : MMObject <WCTTableCoding>
{
    unsigned int _lastFetchTime;
    NSString *_userName;
    NSString *_fetchData;
}

+ (void)__wcdb_WAPeriodFetchInfo_primary_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)fetchData;
+ (void)__wcdb_WAPeriodFetchInfo_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)lastFetchTime;
+ (void)__wcdb_WAPeriodFetchInfo_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)userName;
+ (void)__wcdb_WAPeriodFetchInfo_synthesize_0:(struct WCTBinding *)arg1;
+ (CDUnknownBlockType)columnNamed;
+ (const struct All *)allResults;
+ (const struct WCTPropertyList *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(retain, nonatomic) NSString *fetchData; // @synthesize fetchData=_fetchData;
@property(nonatomic) unsigned int lastFetchTime; // @synthesize lastFetchTime=_lastFetchTime;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end
