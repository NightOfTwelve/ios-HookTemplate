/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:10 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/FBApplicationPlaceholderObserver.h>
#import <SpringBoard/SBLeafIconDataSource.h>

@protocol SBApplicationPlaceholderDelegate;
@class FBApplicationPlaceholder, NSString, NSMutableDictionary, NSMutableSet;

@interface SBApplicationPlaceholder : NSObject <FBApplicationPlaceholderObserver, SBLeafIconDataSource> {

	FBApplicationPlaceholder* _placeholderProxy;
	id<SBApplicationPlaceholderDelegate> _delegate;
	NSString* _applicationBundleID;
	NSString* _applicationDisplayName;
	double _fractionProgress;
	BOOL _installing;
	BOOL _observingKVO;
	unsigned long long _installType;
	BOOL _invalidated;
	NSMutableDictionary* _generatedIconImagesByKey;
	NSMutableSet* _formatsPendingGeneration;

}

@property (assign,nonatomic,__weak) id<SBApplicationPlaceholderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBApplicationPlaceholder * placeholderProxy;                       //@synthesize placeholderProxy=_placeholderProxy - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleID;                                      //@synthesize applicationBundleID=_applicationBundleID - In the implementation block
@property (nonatomic,copy) NSString * applicationDisplayName;                                   //@synthesize applicationDisplayName=_applicationDisplayName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)backgroundQueue;
-(id)icon:(id)arg1 imageWithFormat:(int)arg2 ;
-(unsigned long long)iconPriority:(id)arg1 ;
-(id)icon:(id)arg1 defaultImageWithFormat:(int)arg2 ;
-(id)iconDisplayName:(id)arg1 forLocation:(int)arg2 ;
-(BOOL)iconCanEllipsizeLabel:(id)arg1 ;
-(BOOL)iconCanTightenLabel:(id)arg1 ;
-(long long)iconProgressState:(id)arg1 ;
-(double)iconProgressPercent:(id)arg1 ;
-(BOOL)iconProgressIsPaused:(id)arg1 ;
-(id)iconBadgeNumberOrString:(id)arg1 ;
-(id)iconFormattedAccessoryString:(id)arg1 ;
-(int)iconAccessoryType:(id)arg1 ;
-(BOOL)iconIsRecentlyUpdated:(id)arg1 ;
-(BOOL)iconIsBeta:(id)arg1 ;
-(BOOL)iconSupportsUninstall:(id)arg1 ;
-(BOOL)iconCompleteUninstall:(id)arg1 ;
-(BOOL)iconAllowsLaunch:(id)arg1 ;
-(BOOL)icon:(id)arg1 launchFromLocation:(int)arg2 context:(id)arg3 ;
-(id)fetchIconImageWithFormat:(int)arg1 ;
-(void)setPlaceholderProxy:(FBApplicationPlaceholder *)arg1 ;
-(FBApplicationPlaceholder *)placeholderProxy;
-(void)setApplicationDisplayName:(NSString *)arg1 ;
-(void)_progressChanged;
-(void)_reloadThumbnailImage;
-(id)_getOrGenerateIconImageWithFormat:(int)arg1 ;
-(id)_iconImageKeyForBundleID:(id)arg1 format:(int)arg2 ;
-(void)_generateIconImageWithFormat:(int)arg1 ;
-(void)_generatePendingIconFormats;
-(BOOL)_shouldDisplayAppName;
-(id)_downloadingLabel;
-(id)_defaultIconImageWithFormat:(int)arg1 ;
-(void)_prioritize;
-(id)initWithPlaceholderProxy:(id)arg1 ;
-(void)iconChanged;
-(BOOL)isPausable;
-(BOOL)isFailed;
-(unsigned long long)installType;
-(void)cancel;
-(void)setDelegate:(id<SBApplicationPlaceholderDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id<SBApplicationPlaceholderDelegate>)delegate;
-(BOOL)isActive;
-(void)invalidate;
-(BOOL)isDone;
-(BOOL)isContentRestricted;
-(BOOL)isCancelable;
-(BOOL)isPaused;
-(void)placeholderPercentCompleteDidChange:(id)arg1 ;
-(void)placeholderCancellabilityDidChange:(id)arg1 ;
-(void)placeholderPausabilityDidChange:(id)arg1 ;
-(void)placeholderInstallStateDidChange:(id)arg1 ;
-(void)placeholderInstallPhaseDidChange:(id)arg1 ;
-(void)placeholderDidChangeSignificantly:(id)arg1 ;
-(void)_pause;
-(BOOL)isDownloading;
-(NSString *)applicationBundleID;
-(NSString *)applicationDisplayName;
-(void)setApplicationBundleID:(NSString *)arg1 ;
-(BOOL)isInstalling;
@end

