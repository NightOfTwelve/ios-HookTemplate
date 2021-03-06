/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:09 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSArray;

@interface SBSwitchAppList : NSObject {

	NSArray* _list;

}

@property (nonatomic,retain) NSArray * list;              //@synthesize list=_list - In the implementation block
-(BOOL)containsBundleID:(id)arg1 ;
-(void)resetList;
-(id)applicationBundleIDBeforeBundleID:(id)arg1 ;
-(id)applicationBundleIDAfterBundleID:(id)arg1 ;
-(void)_resetList;
-(id)_findApplicationInDirection:(unsigned long long)arg1 startLookingAtIndex:(unsigned long long)arg2 ;
-(BOOL)_bundleIDShouldBeRepresentedInList:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)list;
-(void)setList:(NSArray *)arg1 ;
@end

