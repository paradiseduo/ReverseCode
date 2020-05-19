//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCNewCommitViewController.h"

@class FavClickStreamHelper, NSObject, NSString, UIView, WCDataItem;

@interface WCForwardViewController : WCNewCommitViewController
{
    WCDataItem *_forwardDataItem;
    UIView *_mediaViewBkgView;
    long long _iPostSource;
    NSString *_preSourceId;
    FavClickStreamHelper *m_clickHelper;
    NSObject *_userData;
    id <WCCommitViewResultDelegate> _resultDelegate;
}

@property(nonatomic) __weak id <WCCommitViewResultDelegate> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
@property(retain, nonatomic) NSObject *userData; // @synthesize userData=_userData;
@property(retain, nonatomic) FavClickStreamHelper *m_clickHelper; // @synthesize m_clickHelper;
@property(retain, nonatomic) NSString *preSourceId; // @synthesize preSourceId=_preSourceId;
@property(nonatomic) long long iPostSource; // @synthesize iPostSource=_iPostSource;
- (void).cxx_destruct;
- (void)showLoadingView;
- (void)sendToTimeLine;
- (void)OnDone;
- (void)OnReturn;
- (void)dealloc;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)reloadHeadViewSubviewsY;
- (void)reloadData;
- (void)reloadShareButtons;
- (void)addMediaView;
- (void)initTextViewContent;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDataItem:(id)arg1;
- (void)commonInit;

@end
