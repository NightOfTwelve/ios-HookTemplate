//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSVGratisApplication : NSObject
-(NSNumber *)externalVersionIdentifier;
-(void)setExternalVersionIdentifier:(NSNumber *)identifier ;
-(NSString *)bundleIdentifier;
-(id)copyWithZone:(NSZone*)zone ;
-(NSDictionary *)dictionaryRepresentation;
-(void)setBundleIdentifier:(NSString *)identifier ;
-(NSString *)bundleVersion;
-(void)setBundleVersion:(NSString *)version ;
-(NSString *)itemIdentifier;
-(void)setItemIdentifier:(NSString *)identifier ;
@end
