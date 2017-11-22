#import <StoreServices/SSXPCConnection.h>
@interface SSVDirectUploadQueue : NSObject
-(void)_establishInboundConnection;
-(void)_sendSimpleMessage:(id)message completionBlock:(/*^block*/id)block ;
-(id)_outboundConnection;
-(void)_handleInboundMessage:(id)message connection:(id)connection ;
-(void)_sendObserversUploadsDidChange;
-(void)_handleAddUploadsMessage:(id)message ;
-(void)_handleChangeUploadsMessage:(id)message ;
-(void)_handleRemoveUploadsMessage:(id)message ;
-(void)cancelAllUploadsWithCompletionBlock:(/*^block*/id)block ;
-(void)cancelUploads:(id)uploads completionBlock:(/*^block*/id)block ;
-(void)getUploadsWithCompletionBlock:(/*^block*/id)block ;
-(void)pauseAllUploadsWithCompletionBlock:(/*^block*/id)block ;
-(void)pauseUploads:(id)uploads completionBlock:(/*^block*/id)block ;
-(void)resumeAllUploadsWithCompletionBlock:(/*^block*/id)block ;
-(void)resumeUploads:(id)uploads completionBlock:(/*^block*/id)block ;
-(NSArray *)uploadKinds;
-(id)init;
-(void)dealloc;
-(void)removeUploadObserver:(id)observer ;
-(id)initWithUploadKinds:(id)kinds ;
-(void)addUploadObserver:(id)observer ;
@end
