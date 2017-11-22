@interface SSRemoteNotificationClient : NSObject
+(id)sharedClient;
-(id)popQueuedNotifications;
-(id)init;
-(void)dealloc;
-(void)registerForRemoteNotifications;
-(void)unregisterForRemoteNotifications;
@end
