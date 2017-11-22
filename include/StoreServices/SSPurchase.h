//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
////#import <libobjc.A.dylib/NSCoding.h>
////#import <libobjc.A.dylib/NSCopying.h>
#import <StoreServices/SSDownloadPolicy.h>
#import <StoreServices/SSItem.h>
#import <StoreServices/SSItemOffer.h>
#import <StoreServices/SSNetworkConstraints.h>
#import <StoreServices/SSURLRequestProperties.h>
@interface SSPurchase : NSObject
+(id)purchaseWithBuyParameters:(id)parameters ;
+(id)newPurchaseWithDatabaseEncoding:(id)encoding ;
+(id)newPurchaseWithXPCEncoding:(id)encoding ;
-(SSNetworkConstraints *)networkConstraints;
-(id)requiredDeviceCapabilities;
-(void)setPlaybackRequest:(BOOL)request ;
-(BOOL)createsDownloads;
-(BOOL)isPlaybackRequest;
-(id)_initSSPurchase;
-(void)_setValuesUsingDatabaseEncoding:(id)encoding ;
-(void)_addEntriesToDatabaseEncoding:(id)encoding ;
-(BOOL)displaysOnLockScreen;
-(NSArray *)filteredAssetTypes;
-(BOOL)ignoresForcedPasswordRestriction;
-(BOOL)isBackgroundPurchase;
-(void)setFilteredAssetTypes:(NSArray *)types ;
-(id)initWithDatabaseEncoding:(id)encoding ;
-(long long)batchIdentifier;
-(NSData *)databaseEncoding;
-(id)buyParametersValueForKey:(id)key ;
-(NSNumber *)enabledServiceType;
-(long long)expectedDownloadFileSize;
-(NSArray *)gratisIdentifiers;
-(BOOL)isGratisSoftwareClaim;
-(BOOL)isPreauthenticated;
-(void)setBatchIdentifier:(long long)identifier ;
-(void)setDefaultUserAgent:(id)agent ;
-(void)setPlaceholderDownloadIdentifier:(long long)identifier ;
-(void)setPreauthenticated:(BOOL)preauthenticated ;
-(BOOL)usesLocalRedownloadParametersIfPossible;
-(id)downloadMetadata;
-(void)setDownloadMetadata:(id)metadata ;
-(id)init;
-(id)initWithCoder:(id)coder ;
-(void)encodeWithCoder:(id)coder ;
-(void)dealloc;
-(BOOL)isEqual:(id)equal ;
-(unsigned long long)hash;
-(id)item;
-(id)copyWithZone:(NSZone*)zone ;
-(long long)uniqueIdentifier;
-(void)setUniqueIdentifier:(long long)identifier ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(long long)placeholderDownloadIdentifier;
-(void)setIgnoresForcedPasswordRestriction:(BOOL)restriction ;
-(SSDownloadPolicy *)downloadPolicy;
-(void)setDownloadPolicy:(SSDownloadPolicy *)policy ;
-(void)setBackgroundPurchase:(BOOL)purchase ;
-(void)setDisplaysOnLockScreen:(BOOL)screen ;
-(void)setNetworkConstraints:(SSNetworkConstraints *)constraints ;
-(id)initWithItem:(id)item offer:(id)offer ;
-(NSDictionary *)downloadProperties;
-(void)setDownloadProperties:(NSDictionary *)properties ;
-(NSString *)buyParameters;
-(void)setBuyParameters:(NSString *)parameters ;
-(void)setAffiliateIdentifier:(NSString *)identifier ;
-(SSURLRequestProperties *)requestProperties;
-(void)setRequestProperties:(SSURLRequestProperties *)properties ;
-(NSString *)affiliateIdentifier;
-(id)valueForDownloadProperty:(id)property ;
-(void)setExpectedDownloadFileSize:(long long)size ;
-(void)setRequiredDeviceCapabilities:(id)capabilities ;
-(void)setUsesLocalRedownloadParametersIfPossible:(BOOL)possible ;
-(void)setValue:(id)value forDownloadProperty:(id)property ;
-(void)setEnabledServiceType:(NSNumber *)type ;
-(void)setCreatesDownloads:(BOOL)downloads ;
-(void)setCreatesJobs:(BOOL)jobs ;
-(void)setGratisIdentifiers:(NSArray *)identifiers ;
-(BOOL)createsJobs;
-(id)itemOffer;
-(id)initWithItem:(id)item ;
-(NSNumber *)accountIdentifier;
-(void)setAccountIdentifier:(NSNumber *)identifier ;
@end
