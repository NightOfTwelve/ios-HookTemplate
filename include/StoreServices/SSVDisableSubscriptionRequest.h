#import <StoreServices/SSRequest.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
#import <StoreServices/SSAuthenticationContext.h>
@interface SSVDisableSubscriptionRequest : SSRequest
-(void)startWithCompletionBlock:(/*^block*/id)block ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(SSAuthenticationContext *)authenticationContext;
-(void)setAuthenticationContext:(SSAuthenticationContext *)context ;
@end
