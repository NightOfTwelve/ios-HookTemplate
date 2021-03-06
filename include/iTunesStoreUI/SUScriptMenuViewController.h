/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2017 at 11:56:02 PM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptViewController.h>

@class SUScriptFunction, WebScriptObject, NSNumber, NSString;

@interface SUScriptMenuViewController : SUScriptViewController {

	SUScriptFunction* _action;

}

@property (retain) WebScriptObject * action; 
@property (retain) id items; 
@property (retain) NSNumber * selectedIndex; 
@property (retain) NSString * title; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(WebScriptObject *)action;
-(NSString *)title;
-(id)items;
-(void)setItems:(id)arg1 ;
-(void)setAction:(WebScriptObject *)arg1 ;
-(id)_viewController;
-(NSNumber *)selectedIndex;
-(void)setSelectedIndex:(NSNumber *)arg1 ;
-(id)attributeKeys;
-(id)newNativeViewController;
-(id)itemWithTitle:(id)arg1 userInfo:(id)arg2 ;
-(id)scriptAttributeKeys;
-(id)_className;
@end

