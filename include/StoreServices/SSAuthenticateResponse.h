////#import <libobjc.A.dylib/SSXPCCoding.h>
#import <StoreServices/SSAccount.h>
@interface SSAuthenticateResponse : NSObject
-(void)setAuthenticatedAccount:(SSAccount *)account ;
-(void)setAuthenticateResponseType:(long long)type ;
-(void)setResponseDictionary:(NSDictionary *)dictionary ;
-(void)dealloc;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(long long)authenticateResponseType;
-(NSDictionary *)responseDictionary;
-(SSAccount *)authenticatedAccount;
-(NSError *)error;
-(void)_setError:(id)error ;
@end
