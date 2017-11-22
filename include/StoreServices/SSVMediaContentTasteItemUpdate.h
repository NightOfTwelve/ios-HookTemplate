////#import <libobjc.A.dylib/SSXPCCoding.h>
////#import <libobjc.A.dylib/NSSecureCoding.h>
#import <StoreServices/SSVMediaContentTasteItem.h>
@interface SSVMediaContentTasteItemUpdate : NSObject
+(BOOL)supportsSecureCoding;
-(NSDate *)updateDate;
-(void)setUpdateDate:(NSDate *)date ;
-(id)initWithCoder:(id)coder ;
-(void)encodeWithCoder:(id)coder ;
-(SSVMediaContentTasteItem *)item;
-(void)setItem:(SSVMediaContentTasteItem *)item ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
@end
