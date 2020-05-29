//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface DBFavoritesItem : NSObject <WCTTableCoding>
{
    _Bool isAutoIncrement;
    unsigned int _localId;
    unsigned int _favId;
    unsigned int _type;
    unsigned int _time;
    unsigned int _status;
    unsigned int _updateSeq;
    unsigned int _localUpdateSeq;
    unsigned int _sourceType;
    unsigned int _localStatus;
    unsigned int _dataTotalSize;
    unsigned int _IntRes2;
    unsigned int _IntRes3;
    long long lastInsertedRowID;
    NSString *_fromUser;
    NSString *_toUser;
    NSString *_realChatName;
    NSString *_sourceId;
    NSString *_xml;
    NSString *_StrRes1;
    NSString *_StrRes2;
    NSString *_StrRes3;
}

+ (void)__wcdb_DBFavoritesItem_index_39:(struct WCTBinding *)arg1;
+ (void)__wcdb_DBFavoritesItem_index_38:(struct WCTBinding *)arg1;
+ (void)__wcdb_DBFavoritesItem_index_37:(struct WCTBinding *)arg1;
+ (void)__wcdb_DBFavoritesItem_index_36:(struct WCTBinding *)arg1;
+ (void)__wcdb_DBFavoritesItem_index_35:(struct WCTBinding *)arg1;
+ (void)__wcdb_DBFavoritesItem_index_34:(struct WCTBinding *)arg1;
+ (void)__wcdb_DBFavoritesItem_index_33:(struct WCTBinding *)arg1;
+ (void)__wcdb_DBFavoritesItem_index_32:(struct WCTBinding *)arg1;
+ (void)__wcdb_DBFavoritesItem_primary_31:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)StrRes3;
+ (void)__wcdb_DBFavoritesItem_synthesize_30:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)StrRes2;
+ (void)__wcdb_DBFavoritesItem_synthesize_29:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)StrRes1;
+ (void)__wcdb_DBFavoritesItem_synthesize_28:(struct WCTBinding *)arg1;
+ (void)__wcdb_DBFavoritesItem_default_27:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)IntRes3;
+ (void)__wcdb_DBFavoritesItem_synthesize_26:(struct WCTBinding *)arg1;
+ (void)__wcdb_DBFavoritesItem_default_25:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)IntRes2;
+ (void)__wcdb_DBFavoritesItem_synthesize_24:(struct WCTBinding *)arg1;
+ (void)__wcdb_DBFavoritesItem_default_23:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)dataTotalSize;
+ (void)__wcdb_DBFavoritesItem_synthesize_22:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)xml;
+ (void)__wcdb_DBFavoritesItem_synthesize_21:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)sourceId;
+ (void)__wcdb_DBFavoritesItem_synthesize_20:(struct WCTBinding *)arg1;
+ (void)__wcdb_DBFavoritesItem_default_19:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)localStatus;
+ (void)__wcdb_DBFavoritesItem_synthesize_18:(struct WCTBinding *)arg1;
+ (void)__wcdb_DBFavoritesItem_default_17:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)sourceType;
+ (void)__wcdb_DBFavoritesItem_synthesize_16:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)realChatName;
+ (void)__wcdb_DBFavoritesItem_synthesize_15:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)toUser;
+ (void)__wcdb_DBFavoritesItem_synthesize_14:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)fromUser;
+ (void)__wcdb_DBFavoritesItem_synthesize_13:(struct WCTBinding *)arg1;
+ (void)__wcdb_DBFavoritesItem_default_12:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)localUpdateSeq;
+ (void)__wcdb_DBFavoritesItem_synthesize_11:(struct WCTBinding *)arg1;
+ (void)__wcdb_DBFavoritesItem_default_10:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)updateSeq;
+ (void)__wcdb_DBFavoritesItem_synthesize_9:(struct WCTBinding *)arg1;
+ (void)__wcdb_DBFavoritesItem_default_8:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)status;
+ (void)__wcdb_DBFavoritesItem_synthesize_7:(struct WCTBinding *)arg1;
+ (void)__wcdb_DBFavoritesItem_default_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)time;
+ (void)__wcdb_DBFavoritesItem_synthesize_5:(struct WCTBinding *)arg1;
+ (void)__wcdb_DBFavoritesItem_default_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)type;
+ (void)__wcdb_DBFavoritesItem_synthesize_3:(struct WCTBinding *)arg1;
+ (void)__wcdb_DBFavoritesItem_default_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)favId;
+ (void)__wcdb_DBFavoritesItem_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)localId;
+ (void)__wcdb_DBFavoritesItem_synthesize_0:(struct WCTBinding *)arg1;
+ (CDUnknownBlockType)columnNamed;
+ (const struct All *)allResults;
+ (const struct WCTPropertyList *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(retain, nonatomic) NSString *StrRes3; // @synthesize StrRes3=_StrRes3;
@property(retain, nonatomic) NSString *StrRes2; // @synthesize StrRes2=_StrRes2;
@property(retain, nonatomic) NSString *StrRes1; // @synthesize StrRes1=_StrRes1;
@property(nonatomic) unsigned int IntRes3; // @synthesize IntRes3=_IntRes3;
@property(nonatomic) unsigned int IntRes2; // @synthesize IntRes2=_IntRes2;
@property(nonatomic) unsigned int dataTotalSize; // @synthesize dataTotalSize=_dataTotalSize;
@property(retain, nonatomic) NSString *xml; // @synthesize xml=_xml;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(nonatomic) unsigned int localStatus; // @synthesize localStatus=_localStatus;
@property(nonatomic) unsigned int sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSString *realChatName; // @synthesize realChatName=_realChatName;
@property(retain, nonatomic) NSString *toUser; // @synthesize toUser=_toUser;
@property(retain, nonatomic) NSString *fromUser; // @synthesize fromUser=_fromUser;
@property(nonatomic) unsigned int localUpdateSeq; // @synthesize localUpdateSeq=_localUpdateSeq;
@property(nonatomic) unsigned int updateSeq; // @synthesize updateSeq=_updateSeq;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(nonatomic) unsigned int time; // @synthesize time=_time;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int favId; // @synthesize favId=_favId;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
- (void).cxx_destruct;

@end
