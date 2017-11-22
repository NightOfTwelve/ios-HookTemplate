//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCopying.h>
#import <StoreServices/SSAccount.h>
#import <StoreServices/SSDialog.h>
@interface SSResponseAction : NSObject
+(id)_dialogActionWithDialog:(id)dialog ;
+(id)_invalidateURLBagsAction;
+(id)_setActiveAccountActionWithAccount:(id)account ;
+(id)_setCreditsActionWithCredits:(id)credits account:(id)account ;
+(id)_actionWithActionType:(id)type ;
+(id)_urlActionWithType:(id)type URL:(id)l ;
+(id)_selectFooterActionWithSection:(id)section ;
+(id)_checkInAppQueueActionWithClientID:(id)d environment:(id)environment ;
-(NSString *)footerSection;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)zone ;
-(NSURL *)URL;
-(NSString *)clientIdentifier;
-(long long)URLBagType;
-(SSDialog *)dialog;
-(SSAccount *)account;
-(NSString *)creditsString;
-(NSString *)actionType;
@end
