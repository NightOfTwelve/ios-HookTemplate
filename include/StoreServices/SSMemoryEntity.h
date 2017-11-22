//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSMemoryEntity : NSObject
+(id)queryWithDatabase:(id)database predicate:(id)predicate orderingProperties:(id)properties ;
+(Class)databaseEntityClass;
+(id)queryWithDatabase:(id)database predicate:(id)predicate ;
+(id)anyInDatabase:(id)database predicate:(id)predicate ;
+(id)defaultProperties;
-(void)setExternalValuesWithDictionary:(id)dictionary ;
-(void)reloadFromDatabaseEntity:(id)entity properties:(id)properties ;
-(void)setValues:(id*)values forProperties:(const id*)properties count:(long long)count ;
-(void)setValues:(id*)values forExternalProperties:(const id*)properties count:(long long)count ;
-(NSDictionary *)externalPropertyValues;
-(id)initWithDatabaseEntity:(id)entity properties:(id)properties ;
-(void)setValue:(id)value forExternalProperty:(id)property ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)equal ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)zone ;
-(id)valueForProperty:(id)property ;
-(long long)databaseID;
-(void)setDatabaseID:(long long)d ;
-(void)setValue:(id)value forProperty:(id)property ;
-(id)valueForExternalProperty:(id)property ;
-(void)setValuesWithDictionary:(id)dictionary ;
-(NSDictionary *)propertyValues;
@end
