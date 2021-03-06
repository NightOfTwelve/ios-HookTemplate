/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:53 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBAppSwitcherPeopleAbstractDataSource.h>
#import <SpringBoard/SBAppSwitcherPeopleDataSource.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface SBAppSwitcherTwoSectionFakeDataSource : SBAppSwitcherPeopleAbstractDataSource <SBAppSwitcherPeopleDataSource> {

	NSMutableArray* _sectionOne;
	NSMutableArray* _sectionTwo;
	NSMutableDictionary* _personIDsToColors;
	int _maxPersonID;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<SBAppSwitcherPeopleDataSourceConsumer> consumer; 
-(void)_swapColorOfOneRecentPerson;
-(void)_insertOneRecentPersonAndDeleteOneAtTheEnd;
-(void)_fillInSectionArrays;
-(id)_randomColor;
-(id)_rectOfColor:(id)arg1 size:(float)arg2 ;
-(unsigned)numberOfContactsInSection:(unsigned)arg1 ;
-(id)contactItemForIndexPath:(id)arg1 ;
-(id)optionalEmptyPlaceholderStringForSection:(unsigned)arg1 ;
-(void)cachedMonogramImageForPersonID:(int)arg1 ofSize:(float)arg2 generatingIfNecessaryWithResult:(/*^block*/id)arg3 ;
-(id)existingCachedMonogramImageForPersonID:(int)arg1 ofSize:(float)arg2 outIsMask:(char*)arg3 ;
-(id)silhouetteMonogramOfSize:(float)arg1 ;
-(void)purgeCaches;
-(char)isImageMaskForPersonID:(int)arg1 ofSize:(float)arg2 ;
-(id)titleForSection:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned)numberOfSections;
@end

