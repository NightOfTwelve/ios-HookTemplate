//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCopying.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
@interface SSVMediaSocialPostExternalDestination : NSObject
-(void)setPageAccessToken:(NSString *)token ;
-(void)setPageIdentifier:(NSString *)identifier ;
-(NSString *)pageAccessToken;
-(NSString *)pageIdentifier;
-(id)copyWithZone:(NSZone*)zone ;
-(void)setAccessToken:(NSString *)token ;
-(void)setServiceIdentifier:(NSString *)identifier ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(NSString *)serviceIdentifier;
-(NSString *)accessToken;
@end
