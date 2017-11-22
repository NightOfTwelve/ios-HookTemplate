#import <StoreServices/SSMetricsBaseEvent.h>
@interface SSMetricsEnterEvent : SSMetricsBaseEvent
-(void)setReferringAppName:(NSString *)name ;
-(void)setReferringURL:(NSString *)l ;
-(NSString *)referringAppName;
-(NSString *)referringURL;
-(void)setEnterType:(NSString *)type ;
-(NSString *)enterType;
-(void)setEnterTypeWithLaunchReason:(long long)reason ;
-(id)init;
-(id)description;
@end
