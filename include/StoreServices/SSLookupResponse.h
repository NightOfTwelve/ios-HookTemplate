////#import <libobjc.A.dylib/SSXPCCoding.h>
#import <StoreServices/SSMetricsPageEvent.h>
#import <StoreServices/SSMetricsConfiguration.h>
@interface SSLookupResponse : NSObject
-(void)_setMetricsPageEvent:(id)event ;
-(id)initWithLocationResponseDictionary:(id)dictionary ;
-(void)_enumerateItemsWithBlock:(/*^block*/id)block ;
-(id)appStoreURLWithReason:(long long)reason initialIndex:(long long)index ;
-(void)dealloc;
-(id)valueForProperty:(id)property ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)date ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(SSMetricsPageEvent *)metricsPageEvent;
-(NSDictionary *)responseDictionary;
-(id)initWithResponseDictionary:(id)dictionary ;
-(NSArray *)allItems;
-(SSMetricsConfiguration *)metricsConfiguration;
-(id)itemForKey:(id)key ;
@end
