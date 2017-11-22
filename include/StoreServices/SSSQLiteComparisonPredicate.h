//#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSSQLitePropertyPredicate.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSSQLiteComparisonPredicate : SSSQLitePropertyPredicate
+(id)predicateWithProperty:(id)property equalToValue:(id)value ;
+(id)predicateWithProperty:(id)property equalToLongLong:(long long)value ;
+(id)predicateWithProperty:(id)property value:(id)value comparisonType:(long long)type ;
-(void)dealloc;
-(BOOL)isEqual:(id)equal ;
-(unsigned long long)hash;
-(id)value;
-(id)copyWithZone:(NSZone*)zone ;
-(long long)comparisonType;
-(id)SQLForEntityClass:(Class)class ;
-(void)bindToStatement:(void* /* sqlite3_stmtRef */)statement bindingIndex:(void** /* inout int* */)index ;
-(id)_comparisonTypeString;
@end
