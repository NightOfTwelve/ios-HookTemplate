#import <StoreServices/SSRequest.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
#import <StoreServices/SSAuthenticationContext.h>
@interface SSAuthenticateRequest : SSRequest
-(void)dealloc;
-(BOOL)start;
-(void)startWithCompletionBlock:(/*^block*/id)block ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(SSAuthenticationContext *)authenticationContext;
-(id)initWithAccount:(id)account ;
-(void)startWithAuthenticateResponseBlock:(/*^block*/id)block ;
-(id)initWithAuthenticationContext:(id)context ;
@end
