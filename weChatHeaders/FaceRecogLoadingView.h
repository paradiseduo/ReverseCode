//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class FaceRecogScanAnimationView, MMTimer, UIImageView;

@interface FaceRecogLoadingView : MMUIView
{
    FaceRecogScanAnimationView *_faceCircle;
    UIImageView *_dot1View;
    UIImageView *_dot2View;
    UIImageView *_dot3View;
    _Bool _bStop;
    MMTimer *_timer;
    _Bool _darkNet;
}

@property(nonatomic) _Bool darkNet; // @synthesize darkNet=_darkNet;
- (void).cxx_destruct;
- (void)resetView;
- (void)updateDot;
- (void)showResult:(_Bool)arg1;
- (void)stopLoading;
- (void)startLoading:(_Bool)arg1;
- (struct CGRect)getContentFrame;
- (double)getContentBottom;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 FaceFrame:(struct CGRect)arg2;

@end
