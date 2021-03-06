/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:09 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBCCShortcutModule.h>

@class NSString, NSDateFormatter;

@interface SBCCRecordScreenShortcut : SBCCShortcutModule {

	OpaqueFigVirtualDisplaySessionRef _session;
	NSString* _lastRecordingPath;
	NSDateFormatter* _dateFormatter;

}
+(BOOL)isSupported:(int)arg1 ;
+(BOOL)enabledByDefault;
+(id)identifier;
+(id)displayName;
-(BOOL)_toggleState;
-(id)glyphImageForState:(int)arg1 ;
-(id)statusUpdate;
-(void)_videoAtPath:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void*)arg3 ;
-(void)_startRecording;
-(void)deactivate;
-(void)activate;
-(void)_stopRecording;
@end

