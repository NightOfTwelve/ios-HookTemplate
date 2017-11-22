#import <StoreServices/SSWatchMetricsEventTable.h>
@interface SSWatchMetricsEventsController : NSObject
+(id)_numberFormatter;
-(BOOL)insertWatchMetricEvent:(id)event error:(id*)error ;
-(id)unreportedEventsSinceTimestamp:(long long)timestamp ;
-(void)discardUnreportableEvents;
-(void)markAsCompleted:(id)completed ;
-(void)markAsFailed:(id)failed ;
-(SSWatchMetricsEventTable *)table;
-(id/* <OS_dispatch_queue> */)serialQueue;
@end
