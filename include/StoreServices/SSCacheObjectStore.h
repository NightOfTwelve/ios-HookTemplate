#import <StoreServices/SSDatabaseCache.h>
@interface SSCacheObjectStore : NSObject
-(id)_factoryForTypeIdentifier:(id)identifier ;
-(void)clearSession;
-(BOOL)addObject:(id)object withItemIdentifier:(id)identifier ;
-(BOOL)removeObjectWithItemIdentifier:(id)identifier ;
-(id)cacheObjectWithItemIdentifier:(id)identifier ;
-(void)addCacheObjectFactory:(id)factory ;
-(void)removeCacheObjectFactory:(id)factory ;
-(void)dealloc;
-(id)description;
-(id)initWithSessionIdentifier:(id)identifier ;
@end
