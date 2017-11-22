#import <StoreServices/SSSQLiteDatabase.h>
@interface SSKeyValueStoreSession : NSObject
-(id)copyValueForDomain:(id)domain key:(id)key ;
-(id)copyAccountDictionaryForDomain:(id)domain ;
-(id)iTunesValueForKey:(id)key usedDomain:(id*)domain ;
-(id)copyDataForDomain:(id)domain key:(id)key ;
-(id)existingEntityForDomain:(id)domain key:(id)key ;
-(void)dealloc;
-(SSSQLiteDatabase *)database;
-(id)initWithDatabase:(id)database ;
@end
