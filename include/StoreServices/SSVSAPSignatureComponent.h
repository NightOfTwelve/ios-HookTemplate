//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSVSAPSignatureComponent : NSObject
-(id)initWithComponentType:(long long)type key:(id)key ;
-(id)dataToSignWithURLResponse:(id)response responseData:(id)data ;
-(id)dataToSignWithURLRequest:(id)request ;
-(id)_dataToSignWithDataSource:(id)source ;
-(id)dataToSignWithRequestProperties:(id)properties ;
-(NSString *)key;
-(id)copyWithZone:(NSZone*)zone ;
-(long long)componentType;
@end
