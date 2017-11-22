//#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSSQLitePropertyPredicate.h>
////#import <libobjc.A.dylib/NSCopying.h>
#import <StoreServices/SSSQLiteQuery.h>
@interface SSSQLiteContainsPredicate : SSSQLitePropertyPredicate
+(id)containsPredicateWithProperty:(id)property values:(id)values ;
+(id)doesNotContainPredicateWithProperty:(id)property values:(id)values ;
+(id)containsPredicateWithProperty:(id)property query:(id)query queryProperty:(id)property3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)equal ;
-(SSSQLiteQuery *)query;
-(id)copyWithZone:(NSZone*)zone ;
-(NSArray *)values;
-(id)SQLForEntityClass:(Class)class ;
-(void)bindToStatement:(void* /* sqlite3_stmtRef */)statement bindingIndex:(void** /* inout int* */)index ;
-(BOOL)isNegative;
-(NSString *)queryProperty;
@end
