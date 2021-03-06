/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:44 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBDisplayProtocol <NSObject,SBActivationSettings,SBDeactivationSettings,SBStateSettings>
@required
-(void)clearStateSettings;
-(void)clearActivationSettings;
-(id)effectiveStatusBarStyleRequest;
-(id)copyDisplaySettings;
-(void)clearDeactivationSettings;
-(id)statusBarStyleRequest;
-(char)allowsEventOnlySuspension;
-(int)starkStatusBarStyle;
-(char)suppressesBanners;
-(char)suppressesNotificationCenter;
-(char)suppressesControlCenter;
-(int)statusBarStyle;
-(void)deactivate;
-(void)activate;

@end

