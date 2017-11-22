////#import <libobjc.A.dylib/SSCacheObjectFactory.h>
@interface SSPlistCacheObjectFactory : NSObject
-(BOOL)supportsTypeIdentifier:(id)identifier ;
-(id)cachedObjectWithDataRepresentation:(id)representation typeIdentifier:(id)identifier ;
@end
