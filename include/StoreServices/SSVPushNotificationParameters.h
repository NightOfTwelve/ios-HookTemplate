//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSVPushNotificationParameters : NSObject
-(id)valueForParameter:(id)parameter ;
-(NSArray *)mediaKinds;
-(NSDictionary *)putParameters;
-(void)setMediaKinds:(NSArray *)kinds ;
-(void)setPutParameters:(NSDictionary *)parameters ;
-(id)_copyParametersDictionary;
-(id)init;
-(id)copyWithZone:(NSZone*)zone ;
-(void)setRequestType:(long long)type ;
-(void)setValue:(id)value forParameter:(id)parameter ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(NSNumber *)accountIdentifier;
-(void)setAccountIdentifier:(NSNumber *)identifier ;
-(long long)requestType;
-(NSString *)environmentName;
-(void)setEnvironmentName:(NSString *)name ;
-(NSString *)notificationType;
-(void)setNotificationType:(NSString *)type ;
@end
