@interface SSPersistentCache : NSObject
+(id)safeKeyForKey:(id)key ;
-(id)initWithIdentifier:(id)identifier cacheName:(id)name ;
-(BOOL)_isFileNotFound:(id)found ;
-(void)setFilenameSafeKeys:(BOOL)keys ;
-(void)dealloc;
-(id)description;
-(BOOL)clear;
-(id)_pathForKey:(id)key ;
-(id)dataForKey:(id)key ;
-(BOOL)setData:(id)data forKey:(id)key ;
-(BOOL)removeDataForKey:(id)key ;
@end
