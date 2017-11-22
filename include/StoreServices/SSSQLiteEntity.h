////#import <libobjc.A.dylib/SSSQLiteEntity.h>
#import <StoreServices/SSSQLiteDatabase.h>
@protocol SSSQLiteEntity
+(id)databasePropertyToSetClientProperty:(id)property ;
+(id)databaseValueForProperty:(id)property clientValue:(id)value ;
+(id)joinClauseForProperty:(id)property ;
+(id)databasePropertyToGetClientProperty:(id)property ;
+(id)foreignDatabaseTablesToDelete;
+(id)foreignKeyColumnForTable:(id)table ;
+(id)foreignDatabaseTableForProperty:(id)property ;
+(id)foreignDatabaseColumnForProperty:(id)property ;
+(id)copyDatabaseDictionaryToSetClientDictionary:(id)dictionary ;
+(id)databaseTable;
+(id)disambiguatedSQLForProperty:(id)property ;
-(id)copyValuesForClientProperties:(id)properties ;
-(id)copyXPCEncodedValuesForClientProperties:(id)properties ;
-(id)valueForProperty:(id)property ;
-(void)getValues:(id*)values forProperties:(const id*)properties count:(unsigned long long)count ;
-(BOOL)setValue:(id)value forProperty:(id)property ;
-(BOOL)setValuesWithDictionary:(id)dictionary ;
-(BOOL)deleteFromDatabase;
@end
@interface SSSQLiteEntity : NSObject
+(BOOL)_insertValues:(id)values intoTable:(id)table withPersistentID:(long long)d database:(id)database ;
+(id)databasePropertyToSetClientProperty:(id)property ;
+(id)databaseValueForProperty:(id)property clientValue:(id)value ;
+(id)joinClauseForProperty:(id)property ;
+(id)databasePropertyToGetClientProperty:(id)property ;
+(id)foreignDatabaseTablesToDelete;
+(id)foreignKeyColumnForTable:(id)table ;
+(id)foreignDatabaseTableForProperty:(id)property ;
+(id)foreignDatabaseColumnForProperty:(id)property ;
+(id)copyDatabaseDictionaryToSetClientDictionary:(id)dictionary ;
+(Class)memoryEntityClass;
+(id)_aggregateValueForProperty:(id)property function:(id)function predicate:(id)predicate database:(id)database ;
+(id)queryWithDatabase:(id)database predicate:(id)predicate orderingProperties:(id)properties ;
+(id)countForProperty:(id)property predicate:(id)predicate database:(id)database ;
+(id)minValueForProperty:(id)property predicate:(id)predicate database:(id)database ;
+(id)queryWithDatabase:(id)database predicate:(id)predicate ;
+(id)anyInDatabase:(id)database predicate:(id)predicate ;
+(id)maxValueForProperty:(id)property predicate:(id)predicate database:(id)database ;
+(id)databaseTable;
+(id)disambiguatedSQLForProperty:(id)property ;
-(id)_copyTableClusteredValuesWithValues:(id)values ;
-(BOOL)_deleteRowFromTable:(id)table usingColumn:(id)column ;
-(id)copyValuesForClientProperties:(id)properties ;
-(id)copyXPCEncodedValuesForClientProperties:(id)properties ;
-(BOOL)existsInDatabase;
-(id)valueForProperty:(id)property ;
-(void)getValues:(id*)values forProperties:(const id*)properties count:(unsigned long long)count ;
-(BOOL)setValue:(id)value forProperty:(id)property ;
-(SSSQLiteDatabase *)database;
-(id)initWithPropertyValues:(id)values inDatabase:(id)database ;
-(id)initWithPersistentID:(long long)d inDatabase:(id)database ;
-(BOOL)setValuesWithDictionary:(id)dictionary ;
-(BOOL)deleteFromDatabase;
-(long long)persistentID;
@end
