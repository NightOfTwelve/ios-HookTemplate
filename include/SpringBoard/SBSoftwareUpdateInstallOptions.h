/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:09 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBSoftwareUpdateInstallOptions : NSObject {

	BOOL _automaticInstallAttempt;
	BOOL _installDark;

}

@property (assign,nonatomic) BOOL automaticInstallAttempt;              //@synthesize automaticInstallAttempt=_automaticInstallAttempt - In the implementation block
@property (assign,nonatomic) BOOL installDark;                          //@synthesize installDark=_installDark - In the implementation block
-(BOOL)automaticInstallAttempt;
-(BOOL)installDark;
-(void)setAutomaticInstallAttempt:(BOOL)arg1 ;
-(void)setInstallDark:(BOOL)arg1 ;
-(id)description;
@end
