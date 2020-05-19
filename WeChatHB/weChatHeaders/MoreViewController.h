//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTabBarBaseViewController.h"

#import "CSettingExt.h"
#import "EmoticonRecommendMgrExt.h"
#import "IHeadImageExt.h"
#import "ILinkEventExt.h"
#import "IMsgExt.h"
#import "INewSyncExt.h"
#import "ISettingExtChange.h"
#import "IWCCardPkgExt.h"
#import "IWCLabsMgrExt.h"
#import "IWCSettingRedPointMgrExt.h"
#import "MMKernelExt.h"
#import "MMNewTipsMgrExt.h"
#import "MMTableViewInfoDelegate.h"
#import "MyFavoritesViewControllerDelegate.h"
#import "PayMenuRedDotHelperExt.h"
#import "WCActionSheetDelegate.h"
#import "WCMallLogicMgrExt.h"
#import "WCPayLogicMgrExt.h"
#import "WCPayWalletLockVerifyLogicDelegate.h"
#import "WCStoryFacadeExt.h"
#import "WCStorysPreviewViewControllerDelegate.h"

@class MMAnimationTipView, MMHeadImageView, MMTimer, MMUIButton, MMUIImageView, MMUILabel, MMUIView, MyFavoritesViewController, NSString, UITableView, UIView, UpdateWechatRedDotConfig, WCBizLoadingView, WCStoryDragAnimationUtil, WCStoryReceivedUnreadBubbleHintView, WCStorysPreviewViewController, WCTableViewManager, WCTransitionTeachInteractiveAnimatedTransition;

@interface MoreViewController : MMTabBarBaseViewController <PayMenuRedDotHelperExt, MyFavoritesViewControllerDelegate, ISettingExtChange, IWCSettingRedPointMgrExt, IWCLabsMgrExt, IMsgExt, WCPayWalletLockVerifyLogicDelegate, INewSyncExt, MMNewTipsMgrExt, ILinkEventExt, WCStoryFacadeExt, WCStorysPreviewViewControllerDelegate, MMTableViewInfoDelegate, IHeadImageExt, CSettingExt, WCPayLogicMgrExt, EmoticonRecommendMgrExt, MMKernelExt, WCMallLogicMgrExt, IWCCardPkgExt, WCActionSheetDelegate>
{
    vector_12da65de m_vecMesssageIdToListen;
    UpdateWechatRedDotConfig *m_oUpdateWechatRedDotConfig;
    MyFavoritesViewController *m_favViewController;
    MMTimer *m_favCacheTimer;
    UIView *m_footerView;
    WCTableViewManager *m_tableViewMgr;
    _Bool _bIsShareCardListShowSvrRedDot;
    _Bool _bIsEnterShareCardListFromOuterJump;
    _Bool _hasShock;
    _Bool _isShowTeachView;
    unsigned int _patternLockLogicTag;
    WCBizLoadingView *_loadingView;
    MMAnimationTipView *_resultToastView;
    MMUIView *_frontView;
    WCStorysPreviewViewController *_storyPreviewVC;
    MMUIButton *_cameraBtn;
    WCStoryReceivedUnreadBubbleHintView *_unreadCommentBubble;
    MMHeadImageView *_headImage;
    long long _storyViewState;
    WCStoryDragAnimationUtil *_storyAnimationUtil;
    MMUIImageView *_storyCameraRedDotView;
    unsigned long long _addKVOCount;
    MMUIView *_frontTableViewBackGroundView;
    UITableView *_frontTableView;
    unsigned long long _tapTopAreaCount;
    MMUILabel *_tapTopAreaTipView;
    double _emptyBeginMoveY;
    WCTransitionTeachInteractiveAnimatedTransition *_teachTransition;
}

