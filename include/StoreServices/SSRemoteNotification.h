////#import <libobjc.A.dylib/SSXPCCoding.h>
@interface SSRemoteNotification : NSObject
-(id)initWithNotificationUserInfo:(id)info ;
-(id)_valueForAlertKey:(id)key ;
-(NSString *)alertBodyString;
-(NSString *)alertCancelString;
-(NSString *)alertOKString;
-(NSString *)alertTitleString;
-(NSString *)soundFileName;
-(NSDictionary *)notificationUserInfo;
-(id)valueForKey:(id)key ;
-(void)dealloc;
-(id)badgeValue;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(long long)actionType;
@end
