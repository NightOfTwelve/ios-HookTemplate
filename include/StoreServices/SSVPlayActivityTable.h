#import <StoreServices/SSSQLiteDatabase.h>
@interface SSVPlayActivityTable : NSObject
+(BOOL)_setupDatabase:(id)database ;
+(id)_eventsDatabaseTableName;
+(id)_propertiesDatabaseTableName;
+(id)databasePath;
-(unsigned long long)currentEventsRevision;
-(NSString *)eventsRevisionVersionToken;
-(BOOL)getPlayActivityEvents:(id*)events relevantRevisionsIndexSet:(id*)set withStartRevision:(unsigned long long)revision endRevision:(unsigned long long)revision4 additionalRevisionsIndexSet:(id)set5 ignoredRevisionsIndexSet:(id)set6 error:(id*)error ;
-(BOOL)insertPlayActivityEvent:(id)event withRevision:(unsigned long long)revision returningError:(id*)error ;
-(void)setCurrentEventsRevision:(unsigned long long)revision ;
-(BOOL)removePlayActivityEventsUpToRevision:(unsigned long long)revision returningError:(id*)error ;
-(BOOL)getPlayActivityEvents:(id*)events relevantRevisionsIndexSet:(id*)set withStartRevision:(unsigned long long)revision endRevision:(unsigned long long)revision4 storeAccountID:(unsigned long long)d additionalRevisionsIndexSet:(id)set6 ignoredRevisionsIndexSet:(id)set7 error:(id*)error ;
-(id)revisionsIndexSetForPlayActivityEvents:(id)events ;
-(id)revisionsIndexSetForPlayActivityEventPersistentIDs:(id)ds ;
-(BOOL)_removeDatabaseReturningError:(id*)error ;
-(id)_valueForDatabasePropertyKey:(id)key ;
-(BOOL)_setValue:(id)value forDatabasePropertyKey:(id)key ;
-(BOOL)_getPlayActivityEvents:(id*)events relevantRevisionsIndexSet:(id*)set withStartRevision:(unsigned long long)revision endRevision:(unsigned long long)revision4 storeAccountID:(unsigned long long)d shouldFilterStoreAccountID:(BOOL)d6 additionalRevisionsIndexSet:(id)set7 ignoredRevisionsIndexSet:(id)set8 error:(id*)error ;
-(id)_revisionsIndexSetUsingPersisentIDGenerationBlock:(/*^block*/id)block count:(unsigned long long)count ;
-(id)init;
-(void)performTransactionWithBlock:(/*^block*/id)block ;
@end
