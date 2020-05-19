//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class NSArray, NSMutableArray, UIView;

@interface FavSearchTopFilterView : MMUIView
{
    id <FavSearchTopFilterViewDelegate> _delegate;
    NSArray *_typesInSequence;
    UIView *_contentView;
    NSMutableArray *_searchBtns;
    unsigned long long _layoutModel;
    double _lineMargin;
}

@property(nonatomic) double lineMargin; // @synthesize lineMargin=_lineMargin;
@property(nonatomic) unsigned long long layoutModel; // @synthesize layoutModel=_layoutModel;
@property(retain, nonatomic) NSMutableArray *searchBtns; // @synthesize searchBtns=_searchBtns;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSArray *typesInSequence; // @synthesize typesInSequence=_typesInSequence;
@property(nonatomic) __weak id <FavSearchTopFilterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onTapButton:(id)arg1;
- (void)layoutFilterView;
- (double)caculateMinWidthInTwoLinesForString:(id)arg1;
- (void)calculateButtonWidth;
- (void)initData;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
