//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCoding.h>
////#import <libobjc.A.dylib/NSCopying.h>
////#import <libobjc.A.dylib/NSMutableCopying.h>
////#import <libobjc.A.dylib/NSSecureCoding.h>
@interface SSVPlayActivityEventItemIDs : NSObject
+(BOOL)supportsSecureCoding;
-(long long)radioAdamID;
-(long long)subscriptionAdamID;
-(long long)purchasedAdamID;
-(unsigned long long)cloudID;
-(id)initWithCoder:(id)coder ;
-(void)encodeWithCoder:(id)coder ;
-(id)description;
-(id)copyWithZone:(NSZone*)zone ;
-(id)mutableCopyWithZone:(NSZone*)zone ;
-(long long)equivalencySourceAdamID;
-(id)_copyWithClass:(Class)class ;
-(NSString *)lyricsID;
@end
