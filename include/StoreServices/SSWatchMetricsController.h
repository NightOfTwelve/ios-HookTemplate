#import <StoreServices/SSXPCConnection.h>
#import <StoreServices/SSWatchMetricsConfiguration.h>
@interface SSWatchMetricsController : NSObject
-(id)init;
-(BOOL)isEnabled;
-(id)_connection;
-(void)setMetricsConfiguration:(SSWatchMetricsConfiguration *)configuration ;
-(SSWatchMetricsConfiguration *)metricsConfiguration;
-(id/* <OS_dispatch_queue> */)serialQueue;
-(void)insertEvent:(id)event withCompletionHandler:(/*^block*/id)handler ;
-(void)setSerialQueue:(id/* <OS_dispatch_queue> */)queue ;
@end
