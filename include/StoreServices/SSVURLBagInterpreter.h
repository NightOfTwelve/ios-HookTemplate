//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCopying.h>
#import <StoreServices/SSVSAPSignaturePolicy.h>
@interface SSVURLBagInterpreter : NSObject
-(id)_valueForKey:(id)key withClass:(Class)class ;
-(id)URLForURLBagKey:(id)key ;
-(NSDictionary *)mescalSignedRequests;
-(NSDictionary *)mescalSignedActions;
-(NSDictionary *)mescalSignedResponses;
-(NSArray *)AMDDomains;
-(id)valueForURLBagKey:(id)key ;
-(id)mescalSignaturePolicyForRequestURL:(id)l ;
-(id)mescalSignaturePolicyForResponseURL:(id)l ;
-(BOOL)shouldSendAnonymousMachineIdentifierForURL:(id)l ;
-(id)copyWithZone:(NSZone*)zone ;
-(NSString *)storeFrontSuffix;
-(id)initWithURLBag:(id)bag ;
-(NSURL *)mescalCertificateURL;
-(NSURL *)mescalPrimingURL;
-(NSURL *)mescalSetupURL;
-(id)initWithURLBagDictionary:(id)dictionary ;
-(NSURL *)pastisKeyServerURL;
-(NSURL *)pastisCertificateURL;
@end
