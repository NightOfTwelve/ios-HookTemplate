#import <StoreServices/SSXPCServer.h>
@interface SSDistributedNotificationCenter : NSObject
-(id)initWithNamedPort:(id)port ;
-(void)_distributedNotificationMessage:(id)message connection:(id)connection ;
-(void)_sendRegistrationMessage:(long long)message name:(id)name ;
-(id)addObserverForName:(id)name queue:(id)queue usingBlock:(/*^block*/id)block ;
-(NSString *)namedPort;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)observer ;
@end
