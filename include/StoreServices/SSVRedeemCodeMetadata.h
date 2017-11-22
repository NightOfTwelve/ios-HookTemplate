//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSVRedeemCodeMetadata : NSObject
-(NSString *)codeType;
-(NSDictionary *)redeemCodeDictionary;
-(NSString *)code;
-(NSArray *)items;
-(id)copyWithZone:(NSZone*)zone ;
-(NSString *)inputCode;
-(id)initWithRedeemCodeDictionary:(id)dictionary ;
-(void)setInputCode:(NSString *)code ;
@end
