/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:07 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSObject;

@interface SBReverseCountedSemaphore : NSObject {

	NSObject*<OS_dispatch_group> _group;

}
-(void)decrement;
-(void)increment;
-(id)init;
-(void)wait;
@end
