#import <StoreServices/SSRequest.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
#import <StoreServices/SSAuthenticationContext.h>
@interface SSVRefreshSubscriptionRequest : SSRequest
-(BOOL)isRequestingOfflineSlot;
-(void)setRequestingOfflineSlot:(BOOL)slot ;
-(void)startWithCompletionBlock:(/*^block*/id)block ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(SSAuthenticationContext *)authenticationContext;
-(void)startWithResponseBlock:(/*^block*/id)block ;
-(void)setAuthenticationContext:(SSAuthenticationContext *)context ;
@end
