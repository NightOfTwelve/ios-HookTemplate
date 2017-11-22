/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:07 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/NCInteractiveNotificationHostDelegate.h>
#import <SpringBoard/SBBannerButtonViewControllerDelegate.h>
#import <SpringBoard/NCNotificationActionTextInputDelegate.h>
#import <SpringBoard/NCBannerAccessoryHostViewControllerDelegate.h>
#import <SpringBoard/SBMotionGestureObserver.h>
#import <SpringBoard/SBBulletinWindowClient.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol NCInteractiveNotificationHost, OS_dispatch_group, SBBannerContextViewControllerDelegate;
@class UIViewController, NCBannerAccessoryHostViewController, NCContentHostViewController, SBBannerButtonViewController, SBUIBannerContext, SBBannerContainerView, SBBannerContextView, FBUIApplicationSceneDeactivationAssertion, UIView, NSObject, UIImage, NSString;

@interface SBBannerContainerViewController : UIViewController <NCInteractiveNotificationHostDelegate, SBBannerButtonViewControllerDelegate, NCNotificationActionTextInputDelegate, NCBannerAccessoryHostViewControllerDelegate, SBMotionGestureObserver, SBBulletinWindowClient, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning> {

	UIViewController*<NCInteractiveNotificationHost> _interactiveViewController;
	NCBannerAccessoryHostViewController* _accessoryViewController;
	NCContentHostViewController* _secondaryContentViewController;
	NCContentHostViewController* _inlayContentViewController;
	SBBannerButtonViewController* _buttonViewController;
	BOOL _notifiedAppeared;
	BOOL _manualDismissalEnabled;
	SBUIBannerContext* _bannerContext;
	SBBannerContainerView* _containerView;
	SBBannerContextView* _bannerContextView;
	FBUIApplicationSceneDeactivationAssertion* _resignActiveAssertion;
	UIView* _backgroundView;
	CGRect _keyboardFrame;
	double _maximumBannerHeight;
	NSObject*<OS_dispatch_group> _remoteLoadingGroup;
	BOOL _pulledDown;
	id<SBBannerContextViewControllerDelegate> _delegate;
	UIImage* _backgroundImage;

}

@property (assign,nonatomic,__weak) id<SBBannerContextViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage;                                              //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,readonly) SBBannerContextView * bannerContextView;                              //@synthesize bannerContextView=_bannerContextView - In the implementation block
@property (nonatomic,readonly) UIView * backgroundView;                                              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) BOOL canPullDown; 
@property (getter=isPulledDown,nonatomic,readonly) BOOL pulledDown;                                  //@synthesize pulledDown=_pulledDown - In the implementation block
@property (nonatomic,readonly) BOOL showsKeyboard; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)buttonViewController:(id)arg1 didSelectButtonAtIndex:(unsigned long long)arg2 ;
-(SBBannerContextView *)bannerContextView;
-(BOOL)requiresKeyWindow;
-(BOOL)isPulledDown;
-(void)setBannerContext:(id)arg1 withReplaceReason:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)transitionToActionWithIdentifier:(id)arg1 ;
-(void)setBannerPullPercentage:(double)arg1 ;
-(id)_bannerItem;
-(void)setBannerPullDisplacement:(double)arg1 ;
-(id)_bulletin;
-(void)_keyboardWillChange:(id)arg1 ;
-(void)_removeInteractiveViewController;
-(void)_removeButtonViewController;
-(void)_removeAccessoryViewController;
-(void)_removeSecondaryContentViewController;
-(void)_removeInlayContentViewController;
-(id)_bannerViewCreatingIfNecessary;
-(void)_updateMaximumHeights;
-(void)_loadRemoteViewControllersWithCompletion:(/*^block*/id)arg1 ;
-(void)_setInlayContentViewWithCompletion:(/*^block*/id)arg1 ;
-(void)_setPullDownViewWithCompletion:(/*^block*/id)arg1 ;
-(void)_setAccessoryViewWithCompletion:(/*^block*/id)arg1 ;
-(void)_setSecondaryContentViewWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)canPullDown;
-(void)_noteDidPullDown;
-(double)_bannerContentHeight;
-(double)_preferredPullDownViewHeight;
-(BOOL)_hasActions;
-(void)_updateMotionGestureObservation;
-(void)_handleBannerTapGesture:(id)arg1 ;
-(id)_newBackgroundViewWithFrame:(CGRect)arg1 ;
-(void)_handleBannerContainerTapGesture:(id)arg1 ;
-(CGRect)_bannerFrameForOrientation:(long long)arg1 ;
-(void)_updateMaximumHeightsWithOrientation:(long long)arg1 ;
-(void)_handleBannerTapGesture:(id)arg1 withActionContext:(id)arg2 ;
-(void)_setInteractiveViewController:(id)arg1 ;
-(id)_newButtonViewController;
-(void)_setButtonViewController:(id)arg1 ;
-(double)_miniumBannerContentHeight;
-(void)_updateMaximumContainerHeightForOrientation:(long long)arg1 ;
-(void)_updateMaximumPullDownViewHeight;
-(void)_updateMaximumBannerHeight;
-(double)preferredMaximumHeight;
-(double)_pullDownViewHeight;
-(double)_maximumPullDownViewHeight;
-(double)_pullDownBottomOverhangHeight;
-(void)_addChildViewController:(id)arg1 withTransition:(/*^block*/id)arg2 ;
-(void)_removeChildViewController:(id)arg1 withTransition:(/*^block*/id)arg2 ;
-(void)_setSecondaryContentViewController:(id)arg1 ;
-(void)_setInlayContentViewController:(id)arg1 ;
-(void)_setInteractiveViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_addChildPullDownViewController:(id)arg1 ;
-(void)_removeChildPullDownViewController:(id)arg1 ;
-(void)transitionToAction:(id)arg1 ;
-(CGRect)_bannerFrame;
-(void)didReceiveRaiseGesture;
-(double)_percentDismissed;
-(void)setDelegate:(id<SBBannerContextViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SBBannerContextViewControllerDelegate>)delegate;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)invalidate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(UIImage *)backgroundImage;
-(UIView *)backgroundView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(BOOL)showsKeyboard;
-(void)_setAccessoryViewController:(id)arg1 ;
-(void)hostViewControllerDidRequestDismissal:(id)arg1 ;
-(void)hostViewControllerDidRequestSticky:(id)arg1 ;
-(void)hostViewController:(id)arg1 didRequestSticky:(BOOL)arg2 ;
-(void)willPresentFromActionIdentifier:(id)arg1 ;
-(void)textInputViewController:(id)arg1 didSendTypedText:(id)arg2 ;
-(void)hostViewControllerDidChangePreferredContentSize:(id)arg1 ;
-(void)hostViewController:(id)arg1 didRequestDismissalWithContext:(id)arg2 ;
-(void)hostViewController:(id)arg1 serviceRequestedDismissalEnabled:(BOOL)arg2 ;
@end
