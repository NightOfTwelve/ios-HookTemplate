#import <StoreServices/SSRequest.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
@interface SSAuthorizationRequest : SSRequest
-(NSString *)clientIdentifierHeader;
-(void)setClientIdentifierHeader:(NSString *)header ;
-(void)startWithAuthorizationResponseBlock:(/*^block*/id)block ;
-(id)authorizationToken;
-(NSNumber *)familyAccountIdentifier;
-(void)setFamilyAccountIdentifier:(NSNumber *)identifier ;
-(NSString *)keybagPath;
-(BOOL)shouldAddKeysToKeyBag;
-(void)setShouldAddKeysToKeyBag:(BOOL)bag ;
-(BOOL)shouldPromptForCredentials;
-(void)setShouldPromptForCredentials:(BOOL)credentials ;
-(id)init;
-(id)_init;
-(BOOL)start;
-(NSString *)reason;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)agent ;
-(void)startWithCompletionBlock:(/*^block*/id)block ;
-(id)initWithAuthorizationToken:(id)token accountIdentifier:(id)identifier ;
-(void)setKeybagPath:(NSString *)path ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(NSNumber *)accountIdentifier;
-(void)setAccountIdentifier:(NSNumber *)identifier ;
-(void)setReason:(NSString *)reason ;
@end
