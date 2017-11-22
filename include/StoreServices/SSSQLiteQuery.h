//#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSSQLiteDatabase.h>
#import <StoreServices/SSSQLiteQueryDescriptor.h>
@interface SSSQLiteQuery : NSObject
-(id)copySelectSQLWithProperties:(const id*)properties count:(unsigned long long)count ;
-(void)enumerateMemoryEntitiesWithProperties:(id)properties usingBlock:(/*^block*/id)block ;
-(id)_newSelectSQLWithProperties:(const id*)properties count:(unsigned long long)count ;
-(id)copyEntityIdentifiers;
-(BOOL)createTemporaryTableWithName:(id)name properties:(const id*)properties count:(unsigned long long)count ;
-(void)enumerateMemoryEntitiesUsingBlock:(/*^block*/id)block ;
-(void)dealloc;
-(long long)countOfEntities;
-(SSSQLiteDatabase *)database;
-(void)enumeratePersistentIDsAndProperties:(const id*)properties count:(unsigned long long)count usingBlock:(/*^block*/id)block ;
-(id)initWithDatabase:(id)database descriptor:(id)descriptor ;
-(void)enumeratePersistentIDsUsingBlock:(/*^block*/id)block ;
-(void)bindToSelectStatement:(void* /* sqlite3_stmtRef */)statement bindingIndex:(void** /* inout int* */)index ;
-(BOOL)deleteAllEntities;
-(SSSQLiteQueryDescriptor *)queryDescriptor;
@end