@property(retain, nonatomic) WCTransitionTeachInteractiveAnimatedTransition *teachTransition; // @synthesize teachTransition=_teachTransition;
@property(nonatomic) _Bool isShowTeachView; // @synthesize isShowTeachView=_isShowTeachView;
@property(nonatomic) _Bool hasShock; // @synthesize hasShock=_hasShock;
@property(nonatomic) double emptyBeginMoveY; // @synthesize emptyBeginMoveY=_emptyBeginMoveY;
@property(retain, nonatomic) MMUILabel *tapTopAreaTipView; // @synthesize tapTopAreaTipView=_tapTopAreaTipView;
@property(nonatomic) unsigned long long tapTopAreaCount; // @synthesize tapTopAreaCount=_tapTopAreaCount;
@property(retain, nonatomic) UITableView *frontTableView; // @synthesize frontTableView=_frontTableView;
@property(retain, nonatomic) MMUIView *frontTableViewBackGroundView; // @synthesize frontTableViewBackGroundView=_frontTableViewBackGroundView;
@property(nonatomic) unsigned long long addKVOCount; // @synthesize addKVOCount=_addKVOCount;
@property(retain, nonatomic) MMUIImageView *storyCameraRedDotView; // @synthesize storyCameraRedDotView=_storyCameraRedDotView;
@property(retain, nonatomic) WCStoryDragAnimationUtil *storyAnimationUtil; // @synthesize storyAnimationUtil=_storyAnimationUtil;
@property(nonatomic) long long storyViewState; // @synthesize storyViewState=_storyViewState;
@property(nonatomic) __weak MMHeadImageView *headImage; // @synthesize headImage=_headImage;
@property(retain, nonatomic) WCStoryReceivedUnreadBubbleHintView *unreadCommentBubble; // @synthesize unreadCommentBubble=_unreadCommentBubble;
@property(retain, nonatomic) MMUIButton *cameraBtn; // @synthesize cameraBtn=_cameraBtn;
@property(retain, nonatomic) WCStorysPreviewViewController *storyPreviewVC; // @synthesize storyPreviewVC=_storyPreviewVC;
@property(retain, nonatomic) MMUIView *frontView; // @synthesize frontView=_frontView;
@property(nonatomic) _Bool bIsEnterShareCardListFromOuterJump; // @synthesize bIsEnterShareCardListFromOuterJump=_bIsEnterShareCardListFromOuterJump;
@property(nonatomic) _Bool bIsShareCardListShowSvrRedDot; // @synthesize bIsShareCardListShowSvrRedDot=_bIsShareCardListShowSvrRedDot;
@property(retain, nonatomic) MMAnimationTipView *resultToastView; // @synthesize resultToastView=_resultToastView;
@property(retain, nonatomic) WCBizLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) unsigned int patternLockLogicTag; // @synthesize patternLockLogicTag=_patternLockLogicTag;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)processFrontViewGesture:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)touchSpringAnimation;
- (void)tapTopCoverArea;
- (void)onCameraRedDotCleaned;
- (void)onStoryUnreadCommentCountUpdate;
- (void)onStoryUploadFailWithDataItem:(id)arg1;
- (void)onStoryUploadSuccessWithDataItem:(id)arg1;
- (void)onPayMenuRedDotHelperSync;
- (void)onNotifyToShowTips:(id)arg1;
- (void)onNotifyToDisposePathTipsByKey:(id)arg1;
- (void)onWechatEntranceRedPointChange;
- (void)onWCSettingRedPointChange;
- (void)initDeepLinkConfig;
- (void)cardDeeplink;
- (id)getVCWithDeepLinkName:(id)arg1;
- (void)walletLockVerifySuccess:(id)arg1;
- (void)onWCCardTips;
- (void)onWCCardLayoutRedDotChanged;
- (void)onWCCardMessageUnreadCountChanged:(id)arg1;
- (void)OnWCMallShowStatusInMoreViewChanged;
- (void)OnWCMallActivityChanged;
- (void)OnEmoticonRecommendNewStateChanged:(_Bool)arg1;
- (void)OnGetLQTReddotData;
- (void)OnGetBankCardReddotData;
- (void)ReloadWallet;
- (void)OnStatusChangedOrderListCountChanged:(unsigned int)arg1;
- (void)onSettingExtChanged:(int)arg1;
- (void)onWCCardMessageEntryTipChanged:(id)arg1;
- (void)onSettingChanged:(int)arg1;
- (void)onHeadImageChange:(id)arg1;
- (void)updateHead:(id)arg1;
- (id)getSettingHeadImage;
- (void)pluginsChanged:(id)arg1;
- (void)onGetUpdateInfoOk;
- (void)onNewSyncModUserInfoExt:(id)arg1;
- (void)setupPreviewWithDataArray:(id)arg1;
- (void)layoutStoryFunctionButton;
- (void)setupStoryFunctionButton;
- (void)WCStorysPreviewViewControllerDeleteAllDataItem:(id)arg1;
- (void)WCStorysPreviewViewControllerDidPanInVerticalWithTouchPoint:(struct CGPoint)arg1 andState:(long long)arg2;
- (void)showFrontView;
- (void)panGestureRecognize:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setupFrontView;
- (void)unSetupStoryView;
- (void)setupStoryUIWithStoryData:(id)arg1;
- (void)layoutStoryViewWithStoryDataItem:(id)arg1;
- (void)updateCameraRedDot;
- (void)setupStoryLayout;
- (void)setupNoStoryLayout;
- (_Bool)useBlackStatusbar;
- (void)didReceiveMemoryWarning;
- (void)updateViewWhenSelectTab:(_Bool)arg1;
- (void)updateTabBarBadge;
- (unsigned int)getTotalCount;
- (void)onCloseFavTimeOut;
- (void)onFavoritesClose;
- (void)checkReload;
- (_Bool)isNeedShowWCPayInTabNew;
- (_Bool)isNeedShowWCPay;
- (void)showPrivateSettingWithContactVerify:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showWcRecentPrivacySetting:(unsigned long long)arg1;
- (void)showPrivateSetting;
- (void)showChangeLanguage;
- (void)showSettingView;
- (void)showEmoticonStoreView;
- (void)showShareCardView;
- (void)showShareCardViewInternal;
- (void)showWCCardView;
- (void)showOverseaNativePayView;
- (void)openWCPayView;
- (void)showHtml5PayView;
- (void)showWCPayView;
- (void)reportNativeWCPayClick;
- (void)showFavoriteView;
- (void)showMyWCView;
- (void)showMyQRCodeInProfileView;
- (void)onShowMyQrCode;
- (void)showAppleWatchUpdateView;
- (void)showAppleWatchView;
- (void)showProfileView;
- (void)onTakePhoto;
- (void)onOpenCamera;
- (void)onShowCameraTips;
- (void)setupStoryStyleHeaderView;
- (void)makeHeaderView;
- (void)showToastTipsViewWithText:(id)arg1 isSuccess:(_Bool)arg2;
- (void)stopLoading;
- (void)startLoading;
- (void)initLoadingView;
- (void)addSettingSection;
- (void)addFunctionSection;
- (void)addWCMallSection;
- (id)rightValueForWCMallSection;
- (_Bool)reddotForWCMallSection;
- (id)unReadForWCMallSection;
- (void)addProfileSection;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)reloadMoreView;
- (void)addFooterView;
- (void)willAppear;
- (void)initView;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)backToSplitViewEmptyViewController:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)getUpdateWechatRedDotConfig;
- (void)setUpdateWechatRedDotConfig:(id)arg1;
- (void)clearUpdateWechatRedDotConfig;
- (void)initUpdateWechatRedDotConfig;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
