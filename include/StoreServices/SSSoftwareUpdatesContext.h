//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
////#import <libobjc.A.dylib/NSCopying.h>
////#import <libobjc.A.dylib/NSMutableCopying.h>
@interface SSSoftwareUpdatesContext : NSObject
-(NSString *)clientIdentifierHeader;
-(NSArray *)softwareTypes;
-(BOOL)isForced;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone ;
-(id)mutableCopyWithZone:(NSZone*)zone ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
@end
