#import <StoreServices/SSRequest.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
@interface SSPersonalizeOffersRequest : SSRequest
-(void)startWithPersonalizedResponseBlock:(/*^block*/id)block ;
-(void)dealloc;
-(NSArray *)items;
-(BOOL)start;
-(id)initWithItems:(id)items ;
-(void)startWithCompletionBlock:(/*^block*/id)block ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
@end
