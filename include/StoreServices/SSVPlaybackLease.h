#import <StoreServices/SSVPlaybackLeaseConfiguration.h>
#import <StoreServices/SSVFairPlaySubscriptionController.h>
#import <StoreServices/SSVPlaybackLeaseRequest.h>
#import <StoreServices/SSVRefreshSubscriptionRequest.h>
#import <StoreServices/SSVBarrierOperationQueue.h>
#import <StoreServices/SSURLBag.h>
@interface SSVPlaybackLease : NSObject
-(NSString *)certificateURLBagKey;
-(void)setCertificateURLBagKey:(NSString *)key ;
-(id)_initSSVPlaybackLease;
-(id)initWithURLBag:(id)bag leaseType:(long long)type ;
-(id)_addOperationWithRequest:(id)request configurationURL:(id)l completionBlock:(/*^block*/id)block ;
-(void)_endLease;
-(void)getCertificateDataWithCompletionBlock:(/*^block*/id)block ;
-(void)_startRefreshTimerIfNecessary;
-(void)_cancelRefreshTimer;
-(void)_updateForLeaseResponse:(id)response error:(id)error ;
-(void)_fireRefreshTimer;
-(NSData *)certificateData;
-(BOOL)_shouldEndLeaseForError:(id)error returningEndReasonType:(unsigned long long*)type ;
-(void)_sendLeaseDidEndWithEndReasonType:(unsigned long long)type ;
-(id)initWithLeaseConfiguration:(id)configuration ;
-(BOOL)refreshesAutomatically;
-(void)setCertificateData:(NSData *)data ;
-(id)init;
-(void)setDelegate:(id/* <SSVPlaybackLeaseDelegate> */)delegate ;
-(void)dealloc;
-(id/* <SSVPlaybackLeaseDelegate> */)delegate;
-(void)cancelAllAssetRequests;
-(void)beginLeaseWithRequest:(id)request completionBlock:(/*^block*/id)block ;
-(void)setRefreshesAutomatically:(BOOL)automatically ;
-(void)endLease;
-(void)getAssetWithRequest:(id)request completionBlock:(/*^block*/id)block ;
-(void)preheatLeaseRequestsWithCompletionBlock:(/*^block*/id)block ;
-(void)refreshLeaseWithRequest:(id)request completionBlock:(/*^block*/id)block ;
-(id)initWithURLBag:(id)bag ;
@end
