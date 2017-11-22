//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCoding.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSDownloadPolicyRule : NSObject
-(NSSet *)networkTypes;
-(NSSet *)applicationStates;
-(void)addApplicationState:(id)state ;
-(void)setApplicationStates:(NSSet *)states ;
-(long long)cellularDataStates;
-(long long)powerStates;
-(long long)registrationStates;
-(long long)timeLimitStates;
-(NSSet *)userDefaultStates;
-(void)addNetworkType:(long long)type ;
-(BOOL)isCellularAllowed;
-(BOOL)isWiFiAllowed;
-(void)unionPolicyRule:(id)rule ;
-(void)setBatteryLevel:(float)level ;
-(void)setPowerStates:(long long)states ;
-(void)setRegistrationStates:(long long)states ;
-(void)setTimeLimitStates:(long long)states ;
-(void)setUserDefaultStates:(NSSet *)states ;
-(id)init;
-(id)initWithCoder:(id)coder ;
-(void)encodeWithCoder:(id)coder ;
-(void)dealloc;
-(BOOL)isEqual:(id)equal ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)zone ;
-(float)batteryLevel;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(long long)downloadSizeLimit;
-(void)setCellularDataStates:(long long)states ;
-(void)setNetworkTypes:(NSSet *)types ;
-(void)setDownloadSizeLimit:(long long)limit ;
-(void)addUserDefaultState:(id)state ;
@end
