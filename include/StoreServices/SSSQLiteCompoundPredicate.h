//#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSSQLitePredicate.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSSQLiteCompoundPredicate : SSSQLitePredicate
+(id)predicateMatchingAllPredicates:(id)predicates ;
+(id)predicateMatchingAnyPredicates:(id)predicates ;
+(id)predicateWithProperty:(id)property values:(id)values comparisonType:(long long)type ;
-(void)dealloc;
-(BOOL)isEqual:(id)equal ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)zone ;
-(id)SQLForEntityClass:(Class)class ;
-(void)bindToStatement:(void* /* sqlite3_stmtRef */)statement bindingIndex:(void** /* inout int* */)index ;
-(id)SQLJoinClausesForEntityClass:(Class)class ;
-(NSArray *)predicates;
@end
