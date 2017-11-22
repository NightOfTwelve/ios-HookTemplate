//#import <StoreServices/StoreServices-Structs.h>
@interface SSVSubscriptionEntitlementsSubscription : NSObject
-(NSString *)chargeCountryCode;
-(void)setChargeCountryCode:(NSString *)code ;
-(NSString *)chargeCurrencyCode;
-(void)setChargeCurrencyCode:(NSString *)code ;
-(NSNumber *)chargeStoreFrontIdentifier;
-(void)setChargeStoreFrontIdentifier:(NSNumber *)identifier ;
-(NSDate *)expireDate;
-(void)setExpireDate:(NSDate *)date ;
-(NSNumber *)familyId;
-(void)setFamilyId:(NSNumber *)id ;
-(void)setInAppAdamId:(NSNumber *)id ;
-(NSString *)inAppVersion;
-(void)setInAppVersion:(NSString *)version ;
-(void)setNewsAppPurchase:(BOOL)purchase ;
-(void)setOfferIdentifier:(NSString *)identifier ;
-(NSNumber *)originalPurchaseDownloadId;
-(void)setOriginalPurchaseDownloadId:(NSNumber *)id ;
-(NSNumber *)purchasabilityType;
-(void)setPurchasabilityType:(NSNumber *)type ;
-(NSNumber *)purchaseDownloadId;
-(void)setPurchaseDownloadId:(NSNumber *)id ;
-(void)setQuantity:(NSNumber *)quantity ;
-(id)copyWithZone:(NSZone*)zone ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(NSString *)offerIdentifier;
-(NSString *)vendorIdentifier;
-(NSNumber *)quantity;
-(BOOL)isNewsAppPurchase;
-(void)setVendorIdentifier:(NSString *)identifier ;
-(NSNumber *)inAppAdamId;
-(void)setAppAdamId:(NSNumber *)id ;
-(NSNumber *)appAdamId;
-(void)setAppVersion:(NSNumber *)version ;
-(NSNumber *)appVersion;
@end