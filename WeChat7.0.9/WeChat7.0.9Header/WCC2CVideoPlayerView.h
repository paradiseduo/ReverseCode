//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXVideoPlayerView.h"

#import "CNetworkStatusExt-Protocol.h"
#import "FullScreenGestureDelegate-Protocol.h"
#import "IVideoExt-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "WCC2CPlayerControlViewDelegate-Protocol.h"
#import "WCPlayerDownloaderExt-Protocol.h"

@class CAGradientLayer, CMessageWrap, MMBrandHeadImageView, MMUIButton, MMUILabel, MPLandingPageCgiHandler, MPLandingPageReportLogic, NSString, UIImage, WCC2CPlayerControlView, WCPlayerPlayArgs, WCPlayerView, WXFullScreenGestureRecognizer;

@interface WCC2CVideoPlayerView : WXVideoPlayerView <UIAlertViewDelegate, IVideoExt, FullScreenGestureDelegate, WCC2CPlayerControlViewDelegate, WCPlayerDownloaderExt, CNetworkStatusExt>
{
    double m_initialTime;
    UIImage *m_thumbImage;
    _Bool _bVideoIsBlocked;
    _Bool _bVideoIsExpired;
    _Bool _bShouldResumeInterrupt;
    _Bool _bPreViewMode;
    _Bool _shouldRestartPlay;
    _Bool _bFirstPlay;
    _Bool _bPlayToEnd;
    _Bool _bHasRequestedVideoState;
    _Bool _bRequaringVideoState;
    _Bool _bRequestingVideoStateCgi;
    unsigned int _brandEnterIdForReport;
    CMessageWrap *_msgWrap;
    WCPlayerView *_playerView;
    WCPlayerPlayArgs *_playerInfo;
    WCC2CPlayerControlView *_controlView;
    WXFullScreenGestureRecognizer *_fullScreenGestureRecognizer;
    MMUIButton *_brandContentView;
    CAGradientLayer *_brandMaskLayer;
    MMUILabel *_brandTitleView;
    MMBrandHeadImageView *_brandHeadView;
    MMUIButton *_brandNickNameView;
    MMUIButton *_brandOpenMpPageBtn;
    MPLandingPageCgiHandler *_brandCgiHandler;
    MPLandingPageReportLogic *_brandReportLogic;
}

