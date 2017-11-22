//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSURLBagContext : NSObject
+(id)contextWithBagType:(long long)type ;
-(BOOL)allowsBootstrapCellularData;
-(void)setAllowsBootstrapCellularData:(BOOL)data ;
-(NSData *)clientAuditTokenData;
-(long long)allowedRetryCount;
-(void)setClientAuditTokenData:(NSData *)data ;
-(long long)bagType;
-(NSDictionary *)allHTTPHeaders;
-(void)setAllHTTPHeaders:(NSDictionary *)headers ;
-(BOOL)allowsExpiredBags;
-(void)setAllowsExpiredBags:(BOOL)bags ;
-(BOOL)ignoresCaches;
-(BOOL)usesCachedBagsOnly;
-(void)setUsesCachedBagsOnly:(BOOL)only ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)equal ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)_init;
-(id)copyWithZone:(NSZone*)zone ;
-(NSString *)cacheKey;
-(void)setValue:(id)value forHTTPHeaderField:(id)field ;
-(void)setUserIdentifier:(NSNumber *)identifier ;
-(NSString *)clientBundleIdentifier;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(void)setBagType:(long long)type ;
-(void)setAllowedRetryCount:(long long)count ;
-(void)setIgnoresCaches:(BOOL)caches ;
-(id)valueForHTTPHeaderField:(id)field ;
-(NSNumber *)userIdentifier;
@end
