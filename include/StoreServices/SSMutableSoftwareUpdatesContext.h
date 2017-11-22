#import <StoreServices/SSSoftwareUpdatesContext.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
@interface SSMutableSoftwareUpdatesContext : SSSoftwareUpdatesContext
-(void)setClientIdentifierHeader:(NSString *)header ;
-(void)setSoftwareTypes:(NSArray *)types ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(void)setForced:(BOOL)forced ;
@end
