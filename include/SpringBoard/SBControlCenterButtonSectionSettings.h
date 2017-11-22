/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:09 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@class _UISettingsGroup;

@interface SBControlCenterButtonSectionSettings : _UISettings {

	_UISettingsGroup* _settingsGroup;

}

@property (retain) _UISettingsGroup * settingsGroup;              //@synthesize settingsGroup=_settingsGroup - In the implementation block
+(id)supportedButtonModuleClasses;
+(id)buttonModuleClasses;
+(id)settingsControllerModule;
-(BOOL)buttonEnabledForIdentifier:(id)arg1 ;
-(id)buttonSortKeyForIdentifier:(id)arg1 ;
-(Class)buttonSettingsClass;
-(void)setDefaultValues;
-(_UISettingsGroup *)settingsGroup;
-(void)setSettingsGroup:(_UISettingsGroup *)arg1 ;
@end
