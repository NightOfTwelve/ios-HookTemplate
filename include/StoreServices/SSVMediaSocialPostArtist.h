//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCopying.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
@interface SSVMediaSocialPostArtist : NSObject
-(void)setName:(NSString *)name ;
-(NSString *)name;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)zone ;
-(void)setIdentifier:(NSString *)identifier ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
@end
