/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:26 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSNumber, NSDate;

@interface AAFamilyMember : NSObject {

	char _isMe;
	char _isChild;
	char _isSharingPurchases;
	char _isOrganizer;
	char _areParentalControlsEnabled;
	char _isAskToBuyEnabled;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _appleID;
	NSNumber* _personID;
	NSString* _personIDHash;
	NSString* _title;
	NSDate* _joinDate;
	NSString* _iTunesNotLinkedMessage;
	NSString* _linkediTunesAppleID;
	NSNumber* _linkediTunesDSID;

}

@property (nonatomic,copy) NSString * firstName;                           //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                            //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy) NSString * appleID;                             //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,copy) NSNumber * personID;                            //@synthesize personID=_personID - In the implementation block
@property (nonatomic,copy) NSString * personIDHash;                        //@synthesize personIDHash=_personIDHash - In the implementation block
@property (nonatomic,copy) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSDate * joinDate;                              //@synthesize joinDate=_joinDate - In the implementation block
@property (assign,nonatomic) char isMe;                                    //@synthesize isMe=_isMe - In the implementation block
@property (assign,nonatomic) char isChild;                                 //@synthesize isChild=_isChild - In the implementation block
@property (assign,nonatomic) char isSharingPurchases;                      //@synthesize isSharingPurchases=_isSharingPurchases - In the implementation block
@property (assign,nonatomic) char isOrganizer;                             //@synthesize isOrganizer=_isOrganizer - In the implementation block
@property (nonatomic,copy) NSString * iTunesNotLinkedMessage;              //@synthesize iTunesNotLinkedMessage=_iTunesNotLinkedMessage - In the implementation block
@property (nonatomic,copy) NSString * linkediTunesAppleID;                 //@synthesize linkediTunesAppleID=_linkediTunesAppleID - In the implementation block
@property (nonatomic,copy) NSNumber * linkediTunesDSID;                    //@synthesize linkediTunesDSID=_linkediTunesDSID - In the implementation block
@property (assign,nonatomic) char areParentalControlsEnabled;              //@synthesize areParentalControlsEnabled=_areParentalControlsEnabled - In the implementation block
@property (assign,nonatomic) char isAskToBuyEnabled;                       //@synthesize isAskToBuyEnabled=_isAskToBuyEnabled - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)personIDHash;
-(void)setPersonIDHash:(NSString *)arg1 ;
-(NSDate *)joinDate;
-(void)setJoinDate:(NSDate *)arg1 ;
-(char)isChild;
-(void)setIsChild:(char)arg1 ;
-(void)setIsSharingPurchases:(char)arg1 ;
-(char)isOrganizer;
-(void)setIsOrganizer:(char)arg1 ;
-(NSString *)iTunesNotLinkedMessage;
-(void)setITunesNotLinkedMessage:(NSString *)arg1 ;
-(NSString *)linkediTunesAppleID;
-(void)setLinkediTunesAppleID:(NSString *)arg1 ;
-(NSNumber *)linkediTunesDSID;
-(void)setLinkediTunesDSID:(NSNumber *)arg1 ;
-(char)areParentalControlsEnabled;
-(void)setAreParentalControlsEnabled:(char)arg1 ;
-(char)isAskToBuyEnabled;
-(void)setIsAskToBuyEnabled:(char)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setIsMe:(char)arg1 ;
-(char)isMe;
-(NSNumber *)personID;
-(void)setPersonID:(NSNumber *)arg1 ;
-(void)setAppleID:(NSString *)arg1 ;
-(NSString *)appleID;
-(char)isSharingPurchases;
@end