@property(nonatomic) unsigned int brandEnterIdForReport; // @synthesize brandEnterIdForReport=_brandEnterIdForReport;
@property(retain, nonatomic) MPLandingPageReportLogic *brandReportLogic; // @synthesize brandReportLogic=_brandReportLogic;
@property(nonatomic) _Bool bRequestingVideoStateCgi; // @synthesize bRequestingVideoStateCgi=_bRequestingVideoStateCgi;
@property(retain, nonatomic) MPLandingPageCgiHandler *brandCgiHandler; // @synthesize brandCgiHandler=_brandCgiHandler;
@property(retain, nonatomic) MMUIButton *brandOpenMpPageBtn; // @synthesize brandOpenMpPageBtn=_brandOpenMpPageBtn;
@property(retain, nonatomic) MMUIButton *brandNickNameView; // @synthesize brandNickNameView=_brandNickNameView;
@property(retain, nonatomic) MMBrandHeadImageView *brandHeadView; // @synthesize brandHeadView=_brandHeadView;
@property(retain, nonatomic) MMUILabel *brandTitleView; // @synthesize brandTitleView=_brandTitleView;
@property(retain, nonatomic) CAGradientLayer *brandMaskLayer; // @synthesize brandMaskLayer=_brandMaskLayer;
@property(retain, nonatomic) MMUIButton *brandContentView; // @synthesize brandContentView=_brandContentView;
@property(nonatomic) _Bool bRequaringVideoState; // @synthesize bRequaringVideoState=_bRequaringVideoState;
@property(nonatomic) _Bool bHasRequestedVideoState; // @synthesize bHasRequestedVideoState=_bHasRequestedVideoState;
@property(nonatomic) _Bool bPlayToEnd; // @synthesize bPlayToEnd=_bPlayToEnd;
@property(nonatomic) _Bool bFirstPlay; // @synthesize bFirstPlay=_bFirstPlay;
@property(retain, nonatomic) WXFullScreenGestureRecognizer *fullScreenGestureRecognizer; // @synthesize fullScreenGestureRecognizer=_fullScreenGestureRecognizer;
@property(nonatomic) _Bool shouldRestartPlay; // @synthesize shouldRestartPlay=_shouldRestartPlay;
@property(nonatomic) _Bool bPreViewMode; // @synthesize bPreViewMode=_bPreViewMode;
@property(nonatomic) _Bool bShouldResumeInterrupt; // @synthesize bShouldResumeInterrupt=_bShouldResumeInterrupt;
@property(retain, nonatomic) WCC2CPlayerControlView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) WCPlayerPlayArgs *playerInfo; // @synthesize playerInfo=_playerInfo;
@property(readonly, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(nonatomic) _Bool bVideoIsExpired; // @synthesize bVideoIsExpired=_bVideoIsExpired;
@property(nonatomic) _Bool bVideoIsBlocked; // @synthesize bVideoIsBlocked=_bVideoIsBlocked;
- (void).cxx_destruct;
- (void)OnMsgDownloadVideoCommonFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnCdnDownloadError:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)onSliderPauseVideo;
- (void)onSliderPlayVideo;
- (void)onProgressBarEndSeek:(double)arg1;
- (void)onProgressBarBeginSeek;
- (void)onSightProgressBarHidden;
- (void)onClickPlayAttachVideoBtn;
- (void)onClickDetailButton;
- (void)onCloseVideoPlay;
- (void)onStartPlayIconClick;
- (void)onPlayToEnd;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)onVideoPlayFail:(int)arg1 localizedErrorDes:(id)arg2;
- (void)onVideoPrepareToPlay;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)onFullScreenSingleTap;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)exitVideoPlay;
- (void)onFullScreenClose;
- (void)handleDownloadExpired;
- (void)handleDownloadFail;
- (void)setStatusViewsHidden:(_Bool)arg1;
- (void)setViewsHiddenOnScroll:(_Bool)arg1;
- (void)setToolViewsHidden:(_Bool)arg1;
- (void)ReachabilityChange:(unsigned int)arg1;
- (_Bool)isVideoReadyToPlay;
- (_Bool)isVideoPlaying;
- (void)switchToDownloadFirstWithMode:(unsigned long long)arg1;
- (void)startVideoStreamDownload;
- (_Bool)isNeedPlayFromEveryDisplay;
- (void)getReadyForPlay;
- (void)resetViewPosition;
- (double)getCurrPlayedTimeInSec;
- (unsigned long long)totalTime;
- (void)pause;
- (void)removeFromSuperview;
- (void)resumeVideoFromInterrupt;
- (void)interruptVideo;
- (void)stopPlay:(id)arg1;
- (void)stopPlay;
- (void)destoryWhenVideoIsBlocked:(id)arg1;
- (void)seekTo:(double)arg1;
- (void)realPlay;
- (_Bool)startPlay;
- (void)setPlayerInfoMode;
- (void)setInitialTime:(double)arg1;
- (void)setThumbImage:(id)arg1;
- (void)layoutSubviews;
- (void)initPlayerView;
- (void)initView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 MsgWrap:(id)arg2 VideoPath:(id)arg3 Soundable:(_Bool)arg4 PreviewMode:(_Bool)arg5 delegate:(id)arg6;
- (void)onGetBottomLineCenterY:(double *)arg1 leftPartWidth:(double *)arg2 rightPartWidth:(double *)arg3;
- (long long)getScene;
- (void)initReportLogicIfNeed;
- (void)reportVideoShareSuccessEvent;
- (void)reportBrandMpVideoPlayFail:(int)arg1 localizedErrorDes:(id)arg2;
- (void)reportVideoPlayCgi17537:(unsigned long long)arg1;
- (void)reportBrandMpVideoCommonEvent:(unsigned long long)arg1;
- (void)dealloc;
- (void)requestVideoStateByVid:(CDUnknownBlockType)arg1;
- (void)onOpenMpPage;
- (void)onOpenProfile;
- (void)setBrandViewsHidden:(_Bool)arg1;
- (void)layoutBrandViews;
- (void)addShadowToView:(id)arg1;
- (void)initBrandOpenMpPageBtn;
- (void)initBrandNickNameView;
- (void)initBrandHeadView;
- (void)initBrandTitleView;
- (void)initBrandContentView;
- (void)initBrandViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
