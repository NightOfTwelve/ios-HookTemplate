#import <StoreServices/SSRequest.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
@interface SSVKeybagSyncRequest : SSRequest
-(void)startWithCompletionBlock:(/*^block*/id)block ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(id)initWithAccountIdentifier:(id)identifier ;
-(NSNumber *)accountIdentifier;
@end
