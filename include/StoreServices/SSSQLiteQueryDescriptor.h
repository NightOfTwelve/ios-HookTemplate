//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCopying.h>
#import <StoreServices/SSSQLitePredicate.h>
@interface SSSQLiteQueryDescriptor : NSObject
-(Class)memoryEntityClass;
-(id)_newSelectSQLWithProperties:(const id*)properties count:(unsigned long long)count columns:(id)columns ;
-(void)setMemoryEntityClass:(Class)class ;
-(NSString *)orderingClause;
-(void)setOrderingClause:(NSString *)clause ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone ;
-(void)setPredicate:(SSSQLitePredicate *)predicate ;
-(SSSQLitePredicate *)predicate;
-(void)setEntityClass:(Class)class ;
-(void)setOrderingDirections:(NSArray *)directions ;
-(void)setOrderingProperties:(NSArray *)properties ;
-(Class)entityClass;
-(void)setLimitCount:(long long)count ;
-(long long)limitCount;
-(NSArray *)orderingDirections;
-(NSArray *)orderingProperties;
-(BOOL)returnsDistinctEntities;
-(void)setReturnsDistinctEntities:(BOOL)entities ;
@end
