//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSPlayInfoResponse : NSObject
-(id)initWithPlayInfoData:(id)data error:(id)error ;
-(NSData *)playInfoData;
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)zone ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(NSError *)error;
@end
