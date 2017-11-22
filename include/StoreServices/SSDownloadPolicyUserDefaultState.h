//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSSecureCoding.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSDownloadPolicyUserDefaultState : NSObject
+(BOOL)supportsSecureCoding;
-(BOOL)currentBoolValue;
-(NSNumber *)fallbackNumberValue;
-(BOOL)shouldInvertBoolValue;
-(id)initWithCoder:(id)coder ;
-(void)encodeWithCoder:(id)coder ;
-(BOOL)isEqual:(id)equal ;
-(unsigned long long)hash;
-(NSString *)key;
-(NSString *)domain;
-(id)copyWithZone:(NSZone*)zone ;
-(void)setKey:(NSString *)key ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(void)setFallbackNumberValue:(NSNumber *)value ;
-(void)setShouldInvertBoolValue:(BOOL)value ;
-(void)setDomain:(NSString *)domain ;
@end
