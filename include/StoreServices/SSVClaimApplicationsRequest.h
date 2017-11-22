#import <StoreServices/SSRequest.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
@interface SSVClaimApplicationsRequest : SSRequest
-(long long)claimStyle;
-(id)initWithClaimStyle:(long long)style ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(void)startWithResponseBlock:(/*^block*/id)block ;
@end
