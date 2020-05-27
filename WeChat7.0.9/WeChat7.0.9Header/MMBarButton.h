//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor;

@interface MMBarButton : UIButton
{
    long long iContentWidth;
    long long iContentHight;
    long long iOriginWidth;
    long long iOriginHeight;
    unsigned long long eBarButtonStyle;
    UIColor *_normalBackgroundColor;
}

@property(retain, nonatomic) UIColor *normalBackgroundColor; // @synthesize normalBackgroundColor=_normalBackgroundColor;
@property(nonatomic) unsigned long long eBarButtonStyle; // @synthesize eBarButtonStyle;
@property(nonatomic) long long iOriginHeight; // @synthesize iOriginHeight;
@property(nonatomic) long long iOriginWidth; // @synthesize iOriginWidth;
@property(nonatomic) long long iContentHight; // @synthesize iContentHight;
@property(nonatomic) long long iContentWidth; // @synthesize iContentWidth;
- (void).cxx_destruct;
- (void)setEnabled:(_Bool)arg1;
- (void)tintColorDidChange;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
