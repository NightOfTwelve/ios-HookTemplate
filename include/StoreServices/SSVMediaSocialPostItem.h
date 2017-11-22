//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCopying.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
@interface SSVMediaSocialPostItem : NSObject
-(BOOL)isEqual:(id)equal ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)identifier;
-(void)setType:(NSString *)type ;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)zone ;
-(void)setIdentifier:(NSString *)identifier ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
@end
