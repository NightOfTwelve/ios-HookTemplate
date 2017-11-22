////#import <libobjc.A.dylib/NSCacheDelegate.h>
////#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <StoreServices/SSMetricsController.h>
@interface SSURLSessionManager : NSObject
+(double)_timingDataMetricToServerTimeInterval:(id)interval ;
+(id)_DNSServerIPAddresses;
+(id)_resolvedIPAddressFromTask:(id)task ;
+(id)_bagPerformanceValues;
+(id)eventFromTimingData:(id)data task:(id)task ;
+(id)_bagValueForKey:(id)key ;
+(double)_localTimeIntervalToServerTimeInterval:(double)interval ;
-(id)dataTaskWithRequest:(id)request delegate:(id)delegate ;
-(id/* <OS_dispatch_queue> */)sessionsQueue;
-(id)_sessionWithDelegate:(id)delegate ;
-(void)_setDelegate:(id)delegate forTask:(id)task ;
-(id)_delegateForTask:(id)task ;
-(void)_insertEventIntoDatabase:(id)database ;
-(void)_removeDelegateForTask:(id)task ;
-(id/* <OS_dispatch_queue> */)taskDelegatesQueue;
-(id)_sessionIDWithDelegate:(id)delegate collectTimingData:(BOOL)data ;
-(id)_sessionConfigurationWithDelegate:(id)delegate collectTimingData:(BOOL)data ;
-(int)_PIDFromAuditTokenData:(id)data ;
-(BOOL)_shouldSetCookiesForDelegate:(id)delegate ;
-(BOOL)_shouldRequireCelluarForDelegate:(id)delegate ;
-(BOOL)_shouldDisableCellularForDelegate:(id)delegate ;
-(id)_URLCacheIDForDelegate:(id)delegate ;
-(id)_URLCacheForDelegate:(id)delegate ;
-(void)setSessions:(NSMutableDictionary *)sessions ;
-(void)setSessionsQueue:(id/* <OS_dispatch_queue> */)queue ;
-(NSMapTable *)taskDelegates;
-(void)setTaskDelegates:(NSMapTable *)delegates ;
-(void)setTaskDelegatesQueue:(id/* <OS_dispatch_queue> */)queue ;
-(id)init;
-(void)dealloc;
-(id/* <OS_dispatch_queue> */)eventQueue;
-(void)setEventQueue:(id/* <OS_dispatch_queue> */)queue ;
-(void)URLSession:(id)session dataTask:(id)task didReceiveResponse:(id)response completionHandler:(/*^block*/id)handler ;
-(void)URLSession:(id)session dataTask:(id)task didReceiveData:(id)data ;
-(void)URLSession:(id)session task:(id)task willPerformHTTPRedirection:(id)redirection newRequest:(id)request completionHandler:(/*^block*/id)handler ;
-(void)URLSession:(id)session task:(id)task didReceiveChallenge:(id)challenge completionHandler:(/*^block*/id)handler ;
-(void)URLSession:(id)session task:(id)task needNewBodyStream:(/*^block*/id)stream ;
-(void)URLSession:(id)session task:(id)task didSendBodyData:(long long)data totalBytesSent:(long long)sent totalBytesExpectedToSend:(long long)send ;
-(void)URLSession:(id)session task:(id)task didCompleteWithError:(id)error ;
-(SSMetricsController *)metricsController;
-(void)setMetricsController:(SSMetricsController *)controller ;
-(NSMutableDictionary *)sessions;
@end
