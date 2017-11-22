//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
////#import <libobjc.A.dylib/NSCopying.h>
////#import <libobjc.A.dylib/NSMutableCopying.h>
#import <StoreServices/SSURLBagContext.h>
@interface SSAuthenticationContext : NSObject
+(id)contextForSignIn;
-(BOOL)displaysOnLockScreen;
-(BOOL)isDemoAccount;
-(BOOL)_allowCreateAccount;
-(id)_initSSAuthenticationContext;
-(BOOL)allowsBootstrapCellularData;
-(void)_copyIvarsToCopy:(id)copy withZone:(NSZone*)zone ;
-(BOOL)isAccountNameEditable;
-(BOOL)allowsBioAuthentication;
-(BOOL)allowsRetry;
-(BOOL)canCreateNewAccount;
-(BOOL)canSetActiveAccount;
-(NSString *)clientIdentifierHeader;
-(NSString *)initialPassword;
-(BOOL)persistsAcrossDeviceLock;
-(BOOL)persistsPasswordFallback;
-(NSString *)preferredITunesStoreClient;
-(BOOL)shouldCreateNewSession;
-(BOOL)shouldFollowAccountButtons;
-(BOOL)shouldIgnoreProtocol;
-(BOOL)shouldSuppressDialogs;
-(NSDictionary *)signupRequestParameters;
-(NSArray *)userAgentComponents;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)zone ;
-(id)mutableCopyWithZone:(NSZone*)zone ;
-(NSString *)reasonDescription;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(NSDictionary *)requestParameters;
-(NSDictionary *)HTTPHeaders;
-(long long)accountScope;
-(id)initWithAccount:(id)account ;
-(NSString *)accountName;
-(long long)tokenType;
-(NSNumber *)requiredUniqueIdentifier;
-(id)initWithAccountIdentifier:(id)identifier ;
-(SSURLBagContext *)URLBagContext;
-(long long)promptStyle;
-(NSString *)altDSID;
@end
