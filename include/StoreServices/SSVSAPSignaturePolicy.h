//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSVSAPSignaturePolicy : NSObject
-(id)initWithSignedActionsDictionary:(id)dictionary ;
-(id)initWithPolicyType:(long long)type signatureComponents:(id)components ;
-(id)dataToSignWithURLResponse:(id)response responseData:(id)data ;
-(long long)policyType;
-(id)dataToSignWithURLRequest:(id)request ;
-(id)_dataToSignWithDataSource:(id)source ;
-(id)dataToSignWithRequestProperties:(id)properties ;
-(NSArray *)signatureComponents;
-(id)copyWithZone:(NSZone*)zone ;
-(id)initWithPolicyType:(long long)type ;
@end
