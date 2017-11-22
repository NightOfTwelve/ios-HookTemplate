#import <StoreServices/SSRequest.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
#import <StoreServices/SSAuthenticationContext.h>
@interface SSRedeemCodesRequest : SSRequest
-(NSArray *)redeemCodes;
-(BOOL)headless;
-(void)dealloc;
-(void)startWithCompletionBlock:(/*^block*/id)block ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(SSAuthenticationContext *)authenticationContext;
-(void)setCameraRecognized:(BOOL)recognized ;
-(void)setAuthenticationContext:(SSAuthenticationContext *)context ;
-(id)initWithRedeemCodes:(id)codes ;
-(void)setHeadless:(BOOL)headless ;
-(void)startWithRedeemResponseBlock:(/*^block*/id)block ;
-(BOOL)cameraRecognized;
@end
