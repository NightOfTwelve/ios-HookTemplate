//#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSMetricsEvent.h>
////#import <libobjc.A.dylib/NSMutableCopying.h>
@interface SSMetricsMutableEvent : SSMetricsEvent
-(void)setEventVersion:(NSNumber *)version ;
-(id)initWithBodyDictionary:(id)dictionary ;
-(NSDictionary *)bodyDictionary;
-(id)decorateReportingURL:(id)l ;
-(NSNumber *)eventVersion;
-(NSNumber *)previousClientVersion;
-(void)setPreviousClientVersion:(NSNumber *)version ;
-(NSString *)canaryIdentifier;
-(void)setCanaryIdentifier:(NSString *)identifier ;
-(id)init;
-(void)dealloc;
-(id)debugDescription;
-(void)setApplicationIdentifier:(NSString *)identifier ;
-(NSString *)applicationIdentifier;
-(id)mutableCopyWithZone:(NSZone*)zone ;
-(NSString *)eventType;
-(NSString *)connection;
-(void)setConnection:(NSString *)connection ;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)agent ;
-(void)setEventType:(NSString *)type ;
-(void)setOriginalTimeUsingDate:(id)date ;
-(NSString *)hostApplicationIdentifier;
-(void)setTopic:(NSString *)topic ;
-(void)setProperty:(id)property forBodyKey:(id)key ;
-(id)propertyForBodyKey:(id)key ;
-(void)addPropertiesWithDictionary:(id)dictionary ;
-(void)appendPropertiesToBody:(id)body ;
-(NSNumber *)accountIdentifier;
-(double)originalTime;
-(void)setOriginalTime:(double)time ;
-(void)setAccountIdentifier:(NSNumber *)identifier ;
-(void)setHostApplicationIdentifier:(NSString *)identifier ;
-(NSString *)topic;
-(void)setBaseVersion:(NSNumber *)version ;
-(NSNumber *)baseVersion;
-(NSNumber *)clientVersion;
-(void)setClientVersion:(NSNumber *)version ;
@end
