/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2017 at 11:56:02 PM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SSMutableURLRequestProperties, NSNumber, NSString;

@interface SUScriptURLRequest : SUScriptObject {

	SSMutableURLRequestProperties* _requestProperties;

}

@property (copy) NSNumber * timeoutInterval; 
@property (copy) NSString * URLBagKey; 
@property (copy) id URLs; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setURLs:(id)arg1 ;
-(id)URLs;
-(id)attributeKeys;
-(id)initWithNativeRequestProperties:(id)arg1 ;
-(id)copyNativeRequestProperties;
-(id)scriptAttributeKeys;
-(id)_className;
-(NSString *)URLBagKey;
-(void)setTimeoutInterval:(NSNumber *)arg1 ;
-(void)setURLBagKey:(NSString *)arg1 ;
-(NSNumber *)timeoutInterval;
@end

