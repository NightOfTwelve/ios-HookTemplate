/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:58 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _SBIconWallpaperColorClient <NSObject>
@required
-(CGRect*)wallpaperRelativeBounds;
-(char)wantsBlur:(id)arg1;
-(void)setWallpaperColor:(CGColorRef)arg1 phase:(CGSize)arg2;
-(void)setBlurring:(char)arg1;
-(char)isBlurring;

@end
