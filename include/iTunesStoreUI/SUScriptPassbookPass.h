/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2017 at 11:56:02 PM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class PKPass, NSString;

@interface SUScriptPassbookPass : SUScriptObject {

	PKPass* _pass;

}

@property (readonly) NSString * passTypeIdentifier; 
@property (readonly) NSString * passURL; 
@property (readonly) NSString * serialNumber; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)attributeKeys;
-(NSString *)passTypeIdentifier;
-(id)scriptAttributeKeys;
-(id)_className;
-(NSString *)passURL;
-(NSString *)serialNumber;
-(id)initWithPass:(id)arg1 ;
@end

