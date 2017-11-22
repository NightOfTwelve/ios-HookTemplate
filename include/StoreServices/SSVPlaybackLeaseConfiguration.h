//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSVPlaybackLeaseConfiguration : NSObject
-(long long)leaseType;
-(NSURL *)beginLeaseURL;
-(NSURL *)refreshLeaseURL;
-(id)initWithURLBagDictionary:(id)dictionary leaseType:(long long)type ;
-(void)setBeginLeaseURL:(NSURL *)l ;
-(void)setProvisionMachineURL:(NSURL *)l ;
-(void)setRefreshLeaseURL:(NSURL *)l ;
-(void)setSyncMachineURL:(NSURL *)l ;
-(NSURL *)provisionMachineURL;
-(NSURL *)syncMachineURL;
-(id)copyWithZone:(NSZone*)zone ;
-(NSString *)storeFrontSuffix;
-(NSURL *)certificateURL;
-(void)setCertificateURL:(NSURL *)l ;
-(id)initWithURLBagDictionary:(id)dictionary ;
-(void)setStoreFrontSuffix:(NSString *)suffix ;
-(void)setGetAssetURL:(NSURL *)l ;
-(NSURL *)getAssetURL;
@end
