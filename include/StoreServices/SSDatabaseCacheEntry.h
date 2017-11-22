#import <StoreServices/SSSQLiteEntity.h>
#import <StoreServices/SSPersistentCache.h>
@interface SSDatabaseCacheEntry : SSSQLiteEntity
+(id)allPropertyKeys;
+(unsigned long long)_fetchPersistentID:(id)d inDatabase:(id)database ;
+(id)databaseTable;
-(id)initWithLookupKey:(id)key inDatabase:(id)database ;
-(void)setPersistentCache:(id)cache ;
-(id)dataBlob:(BOOL*)blob ;
-(void)dealloc;
-(id)description;
@end
