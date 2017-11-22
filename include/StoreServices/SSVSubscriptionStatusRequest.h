#import <StoreServices/SSRequest.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
#import <StoreServices/SSAuthenticationContext.h>
@interface SSVSubscriptionStatusRequest : SSRequest
+(long long)requestMessage;
-(void)setAuthenticatesIfNecessary:(BOOL)necessary ;
-(void)setCarrierBundleProvisioningStyle:(long long)style ;
-(void)setLocalizedAuthenticationReason:(NSString *)reason ;
-(void)startWithStatusResponseBlock:(/*^block*/id)block ;
-(BOOL)authenticatesIfNecessary;
-(long long)carrierBundleProvisioningStyle;
-(NSString *)localizedAuthenticationReason;
-(NSString *)reason;
-(void)startWithCompletionBlock:(/*^block*/id)block ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(SSAuthenticationContext *)authenticationContext;
-(void)setAuthenticationContext:(SSAuthenticationContext *)context ;
-(void)setReason:(NSString *)reason ;
@end
