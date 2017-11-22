#import <StoreServices/SSVOperation.h>
#import <StoreServices/SSVFairPlaySAPSession.h>
#import <StoreServices/SSURLBag.h>
@interface SSVComplexOperation : SSVOperation
-(void)configureWithURLBagDictionary:(id)dictionary ;
-(void)configureWithURLBag:(id)bag ;
-(NSDictionary *)URLBagDictionary;
-(id)newLoadURLOperationWithRequest:(id)request ;
-(void)setSAPSession:(SSVFairPlaySAPSession *)session ;
-(SSVFairPlaySAPSession *)SAPSession;
@end
