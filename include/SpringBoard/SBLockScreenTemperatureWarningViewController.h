/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:09 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBLockOverlayViewController.h>

@class SBLockScreenTemperatureWarningView, NSString;

@interface SBLockScreenTemperatureWarningViewController : SBLockOverlayViewController {

	SBLockScreenTemperatureWarningView* _warningView;

}

@property (nonatomic,__weak,readonly) NSString * slideToUnlockText; 
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(NSString *)slideToUnlockText;
@end
