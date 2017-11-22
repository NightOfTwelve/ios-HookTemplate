#import <StoreServices/SSRequest.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
@interface SSKeybagRequest : SSRequest
-(id)contentIdentifier;
-(void)setContentIdentifier:(id)identifier ;
-(long long)keybagOptions;
-(void)setKeybagOptions:(long long)options ;
-(void)dealloc;
-(void)startWithCompletionBlock:(/*^block*/id)block ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(id)initWithAccountIdentifier:(id)identifier ;
-(id)accountIdentifier;
-(NSNumber *)accountID;
@end
