//#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSVPlayActivityEventItemIDs.h>
@interface SSVMutablePlayActivityEventItemIDs : SSVPlayActivityEventItemIDs
-(void)setSubscriptionAdamID:(long long)d ;
-(void)setPurchasedAdamID:(long long)d ;
-(void)setRadioAdamID:(long long)d ;
-(void)setCloudID:(unsigned long long)d ;
-(id)copyWithZone:(NSZone*)zone ;
-(void)setEquivalencySourceAdamID:(long long)d ;
-(void)setLyricsID:(NSString *)d ;
@end
