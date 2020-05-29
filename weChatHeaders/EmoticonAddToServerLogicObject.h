//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "EmoticonOperateCgiDelegate.h"
#import "EmoticonUploadCgiDelegate.h"

@class EmojiInfoObj, EmoticonOperateCgi, EmoticonUploadCgi, EmoticonUploadInfoObj;

@interface EmoticonAddToServerLogicObject : MMObject <EmoticonOperateCgiDelegate, EmoticonUploadCgiDelegate>
{
    _Bool _m_hasStartLogic;
    EmoticonUploadInfoObj *m_uploadInfo;
    id <EmoticonAddToServerLogicDelegate> _delegate;
    EmoticonOperateCgi *_m_addCgi;
    EmoticonUploadCgi *_m_uploadCgi;
    EmojiInfoObj *_emojiInfo;
}

+ (unsigned int)getIdKeyAddToServerFailed;
+ (unsigned int)getIdKeyIdEmoticon;
@property(retain, nonatomic) EmojiInfoObj *emojiInfo; // @synthesize emojiInfo=_emojiInfo;
@property(nonatomic) _Bool m_hasStartLogic; // @synthesize m_hasStartLogic=_m_hasStartLogic;
@property(retain, nonatomic) EmoticonUploadCgi *m_uploadCgi; // @synthesize m_uploadCgi=_m_uploadCgi;
@property(retain, nonatomic) EmoticonOperateCgi *m_addCgi; // @synthesize m_addCgi=_m_addCgi;
@property(nonatomic) __weak id <EmoticonAddToServerLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) EmoticonUploadInfoObj *uploadInfo; // @synthesize uploadInfo=m_uploadInfo;
- (void).cxx_destruct;
- (void)onEmoticonUploadMd5Failed:(id)arg1 reason:(unsigned long long)arg2;
- (void)onEmoticonUploadMd5Ok:(id)arg1 emojiInfo:(id)arg2;
- (void)onEmoticonOperateFailed:(id)arg1 opCode:(unsigned long long)arg2 isOverLimit:(_Bool)arg3;
- (void)onEmoticonOperateOk:(id)arg1 WithNeedBackupArray:(id)arg2 opCode:(unsigned long long)arg3;
- (void)onEmoticonAddToServerFailedWithReason:(unsigned long long)arg1;
- (void)onEmoticonAddToServerFailedWithIsOverLimit:(_Bool)arg1;
- (void)onEmoticonAddToServerOk;
- (void)startUpload;
- (_Bool)isActive;
- (void)startLogic;
- (id)initWithUploadInfo:(id)arg1;

@end
