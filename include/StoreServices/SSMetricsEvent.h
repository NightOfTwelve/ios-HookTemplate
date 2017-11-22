@interface SSMetricsEvent : NSObject
+(id)_globalCanaryLock;
+(id)globalEventCanary;
+(void)setGlobalEventCanary:(id)canary ;
-(BOOL)isFieldBlacklistEnabled;
-(BOOL)isBlacklistedByConfiguration:(id)configuration ;
-(id)allTableEntityPropertiesPermittedByConfiguration:(id)configuration externalValues:(id)values ;
-(id)decorateReportingURL:(id)l ;
-(BOOL)requiresDiagnosticSendingPermission;
-(id)_dictionaryRepresentationOfBody;
-(id)allTableEntityPropertiesPermittedByConfiguration:(id)configuration ;
-(id)millisecondsFromTimeInterval:(double)interval ;
-(double)timeIntervalFromMilliseconds:(id)milliseconds ;
-(void)appendPropertiesToBody:(id)body ;
@end
