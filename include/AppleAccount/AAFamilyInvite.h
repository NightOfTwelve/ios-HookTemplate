/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:26 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface AAFamilyInvite : NSObject {

	char _isChildTransferInvite;
	NSString* _code;
	NSString* _organizerFirstName;
	NSString* _organizerLastName;
	NSString* _organizerEmail;
	NSNumber* _organizerDSID;
	NSNumber* _recepientDSID;
	NSString* _childFirstName;
	NSString* _childLastName;

}

@property (nonatomic,copy) NSString * code;                            //@synthesize code=_code - In the implementation block
@property (nonatomic,copy) NSString * organizerFirstName;              //@synthesize organizerFirstName=_organizerFirstName - In the implementation block
@property (nonatomic,copy) NSString * organizerLastName;               //@synthesize organizerLastName=_organizerLastName - In the implementation block
@property (nonatomic,copy) NSString * organizerEmail;                  //@synthesize organizerEmail=_organizerEmail - In the implementation block
@property (nonatomic,copy) NSNumber * organizerDSID;                   //@synthesize organizerDSID=_organizerDSID - In the implementation block
@property (nonatomic,copy) NSNumber * recepientDSID;                   //@synthesize recepientDSID=_recepientDSID - In the implementation block
@property (assign,nonatomic) char isChildTransferInvite;               //@synthesize isChildTransferInvite=_isChildTransferInvite - In the implementation block
@property (nonatomic,copy) NSString * childFirstName;                  //@synthesize childFirstName=_childFirstName - In the implementation block
@property (nonatomic,copy) NSString * childLastName;                   //@synthesize childLastName=_childLastName - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)code;
-(NSString *)organizerFirstName;
-(void)setOrganizerFirstName:(NSString *)arg1 ;
-(NSString *)organizerLastName;
-(void)setOrganizerLastName:(NSString *)arg1 ;
-(NSNumber *)organizerDSID;
-(void)setOrganizerDSID:(NSNumber *)arg1 ;
-(NSNumber *)recepientDSID;
-(void)setRecepientDSID:(NSNumber *)arg1 ;
-(char)isChildTransferInvite;
-(void)setIsChildTransferInvite:(char)arg1 ;
-(NSString *)childFirstName;
-(void)setChildFirstName:(NSString *)arg1 ;
-(NSString *)childLastName;
-(void)setChildLastName:(NSString *)arg1 ;
-(void)setOrganizerEmail:(NSString *)arg1 ;
-(NSString *)organizerEmail;
-(void)setCode:(NSString *)arg1 ;
@end

