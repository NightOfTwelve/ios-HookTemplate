//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
////#import <libobjc.A.dylib/NSCopying.h>
#import <StoreServices/SSDownloadPhase.h>
@interface SSDownloadStatus : NSObject
-(void)setPausable:(BOOL)pausable ;
-(BOOL)isPausable;
-(void)setContentRestricted:(BOOL)restricted ;
-(void)setOperationProgress:(id)progress ;
-(void)setOperationType:(long long)type ;
-(BOOL)isFailedTransient;
-(SSDownloadPhase *)activePhase;
-(void)dealloc;
-(float)percentComplete;
-(id)copyWithZone:(NSZone*)zone ;
-(void)setPaused:(BOOL)paused ;
-(void)setPercentComplete:(float)complete ;
-(BOOL)isPaused;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(BOOL)isContentRestricted;
-(NSError *)error;
-(void)setError:(NSError *)error ;
-(void)setFailed:(BOOL)failed ;
-(BOOL)isFailed;
@end
