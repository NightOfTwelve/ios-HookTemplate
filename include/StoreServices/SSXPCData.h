//#import <StoreServices/StoreServices-Structs.h>
//#import <CoreFoundation/NSData.h>
@interface SSXPCData : NSObject /*NSData*/
-(id)initWithXPCData:(id)data ;
-(id/* <OS_xpc_object> */)xpcData;
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(id)copyWithZone:(NSZone*)zone ;
@end
