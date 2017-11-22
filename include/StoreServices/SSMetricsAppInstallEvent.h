#import <StoreServices/SSMetricsMutableEvent.h>
@interface SSMetricsAppInstallEvent : SSMetricsMutableEvent
+(unsigned long long)_installStatusForString:(id)string ;
+(unsigned long long)_installTypeForString:(id)string ;
+(id)_stringForInstallStatus:(unsigned long long)status ;
+(id)_stringForInstallType:(unsigned long long)type ;
-(void)setInstallType:(unsigned long long)type ;
-(unsigned long long)installType;
-(BOOL)requiresDiagnosticSendingPermission;
-(NSString *)installError;
-(unsigned long long)installStatus;
-(void)setHardwareType:(NSString *)type ;
-(void)setInstallError:(NSString *)error ;
-(void)setInstallStatus:(unsigned long long)status ;
-(id)init;
-(id)description;
-(NSString *)buildVersion;
-(NSString *)hardwareType;
-(void)setBundleID:(NSString *)d ;
-(NSString *)bundleID;
-(void)setBuildVersion:(NSString *)version ;
@end
