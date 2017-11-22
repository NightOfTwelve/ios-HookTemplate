/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:05 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class SBProxyRemoteView, SBApplication;

@interface SBSheetView : UIView {

	SBProxyRemoteView* _remoteProxyView;
	SBApplication* _app;
	BOOL _wasPresentedAnimated;

}
-(void)noteSheetDidEnd;
-(id)initWithRemoteViewIdentifier:(id)arg1 application:(id)arg2 wasPresentedAnimated:(BOOL)arg3 ;
-(BOOL)wasPresentedAnimated;
-(id)remoteViewIdentifier;
-(id)application;
@end
