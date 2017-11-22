#import <StoreServices/SSMetricsBaseEvent.h>
@interface SSMetricsExitEvent : SSMetricsBaseEvent
-(void)setExitType:(NSString *)type ;
-(NSString *)exitURL;
-(void)setExitTypeWithSuspendReason:(long long)reason ;
-(void)setExitURL:(NSString *)l ;
-(id)init;
-(id)description;
-(NSString *)exitType;
@end
