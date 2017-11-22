#import <StoreServices/SSXPCConnection.h>
@interface SSErrorHandler : NSObject
-(void)_handleMessage:(id)message fromServerConnection:(id)connection ;
-(void)_sendDisconnectMessage;
-(void)_tearDownConnections;
-(void)_reconnectToDaemonWithCompletionBlock:(/*^block*/id)block ;
-(void)_openSessionWithMessage:(id)message ;
-(void)_dispatchToDelegate:(/*^block*/id)delegate ;
-(NSArray *)failureTypes;
-(void)setFailureTypes:(NSArray *)types ;
-(void)stopWithCompletionBlock:(/*^block*/id)block ;
-(id)init;
-(void)setDelegate:(id/* <SSErrorHandlerDelegate> */)delegate ;
-(void)dealloc;
-(id/* <SSErrorHandlerDelegate> */)delegate;
-(void)startWithCompletionBlock:(/*^block*/id)block ;
@end
