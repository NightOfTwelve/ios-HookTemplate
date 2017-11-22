#import <StoreServices/SSMetricsBaseEvent.h>
@interface SSMetricsPurchaseEvent : SSMetricsBaseEvent
-(id)init;
-(double)requestStartTime;
-(double)responseStartTime;
-(double)responseEndTime;
-(void)setRequestStartTime:(double)time ;
-(void)setResponseStartTime:(double)time ;
-(void)setResponseEndTime:(double)time ;
-(void)addFieldsFromPurchaseResponse:(id)response ;
-(void)setTransactionIdentifier:(NSString *)identifier ;
-(NSString *)transactionIdentifier;
@end
