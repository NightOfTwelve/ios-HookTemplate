//#import <StoreServices/StoreServices-Structs.h>
//#import <CoreFoundation/NSOutputStream.h>
@interface SSGzipOutputStream : NSObject /*NSOutputStream*/
-(id)initToMemory;
-(id)initToFileAtPath:(id)path append:(BOOL)append ;
-(long long)_consumeStreamOutput:(BOOL)output ;
-(void)_setStreamError:(int)error context:(id)context ;
-(unsigned long long)streamContentLength;
-(id)init;
-(void)dealloc;
-(void)close;
-(id)propertyForKey:(id)key ;
-(BOOL)setProperty:(id)property forKey:(id)key ;
-(void)open;
-(unsigned long long)streamStatus;
-(id)streamError;
-(BOOL)hasSpaceAvailable;
-(long long)write:(const char*)write maxLength:(unsigned long long)length ;
@end
