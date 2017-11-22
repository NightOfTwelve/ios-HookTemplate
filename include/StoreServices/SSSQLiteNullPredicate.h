//#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSSQLitePropertyPredicate.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSSQLiteNullPredicate : SSSQLitePropertyPredicate
+(id)isNullPredicateWithProperty:(id)property ;
+(id)isNotNullPredicateWithProperty:(id)property ;
-(BOOL)isEqual:(id)equal ;
-(id)copyWithZone:(NSZone*)zone ;
-(id)SQLForEntityClass:(Class)class ;
-(BOOL)matchesNull;
@end
