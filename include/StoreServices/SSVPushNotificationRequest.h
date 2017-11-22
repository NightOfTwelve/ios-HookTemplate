#import <StoreServices/SSRequest.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
#import <StoreServices/SSVPushNotificationParameters.h>
@interface SSVPushNotificationRequest : SSRequest
-(id)initWithPushNotificationParameters:(id)parameters ;
-(SSVPushNotificationParameters *)pushNotificationParameters;
-(void)setPushNotificationParameters:(SSVPushNotificationParameters *)parameters ;
-(BOOL)start;
-(void)startWithCompletionBlock:(/*^block*/id)block ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(void)startWithResponseBlock:(/*^block*/id)block ;
@end
