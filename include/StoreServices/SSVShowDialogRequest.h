#import <StoreServices/SSRequest.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
@interface SSVShowDialogRequest : SSRequest
-(id/* <OS_xpc_object> */)encodedDialog;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(id)initWithEncodedDialog:(id)dialog ;
-(void)startWithDialogResponseBlock:(/*^block*/id)block ;
@end
