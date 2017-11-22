#import <StoreServices/SSMetricsEventController.h>
@interface SSMetricsEventReportingSession : NSObject
-(id)initWithReportingURL:(id)l insertTimestamp:(long long)timestamp eventController:(id)controller ;
-(id)_unreportedEvents;
-(void)_writeString:(id)string toData:(id)data ;
-(id)sessionCanaryIdentifier;
-(BOOL)anyUnreportedEvents;
-(BOOL)markEventsAsReported;
-(id)writeEventsToStream:(id)stream ;
-(void)dealloc;
@end
