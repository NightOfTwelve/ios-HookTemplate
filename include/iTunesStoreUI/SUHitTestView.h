/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2017 at 11:56:00 PM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray;

@interface SUHitTestView : UIView {

	NSMutableArray* _hitTestTargets;

}
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)removeHitTestTarget:(id)arg1 ;
-(void)addHitTestTarget:(id)arg1 ;
@end
