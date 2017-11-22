//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSVSubscriptionResponse : NSObject
-(void)setSubscriptionStatus:(id)status forAccountUniqueIdentifier:(unsigned long long)identifier ;
-(id)copyWithZone:(NSZone*)zone ;
-(id)subscriptionStatusForAccountUniqueIdentifier:(unsigned long long)identifier ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
@end
