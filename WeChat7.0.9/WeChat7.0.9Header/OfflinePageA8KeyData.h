//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface OfflinePageA8KeyData : NSObject
{
    NSString *_originalUrl;
    NSString *_a8KeyFullUrl;
    NSArray *_a8KeyHeaders;
    id _webViewController;
}

@property(nonatomic) __weak id webViewController; // @synthesize webViewController=_webViewController;
@property(retain, nonatomic) NSArray *a8KeyHeaders; // @synthesize a8KeyHeaders=_a8KeyHeaders;
@property(retain, nonatomic) NSString *a8KeyFullUrl; // @synthesize a8KeyFullUrl=_a8KeyFullUrl;
@property(retain, nonatomic) NSString *originalUrl; // @synthesize originalUrl=_originalUrl;
- (void).cxx_destruct;

@end
