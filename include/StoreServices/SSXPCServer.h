@interface SSXPCServer : NSObject
+(id)mainServer;
-(id)initWithServiceName:(id)name entitlement:(id)entitlement queue:(id)queue ;
-(void)_dispatchMessage:(id)message connection:(id)connection ;
-(void)addObserver:(id)observer selector:(SEL)selector forMessage:(long long)message ;
-(void)removeObserver:(id)observer selector:(SEL)selector forMessage:(long long)message ;
-(id)init;
-(void)dealloc;
-(void)start;
-(id)initWithServiceName:(id)name ;
@end
