#import <StoreServices/SSMetricsBaseEvent.h>
@interface SSMetricsAccountEvent : SSMetricsBaseEvent
-(void)setAccountEventType:(NSString *)type ;
-(NSString *)accountEventType;
-(id)init;
-(void)setAccountEventTypeWithEventIdentifier:(long long)identifier ;
@end
