#import <StoreServices/SSPersistentCache.h>
#import <StoreServices/SSSQLiteDatabase.h>
@interface SSDatabaseCache : NSObject
-(BOOL)_setupDatabase;
-(id)initWithIdentifier:(id)identifier cacheName:(id)name ;
-(id)initWithIdentifier:(id)identifier cacheName:(id)name database:(id)database cacheEntryClass:(Class)class ;
-(id)cacheEntryForLookupKey:(id)key ;
-(unsigned long long)maximumInlineBlobSize;
-(void)clearCacheForLookupKey:(id)key ;
-(int)clearRetiredData;
-(id)setData:(id)data expiring:(double)expiring retiring:(double)retiring lookupKey:(id)key userInfo:(id)info ;
-(id)cacheEntryProperties:(id)properties forLookupKeys:(id)keys ;
-(void)setMaximumInlineBlobSize:(unsigned long long)size ;
-(void)dealloc;
-(id)description;
-(void)clear;
-(id)statistics;
@end
