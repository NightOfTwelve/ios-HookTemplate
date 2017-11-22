/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:08 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class NSString, SBLockScreenPluginLoader, SBAwayViewPluginController, SBLockScreenPluginOverlayViewController, SBLoginAppContainerOverlayWrapperView, SBLoginAppContainerPluginWrapperView;

@interface SBLoginAppContainerPluginWrapperViewController : UIViewController {

	NSString* _pluginName;
	SBLockScreenPluginLoader* _pluginLoader;
	SBAwayViewPluginController* _pluginController;
	SBLockScreenPluginOverlayViewController* _overlayController;
	SBLoginAppContainerOverlayWrapperView* _overlayWrapperView;
	SBLoginAppContainerPluginWrapperView* _containerView;

}

@property (nonatomic,readonly) SBAwayViewPluginController * plugin;              //@synthesize pluginController=_pluginController - In the implementation block
@property (nonatomic,readonly) NSString * pluginName;                            //@synthesize pluginName=_pluginName - In the implementation block
-(id)initWithPluginName:(id)arg1 ;
-(NSString *)pluginName;
-(void)loadView;
-(SBAwayViewPluginController *)plugin;
@end
