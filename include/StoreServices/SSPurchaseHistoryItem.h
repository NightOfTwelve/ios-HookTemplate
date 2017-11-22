//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSPurchaseHistoryItem : NSObject
-(void)dealloc;
-(BOOL)isEqual:(id)equal ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)zone ;
-(id)valueForProperty:(id)property ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(void)setValue:(id)value forProperty:(id)property ;
@end
