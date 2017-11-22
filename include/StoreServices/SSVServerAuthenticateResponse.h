////#import <libobjc.A.dylib/SSXPCCoding.h>
@interface SSVServerAuthenticateResponse : NSObject
-(NSNumber *)authenticatedAccountIdentifier;
-(void)setAuthenticatedAccountIdentifier:(NSNumber *)identifier ;
-(long long)performedButtonIndex;
-(void)setPerformedButtonIndex:(long long)index ;
-(void)setSelectedButtonIndex:(long long)index ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(long long)selectedButtonIndex;
-(NSURL *)redirectURL;
-(void)setRedirectURL:(NSURL *)l ;
@end
