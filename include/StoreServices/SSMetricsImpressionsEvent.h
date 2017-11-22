#import <StoreServices/SSMetricsBaseEvent.h>
@interface SSMetricsImpressionsEvent : SSMetricsBaseEvent
-(id)init;
-(id)description;
-(NSArray *)impressionIdentifiers;
-(void)setImpressionIdentifiers:(NSArray *)identifiers ;
@end
