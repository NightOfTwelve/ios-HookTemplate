#import <StoreServices/SSMetricsController.h>
#import <StoreServices/SSMetricsEventTable.h>
@interface SSMetricsEventController : SSMetricsController
-(void)_serialQueueInsertEvents:(id)events withCompletionHandler:(/*^block*/id)handler ;
-(int)_maximumUnreportedToSelect;
-(id)_collectUnreportedPIDsFromDatabase:(id)database matchingReportURLString:(id)string since:(long long)since ;
-(BOOL)deleteEventsInsertedBefore:(long long)before ;
-(BOOL)deleteReportedEvents;
-(BOOL)insertEventSummaries:(id)summaries error:(id*)error ;
-(BOOL)markEventsAsReported:(id)reported ;
-(id)unreportedEventsForURL:(id)l since:(long long)since ;
-(id)newReportingSessionForURL:(id)l since:(long long)since ;
-(id)unreportedEventURLsSince:(long long)since ;
-(id)init;
-(void)dealloc;
-(void)flushUnreportedEventsWithCompletionHandler:(/*^block*/id)handler ;
@end
