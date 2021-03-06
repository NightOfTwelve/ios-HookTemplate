/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:58 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIAnimationController.h>

@class SBStarkScreenController;

@interface SBUIStarkScreenAnimationController : SBUIAnimationController {

	SBStarkScreenController* _starkScreenController;

}

@property (nonatomic,retain,readonly) SBStarkScreenController * starkScreenController;              //@synthesize starkScreenController=_starkScreenController - In the implementation block
-(SBStarkScreenController *)starkScreenController;
-(id)_getTransitionWindow;
-(void)_cleanupAnimation;
-(id)initWithActivatingApp:(id)arg1 deactivatingApp:(id)arg2 starkScreenController:(id)arg3 ;
-(void)__startAnimation;
-(id)__newWaitForAppActivationTransaction;
-(char)__wantsInitialProgressStateChange;
-(void)dealloc;
@end

