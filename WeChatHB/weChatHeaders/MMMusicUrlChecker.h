//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class NSString;

@interface MMMusicUrlChecker : MMObject <PBMessageObserverDelegate>
{
    CDUnknownBlockType _spamCheckCompleteHandler;
    CDUnknownBlockType _shakeMusicCheckCompleteHandler;
    NSString *m_nsMusicUrl;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetShakeMusicUrlResponse:(id)arg1;
- (void)handleCheckMusicResponse:(id)arg1;
- (void)cancelCheckShakeMusicUrl;
- (void)checkShakeMusicUrl:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)cancelCheckSpam;
- (void)checkSpamMusicInfo:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end
