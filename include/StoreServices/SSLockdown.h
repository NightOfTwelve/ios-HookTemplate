//#import <StoreServices/StoreServices-Structs.h>
@interface SSLockdown : NSObject
+(id)sharedInstance;
-(CFStringRef)copyDeviceGUID;
@end
