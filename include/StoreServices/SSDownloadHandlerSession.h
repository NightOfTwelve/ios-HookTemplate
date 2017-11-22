#import <StoreServices/SSDownloadSession.h>
@interface SSDownloadHandlerSession : SSDownloadSession
-(id)_initWithMessage:(id)message controlConnection:(id)connection ;
-(void)_finishWithType:(int)type error:(id)error ;
-(void)_setBool:(BOOL)value forSessionProperty:(const char*)property ;
-(BOOL)blocksOtherDownloads;
-(BOOL)canBePaused;
-(void)disavowSessionWithError:(id)error ;
-(BOOL)needsPowerAssertion;
-(void)setBlocksOtherDownloads:(BOOL)downloads ;
-(void)setNeedsPowerAssertion:(BOOL)assertion ;
-(NSNumber *)duetTimeoutInterval;
-(void)dealloc;
-(void)setPercentComplete:(float)complete ;
-(void)releaseSessionControl;
-(void)setCanBePaused:(BOOL)paused ;
-(void)setStatusDescription:(id)description ;
-(void)finishSessionWithSuccess:(BOOL)success error:(id)error ;
-(NSString *)downloadPhase;
@end
