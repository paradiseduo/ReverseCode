//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class NSString, UIButton, UIImageView, UILabel;

@interface QQEmojiPreview : MMUIView
{
    NSString *_emojiKey;
    UIImageView *_backgroundView;
    UIButton *_previewView;
    UILabel *_descriptionLabel;
}

@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIButton *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSString *emojiKey; // @synthesize emojiKey=_emojiKey;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end
