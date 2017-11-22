//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSWatchMetricsConfiguration : NSObject
-(id)init;
-(void)setEnabled:(BOOL)enabled ;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)zone ;
@end
