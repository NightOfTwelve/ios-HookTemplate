/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:44 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIWindow.h>

@interface UIAutoRotatingWindow : UIWindow {

	int _interfaceOrientation;
	char _unknownOrientation;

}
+(id)sharedPopoverHostingWindow;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_initWithFrame:(CGRect)arg1 attached:(char)arg2 ;
-(void)_didRemoveSubview:(id)arg1 ;
-(void)updateForOrientation:(int)arg1 ;
-(void)commonInit;
@end

