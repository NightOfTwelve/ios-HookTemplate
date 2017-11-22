#import <StoreServices/SSRequest.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
#import <StoreServices/SSAuthenticationContext.h>
@interface SSVServerAuthenticateRequest : SSRequest
-(void)startWithAuthenticateResponse:(/*^block*/id)response ;
-(id/* <OS_xpc_object> */)encodedDialog;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(SSAuthenticationContext *)authenticationContext;
-(id)initWithEncodedDialog:(id)dialog ;
-(void)setAuthenticationContext:(SSAuthenticationContext *)context ;
@end
