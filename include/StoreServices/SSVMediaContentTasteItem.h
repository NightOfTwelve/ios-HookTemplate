//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
////#import <libobjc.A.dylib/NSCopying.h>
////#import <libobjc.A.dylib/NSMutableCopying.h>
////#import <libobjc.A.dylib/NSSecureCoding.h>
@interface SSVMediaContentTasteItem : NSObject
+(BOOL)supportsSecureCoding;
-(id)_copyWithMediaContentTasteItemClass:(Class)class ;
-(id)initWithCoder:(id)coder ;
-(void)encodeWithCoder:(id)coder ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)zone ;
-(id)mutableCopyWithZone:(NSZone*)zone ;
-(long long)storeAdamID;
-(unsigned long long)tasteType;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(NSString *)playlistGlobalID;
-(unsigned long long)contentType;
@end
