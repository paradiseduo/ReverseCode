//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TencentLBSDevice : NSObject
{
    _Bool _canUseHttp;
    NSString *_model;
    NSString *_systemVersion;
    NSString *_identifierForVendor;
    NSString *_identifierForIdentifier;
    NSString *_appName;
    NSString *_accessTokenMD5;
    NSString *_sdkVersion;
    NSString *_appLabel;
    NSString *_appVersion;
    NSString *_deviceModel;
    NSString *_phoneNumber;
}

+ (id)currentDevice;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *appLabel; // @synthesize appLabel=_appLabel;
@property(copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(copy, nonatomic) NSString *accessTokenMD5; // @synthesize accessTokenMD5=_accessTokenMD5;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(nonatomic) _Bool canUseHttp; // @synthesize canUseHttp=_canUseHttp;
@property(copy, nonatomic) NSString *identifierForIdentifier; // @synthesize identifierForIdentifier=_identifierForIdentifier;
@property(copy, nonatomic) NSString *identifierForVendor; // @synthesize identifierForVendor=_identifierForVendor;
@property(copy, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (_Bool)supportATS;
- (id)deviceModelName;
- (void)getStoredId;
- (id)init;

@end
