/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:07 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBPasscodeEntryAlertView.h>

@class SUAutoInstallOperation;

@interface SBInstallTonightPasscodeEntryAlertView : SBPasscodeEntryAlertView {

	SUAutoInstallOperation* _installOperation;

}
-(void)alertDisplayWillBecomeVisible;
-(/*^block*/id)_passcodeViewGenerator;
-(void)setInstallTonightOperation:(id)arg1 ;
-(id)_bodyTextToModelSpecificLocalizedKey:(id)arg1 ;
@end

