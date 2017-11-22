#import <StoreServices/SSSQLiteDatabase.h>
@interface SSAppPurchaseHistoryDatabase : NSObject
+(void)_createDatabaseDirectory;
+(BOOL)_setupDatabase:(id)database ;
+(id)accountUniqueIdentifierKey;
+(id)newDefaultInstance;
-(id)initWithDatabaseURL:(id)l readOnly:(BOOL)only ;
-(void)readUsingTransactionBlock:(/*^block*/id)block ;
-(BOOL)removeValueForDatabaseProperty:(id)property ;
-(void)modifyUsingAppPurchaseHistoryTransactionBlock:(/*^block*/id)block ;
-(id)currentAccountUniqueIdentifier;
-(BOOL)setCurrentAccountUniqueIdentifier:(id)identifier ;
-(long long)localRevisionForAccountUniqueIdentifier:(id)identifier ;
-(BOOL)setLocalRevision:(long long)revision forAccountUniqueIdentifier:(id)identifier ;
-(BOOL)resetCacheForNewAccountID:(id)d ;
-(id)allProperties:(id)properties accountID:(id)d includingHidden:(BOOL)hidden ;
-(id)init;
-(void)dealloc;
-(BOOL)setValue:(id)value forDatabaseProperty:(id)property ;
-(id)valueForDatabaseProperty:(id)property ;
-(id)database;
-(void)readAsyncUsingTransactionBlock:(/*^block*/id)block ;
@end
