////#import <libobjc.A.dylib/SSCacheObject.h>
@interface SSPlistCacheObject : NSObject
+(id)cacheObjectTypeIdentifier;
-(id)cacheObjectDataRepresentation;
-(id)cacheObjectTypeIdentifier;
-(id)initWithCacheObjectDataRepresentation:(id)representation ;
-(void)setPlist:(id)plist ;
-(void)dealloc;
-(id)plist;
@end
