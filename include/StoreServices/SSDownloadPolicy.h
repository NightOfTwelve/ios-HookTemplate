//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCoding.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSDownloadPolicy : NSObject
-(id)initWithNetworkConstraints:(id)constraints ;
-(NSString *)downloadKind;
-(void)unionPolicyRule:(id)rule ;
-(void)unionNetworkConstraints:(id)constraints ;
-(id)_policyRuleForSizeLimit:(long long)limit ;
-(void)setPolicyRule:(id)rule ;
-(id)initWithCoder:(id)coder ;
-(void)encodeWithCoder:(id)coder ;
-(void)dealloc;
-(BOOL)isEqual:(id)equal ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)zone ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(id)initWithDownloadKind:(id)kind URLBagType:(long long)type ;
-(NSArray *)policyRules;
-(void)setPolicyRules:(NSArray *)rules ;
-(long long)URLBagType;
@end
