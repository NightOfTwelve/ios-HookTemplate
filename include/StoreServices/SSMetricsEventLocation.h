@interface SSMetricsEventLocation : NSObject
-(void)setValue:(id)value forLocationKey:(id)key ;
-(NSDictionary *)reportingDictionary;
-(id)valueForLocationKey:(id)key ;
-(long long)locationPosition;
-(NSString *)locationType;
-(void)setLocationPosition:(long long)position ;
-(void)setLocationType:(NSString *)type ;
@end
