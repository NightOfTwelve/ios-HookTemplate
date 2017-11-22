#import <StoreServices/SSRequest.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
@interface SSVApplicationCapabilitiesRequest : SSRequest
-(void)startWithCapabilitiesResponseBlock:(/*^block*/id)block ;
-(void)startWithCompletionBlock:(/*^block*/id)block ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(void)setBundleID:(NSString *)d ;
-(NSString *)bundleID;
@end
