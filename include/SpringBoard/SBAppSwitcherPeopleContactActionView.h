/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:52 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAppSwitcherPeopleButtonAndLabelView.h>

@class SBAppSwitcherPeopleContactAction;

@interface SBAppSwitcherPeopleContactActionView : SBAppSwitcherPeopleButtonAndLabelView {

	SBAppSwitcherPeopleContactAction* _action;

}

@property (nonatomic,retain) SBAppSwitcherPeopleContactAction * action;              //@synthesize action=_action - In the implementation block
+(float)_layoutLabelVerticalPaddingCompact:(char)arg1 ;
+(CGSize)preferredLayoutSizeForMonogramSize:(float)arg1 compact:(char)arg2 ;
+(float)_layoutLabelFontSizeCompact:(char)arg1 ;
+(CGSize)preferredLayoutSizeForMonogramSize:(float)arg1 compact:(char)arg2 forAction:(id)arg3 ;
+(char)_centerImageVerticallyForLayout;
+(void)warmContactActionImages;
-(id)_mappedImageNamed:(id)arg1 renderingMode:(int)arg2 ;
-(id)_legibilityImageForImageNamed:(id)arg1 ;
-(float)_strengthForLegibilityStyle:(int)arg1 ;
-(CGSize)_maxLabelLayoutSize;
-(SBAppSwitcherPeopleContactAction *)action;
-(void)setAction:(SBAppSwitcherPeopleContactAction *)arg1 ;
@end
