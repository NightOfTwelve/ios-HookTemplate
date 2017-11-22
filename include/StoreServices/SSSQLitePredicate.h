//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSSQLitePredicate : NSObject
-(BOOL)isEqual:(id)equal ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)zone ;
-(id)SQLForEntityClass:(Class)class ;
-(void)bindToStatement:(void* /* sqlite3_stmtRef */)statement bindingIndex:(void** /* inout int* */)index ;
-(id)SQLJoinClausesForEntityClass:(Class)class ;
@end
