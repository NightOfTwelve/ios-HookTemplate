#import <StoreServices/SSRequest.h>
@interface SSVCloudServiceCapabilitiesRequest : SSRequest
-(void)startWithCompletionBlock:(/*^block*/id)block ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(void)startWithResponseBlock:(/*^block*/id)block ;
@end
