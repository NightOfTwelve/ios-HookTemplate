@interface SSMetricsConfiguration : NSObject
+(id)_reportingFrequencyOverride;
+(void)setReportingFrequencyOverride:(id)override ;
+(void)getReportingFrequencyOverrideWithCompletionBlock:(/*^block*/id)block ;
-(void)_setReportingFrequencyOverride:(id)override ;
-(id)_initSSMetricsEventConfiguration;
-(BOOL)_configBooleanForKey:(id)key defaultValue:(BOOL)value ;
-(SSMetricsConfiguration *)childConfiguration;
-(id)blacklistedEventFields;
-(NSDictionary *)fieldsMap;
-(id)cookieFields;
-(id)eventFields;
-(BOOL)isSendDisabled;
-(id)reportingURLString;
-(void)setChildConfiguration:(SSMetricsConfiguration *)configuration ;
-(BOOL)disableEventDecoration;
-(void)dealloc;
-(BOOL)_decorateITMLEvents;
-(void)setDisableEventDecoration:(BOOL)decoration ;
-(id)valueForConfigurationKey:(id)key ;
-(id)pingURLs;
-(id)initWithStorePlatformData:(id)data ;
-(BOOL)isDisabled;
-(id)initWithGlobalConfiguration:(id)configuration ;
-(double)reportingFrequency;
-(BOOL)isEventTypeBlacklisted:(id)blacklisted ;
-(id)compoundStringWithElements:(id)elements ;
-(id)tokenStringWithElements:(id)elements ;
@end
