//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWebViewPluginBase.h"

@class NSMutableDictionary, NSMutableSet;

@interface MMWebViewPlugin_WebApiControl : MMWebViewPluginBase
{
    unsigned int _curMinInJsapiFrequencyBase;
    NSMutableDictionary *_dictInvokeCountInMin;
    NSMutableDictionary *_dictJsapiFrequencyLimitCount;
    NSMutableSet *_setJsApiIndexForFrequnceLimit;
}

@property(retain, nonatomic) NSMutableSet *setJsApiIndexForFrequnceLimit; // @synthesize setJsApiIndexForFrequnceLimit=_setJsApiIndexForFrequnceLimit;
@property(retain, nonatomic) NSMutableDictionary *dictJsapiFrequencyLimitCount; // @synthesize dictJsapiFrequencyLimitCount=_dictJsapiFrequencyLimitCount;
@property(retain, nonatomic) NSMutableDictionary *dictInvokeCountInMin; // @synthesize dictInvokeCountInMin=_dictInvokeCountInMin;
@property(nonatomic) unsigned int curMinInJsapiFrequencyBase; // @synthesize curMinInJsapiFrequencyBase=_curMinInJsapiFrequencyBase;
- (void).cxx_destruct;
- (_Bool)frequencyCheckResultWhenJsApiInvoked:(id)arg1 funcName:(id)arg2;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)initFrequnceLimitSet;
- (id)init;

@end
