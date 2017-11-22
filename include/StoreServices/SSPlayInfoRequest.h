#import <StoreServices/SSRequest.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
#import <StoreServices/SSPlayInfoRequestContext.h>
#import <StoreServices/SSPlayInfoResponse.h>
@interface SSPlayInfoRequest : SSRequest
-(id)initWithPlayInfoContext:(id)context ;
-(void)startWithPlayInfoResponseBlock:(/*^block*/id)block ;
-(SSPlayInfoRequestContext *)playInfoContext;
-(SSPlayInfoResponse *)playInfoResponse;
-(id)init;
-(void)dealloc;
-(BOOL)start;
-(void)startWithCompletionBlock:(/*^block*/id)block ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
@end
