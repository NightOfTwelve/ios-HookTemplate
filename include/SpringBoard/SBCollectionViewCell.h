/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:08 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>

@protocol SBCollectionViewCellDelegate;
@interface SBCollectionViewCell : UICollectionViewCell {

	BOOL _performSetHighlighted;
	BOOL _protectDelayedUnhighlights;
	id<SBCollectionViewCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBCollectionViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL protectDelayedUnhighlights;                               //@synthesize protectDelayedUnhighlights=_protectDelayedUnhighlights - In the implementation block
-(void)setHighlighted:(BOOL)arg1 afterDelay:(double)arg2 ;
-(void)_performSetHighlighted;
-(void)_didSetHighlighted:(BOOL)arg1 ;
-(BOOL)protectDelayedUnhighlights;
-(void)setProtectDelayedUnhighlights:(BOOL)arg1 ;
-(void)setDelegate:(id<SBCollectionViewCellDelegate>)arg1 ;
-(id<SBCollectionViewCellDelegate>)delegate;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)prepareForReuse;
@end

