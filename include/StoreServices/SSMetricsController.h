#import <StoreServices/SSXPCConnection.h>
#import <StoreServices/SSMetricsConfiguration.h>
@interface SSMetricsController : NSObject
-(id)_userType;
-(id)_cookieValuesForConfiguration:(id)configuration ;
-(void)_flushUnreportedEventsIfEnabled;
-(void)_handleFlushTimer;
-(void)_setupFlushTimer;
-(void)insertEvents:(id)events withCompletionHandler:(/*^block*/id)handler ;
-(void)_serialQueueInsertEvents:(id)events withCompletionHandler:(/*^block*/id)handler ;
-(void)_enumerateFieldValuesWithMap:(id)map fieldData:(id)data block:(/*^block*/id)block ;
-(id)_valueForField:(id)field withFieldData:(id)data ;
-(BOOL)isFlushTimerEnabled;
-(id)init;
-(void)dealloc;
-(id)configuration;
-(id)_connection;
-(void)setFlushTimerEnabled:(BOOL)enabled ;
-(void)_applicationWillEnterForeground;
-(void)setPageConfiguration:(id)configuration ;
-(id)pingURLs;
-(id)locationWithPosition:(long long)position type:(id)type fieldData:(id)data ;
-(BOOL)isDisabled;
-(void)setGlobalConfiguration:(id)configuration ;
-(void)flushUnreportedEventsWithCompletionHandler:(/*^block*/id)handler ;
-(id)serialQueue;
-(void)insertEvent:(id)event withCompletionHandler:(/*^block*/id)handler ;
@end
