#import <StoreServices/SSRequest.h>
////#import <libobjc.A.dylib/SSPurchaseManagerDelegate.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
#import <StoreServices/SSPurchaseManager.h>
@interface SSPurchaseRequest : SSRequest
-(void)_addPurchasesToManager;
-(void)_finishPurchasesWithResponses:(id)responses ;
-(void)setPlaybackRequest:(BOOL)request ;
-(id)_purchaseForUniqueIdentifier:(long long)identifier ;
-(void)startWithPurchaseBlock:(/*^block*/id)block completionBlock:(/*^block*/id)block2 ;
-(BOOL)isBackgroundRequest;
-(void)setBackgroundRequest:(BOOL)request ;
-(BOOL)createsDownloads;
-(BOOL)isPlaybackRequest;
-(BOOL)shouldValidatePurchases;
-(id)init;
-(void)cancel;
-(void)dealloc;
-(BOOL)start;
-(void)startWithCompletionBlock:(/*^block*/id)block ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(void)purchaseManager:(id)manager didFinishPurchasesWithResponses:(id)responses ;
-(BOOL)needsAuthentication;
-(NSArray *)purchases;
-(void)setShouldValidatePurchases:(BOOL)purchases ;
-(id)initWithPurchases:(id)purchases ;
-(void)startWithPurchaseResponseBlock:(/*^block*/id)block completionBlock:(/*^block*/id)block2 ;
-(void)setNeedsAuthentication:(BOOL)authentication ;
-(void)setCreatesDownloads:(BOOL)downloads ;
-(void)setCreatesJobs:(BOOL)jobs ;
-(BOOL)createsJobs;
@end
