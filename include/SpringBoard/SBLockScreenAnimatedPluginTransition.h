/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:08 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBLockScreenPluginTransition.h>

@class SBLockOverlayTransition;

@interface SBLockScreenAnimatedPluginTransition : SBLockScreenPluginTransition {

	SBLockOverlayTransition* _activeToOverlayTransition;
	SBLockOverlayTransition* _activeFromOverlayTransition;
	SBLockOverlayTransition* _activeOverlayTransition;

}

@property (nonatomic,retain) SBLockOverlayTransition * activeToOverlayTransition;                //@synthesize activeToOverlayTransition=_activeToOverlayTransition - In the implementation block
@property (nonatomic,retain) SBLockOverlayTransition * activeFromOverlayTransition;              //@synthesize activeFromOverlayTransition=_activeFromOverlayTransition - In the implementation block
@property (nonatomic,retain) SBLockOverlayTransition * activeOverlayTransition;                  //@synthesize activeOverlayTransition=_activeOverlayTransition - In the implementation block
-(void)_finalizeAndClearPluginAnimationContext;
-(void)setActiveToOverlayTransition:(SBLockOverlayTransition *)arg1 ;
-(void)setActiveFromOverlayTransition:(SBLockOverlayTransition *)arg1 ;
-(void)setActiveOverlayTransition:(SBLockOverlayTransition *)arg1 ;
-(SBLockOverlayTransition *)activeToOverlayTransition;
-(SBLockOverlayTransition *)activeFromOverlayTransition;
-(SBLockOverlayTransition *)activeOverlayTransition;
-(void)beginTransition;
@end

