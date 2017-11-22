////#import <libobjc.A.dylib/SSXPCCoding.h>
////#import <libobjc.A.dylib/NSSecureCoding.h>
@interface SSVMediaContentTasteUpdateResponse : NSObject
+(BOOL)supportsSecureCoding;
-(unsigned long long)responseRevisionID;
-(NSArray *)contentTasteItems;
-(void)setCachedResponse:(BOOL)response ;
-(void)setContentTasteItems:(NSArray *)items ;
-(void)setResponseRevisionID:(unsigned long long)d ;
-(id)initWithCoder:(id)coder ;
-(void)encodeWithCoder:(id)coder ;
-(NSString *)description;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)date ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(BOOL)isCachedResponse;
@end
