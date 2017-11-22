//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCoding.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSNetworkConstraints : NSObject
+(id)_newModernNetworkConstraintsWithArray:(id)array ;
+(id)_newLegacyNetworkConstraintsWithDictionary:(id)dictionary ;
+(void)_addNetworkConstraintsToDictionary:(id)dictionary forNetworkType:(long long)type legacyDictionary:(id)dictionary3 ;
+(id)newNetworkConstraintsByDownloadKindFromURLBag:(id)bag ;
-(void)_setSizeLimit:(long long)limit forNetworkType:(long long)type ;
-(long long)_sizeLimitForNetworkType:(long long)type ;
-(void)_disableAllNetworkTypes;
-(id)_copySizeLimits;
-(void)setAllNetworkTypesDisabled;
-(void)disableCellularNetworkTypes;
-(BOOL)hasSizeLimitForNetworkType:(long long)type ;
-(id)init;
-(id)initWithCoder:(id)coder ;
-(void)encodeWithCoder:(id)coder ;
-(void)dealloc;
-(BOOL)isEqual:(id)equal ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)zone ;
-(void)setSizeLimit:(long long)limit forNetworkType:(long long)type ;
-(long long)sizeLimitForNetworkType:(long long)type ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(void)setSizeLimitsWithStoreConstraintDictionary:(id)dictionary ;
-(BOOL)isAnyNetworkTypeEnabled;
@end
