//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "ILocationMgrExt.h"
#import "MMPackageDownloadMgrExt.h"

@class NSDictionary, NSLocale, NSMutableArray, NSSet, NSString, Package, WCOutCountryCodeWrap;

@interface WCOutCountryCodeLogic : MMObject <MMPackageDownloadMgrExt, ILocationMgrExt>
{
    WCOutCountryCodeWrap *m_defaultCountryCodeWrap;
    unsigned int m_lastUpdateTime;
    NSString *m_countryCodeConfig;
    Package *m_downloadingPackage;
    NSString *m_curLanguage;
    NSSet *m_restrictionSet;
    NSMutableArray *m_allCountryCodes;
    NSDictionary *m_countryCodesDic;
    NSLocale *m_curLocale;
    unsigned long long _locationMgrId;
    unsigned long long _addressMgrId;
    NSString *_currentLocationCountryCode;
}

@property(copy, nonatomic) NSString *currentLocationCountryCode; // @synthesize currentLocationCountryCode=_currentLocationCountryCode;
@property(nonatomic) unsigned long long addressMgrId; // @synthesize addressMgrId=_addressMgrId;
@property(nonatomic) unsigned long long locationMgrId; // @synthesize locationMgrId=_locationMgrId;
- (void).cxx_destruct;
- (id)getLocaleCountryCode;
- (id)getCarrierCountryCode;
- (id)getCurCountryCode;
- (void)getAllCountryCodeForLocaleIdentifier:(id)arg1;
- (id)findCountryWrapFromISOCountryCode:(id)arg1;
- (void)getAllCountryCode;
- (void)onDidFindAddress:(id)arg1 forTag:(unsigned long long)arg2;
- (void)onGPSLocationError:(int)arg1 withTag:(unsigned long long)arg2;
- (void)onGPSLocationChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (void)onPackageDownloadFinish:(id)arg1 package:(id)arg2;
- (void)onPackageDownloadProcessUpdated:(id)arg1 downloadSize:(int)arg2 totalSize:(int)arg3;
- (void)onPackageListUpdated:(id)arg1;
- (void)onPackageNeedUpdate:(id)arg1 withPackIDs:(id)arg2;
- (void)configCountryCodeRestriction;
- (void)configData;
- (void)checkUpdate;
- (id)countryCodeFromISOCountryCode:(id)arg1;
- (id)countryISOCodeForCountryCode:(id)arg1;
- (unsigned int)countOfCountryCodeStartWith:(id)arg1;
- (_Bool)isValidCountryCode:(id)arg1;
- (_Bool)isRestrictedCountryCode:(id)arg1;
- (id)getCountryCodeWrapsFromCountryCodeList:(id)arg1;
- (id)getAllCountryCodes;
@property(readonly, nonatomic) NSString *defaultCoutryCode;
- (id)getTopCountryCodeConfig;
- (id)init;
- (void)dealloc;

@end
