//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSProtocolConditionalContext : NSObject
-(id)itemLookupBlock;
-(NSString *)platformName;
-(void)setPlatformName:(NSString *)name ;
-(void)setSystemVersion:(NSString *)version ;
-(void)dealloc;
-(NSString *)systemVersion;
-(id)copyWithZone:(NSZone*)zone ;
-(void)setItemLookupBlock:(id)block ;
@end
