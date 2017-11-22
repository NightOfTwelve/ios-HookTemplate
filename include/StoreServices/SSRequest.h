////#import <libobjc.A.dylib/SSXPCCoding.h>
#import <StoreServices/SSXPCConnection.h>
@interface SSRequest : NSObject
-(void)_shutdownRequest;
-(void)_startWithMessageID:(long long)d messageBlock:(/*^block*/id)block ;
-(id)_initSSRequest;
-(void)_shutdownRequestWithMessageID:(long long)d ;
-(void)__beginBackgroundTask;
-(void)__endBackgroundTask;
-(void)_cancelBackgroundTaskExpirationTimer;
-(void)setUsesTaskCompletionAssertions:(BOOL)assertions ;
-(BOOL)usesTaskCompletionAssertions;
-(void)setShouldCancelAfterTaskExpiration:(BOOL)expiration ;
-(BOOL)shouldCancelAfterTaskExpiration;
-(void)_beginBackgroundTask;
-(void)_expireBackgroundTask;
-(id)init;
-(void)cancel;
-(void)setDelegate:(id/* <SSRequestDelegate> */)delegate ;
-(void)dealloc;
-(id/* <SSRequestDelegate> */)delegate;
-(BOOL)start;
-(void)disconnect;
-(void)_endBackgroundTask;
-(void)startWithCompletionBlock:(/*^block*/id)block ;
@end
