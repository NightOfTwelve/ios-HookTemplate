//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
////#import <libobjc.A.dylib/NSCopying.h>
#import <StoreServices/SSOperationProgress.h>
@interface SSDownloadPhase : NSObject
-(SSOperationProgress *)operationProgress;
-(id)initWithOperationProgress:(id)progress ;
-(long long)phaseType;
-(long long)progressUnits;
-(float)progressChangeRate;
-(long long)progressValue;
-(long long)totalProgressValue;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(double)estimatedSecondsRemaining;
@end
