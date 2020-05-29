//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CLHeading, CLLocation, NSDictionary, TencentLBSLocation;

@protocol ILocationMgrExt

@optional
- (void)onDidFindAddress:(NSDictionary *)arg1 forTag:(unsigned long long)arg2;
- (void)onHeadingError:(int)arg1 withTag:(unsigned long long)arg2;
- (void)onHeadingChanged:(CLHeading *)arg1 withTag:(unsigned long long)arg2;
- (void)onGPSLBSLocationError:(int)arg1 withTag:(unsigned long long)arg2;
- (void)onGPSLBSLocationChanged:(TencentLBSLocation *)arg1 withTag:(unsigned long long)arg2;
- (void)onGPSAccurateLBSLocationChanged:(TencentLBSLocation *)arg1 withTag:(unsigned long long)arg2;
- (void)onGPSLocationError:(int)arg1 withTag:(unsigned long long)arg2;
- (void)onGPSLocationChanged:(CLLocation *)arg1 withTag:(unsigned long long)arg2;
- (void)onGPSAccurateLocationChanged:(CLLocation *)arg1 withTag:(unsigned long long)arg2;
@end
