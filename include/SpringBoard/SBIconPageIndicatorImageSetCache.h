/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:07 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UILegibilitySettings, SBIconPageIndicatorImageSetResult;

@interface SBIconPageIndicatorImageSetCache : NSObject {

	_UILegibilitySettings* _legibilitySettings;
	SBIconPageIndicatorImageSetResult* _indicatorImageSetResults;
	SBIconPageIndicatorImageSetResult* _searchImageSetResults;

}
+(id)homescreenPageIndicatorImageSetCache;
-(id)pageIndicatorImageSetForLegibilitySettings:(id)arg1 ;
-(id)searchIndicatorImageSetForLegibilitySettings:(id)arg1 ;
-(id)_emptyPageIndicatorSet;
-(void)setLegibilitySettings:(id)arg1 ;
@end
