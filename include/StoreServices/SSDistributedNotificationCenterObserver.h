@interface SSDistributedNotificationCenterObserver : NSObject
-(id)initWithName:(id)name queue:(id)queue block:(/*^block*/id)block ;
-(void)dealloc;
-(NSString *)name;
-(id)block;
-(id/* <OS_dispatch_queue> */)dispatchQueue;
@end
