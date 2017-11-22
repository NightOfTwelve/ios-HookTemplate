#import <StoreServices/SSVPlaybackLeaseRequest.h>
@interface SSVPlaybackSubscriptionLeaseRequest : SSVPlaybackLeaseRequest
-(id)_actionParameterValue;
-(id)_copyBodyDictionaryWithFairPlaySession:(void*)session ;
-(id)_URLBagKey;
-(unsigned)_transactionType;
@end
