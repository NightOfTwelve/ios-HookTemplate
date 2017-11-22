//#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSSQLitePredicate.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSSQLitePropertyPredicate : SSSQLitePredicate
-(void)dealloc;
-(BOOL)isEqual:(id)equal ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)zone ;
-(NSString *)property;
-(id)SQLJoinClausesForEntityClass:(Class)class ;
@end
