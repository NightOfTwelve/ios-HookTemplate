//#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSAuthenticationContext.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
////#import <libobjc.A.dylib/NSCopying.h>
////#import <libobjc.A.dylib/NSMutableCopying.h>
@interface SSMutableAuthenticationContext : SSAuthenticationContext
-(void)setHTTPHeaders:(NSDictionary *)headers ;
-(void)setDemoAccount:(BOOL)account ;
-(void)setAccountScope:(long long)scope ;
-(void)setAllowsBootstrapCellularData:(BOOL)data ;
-(void)setPreferredITunesStoreClient:(NSString *)client ;
-(void)setPersistsPasswordFallback:(BOOL)fallback ;
-(void)setShouldIgnoreProtocol:(BOOL)protocol ;
-(void)setShouldSuppressDialogs:(BOOL)dialogs ;
-(void)setSignupRequestParameters:(NSDictionary *)parameters ;
-(void)setUserAgentComponents:(NSArray *)components ;
-(void)setAllowsBioAuthentication:(BOOL)authentication ;
-(void)setClientIdentifierHeader:(NSString *)header ;
-(void)setPersistsAcrossDeviceLock:(BOOL)lock ;
-(void)setValuesWithAccount:(id)account ;
-(id)copyWithZone:(NSZone*)zone ;
-(id)mutableCopyWithZone:(NSZone*)zone ;
-(void)setValue:(id)value forHTTPHeaderField:(id)field ;
-(void)setAccountNameEditable:(BOOL)editable ;
-(void)setDisplaysOnLockScreen:(BOOL)screen ;
-(void)setShouldFollowAccountButtons:(BOOL)buttons ;
-(void)setRequiredUniqueIdentifier:(NSNumber *)identifier ;
-(void)setRequestParameters:(NSDictionary *)parameters ;
-(void)setAccountName:(NSString *)name ;
-(void)setInitialPassword:(NSString *)password ;
-(void)setAltDSID:(NSString *)d ;
-(void)setAllowsRetry:(BOOL)retry ;
-(void)setCanSetActiveAccount:(BOOL)account ;
-(void)setPromptStyle:(long long)style ;
-(void)setTokenType:(long long)type ;
-(void)setCanCreateNewAccount:(BOOL)account ;
-(void)setReasonDescription:(NSString *)description ;
-(void)setShouldCreateNewSession:(BOOL)session ;
@end
