@interface SSXPCConnection : NSObject
-(void)sendMessage:(id)message withReply:(/*^block*/id)reply ;
-(void)setDisconnectBlock:(id)block ;
-(void)setMessageBlock:(id)block ;
-(id)messageBlock;
-(id)createXPCEndpoint;
-(id)disconnectBlock;
-(void)sendSynchronousMessage:(id)message withReply:(/*^block*/id)reply ;
-(id)_initSSXPCConnection;
-(void)_reloadEventHandler;
-(id)copyReplyQueue;
-(void)setReplyQueue:(id)queue ;
-(id)init;
-(void)dealloc;
-(id)initWithServiceName:(id)name ;
-(id)initWithXPCConnection:(id)connection ;
-(void)sendMessage:(id)message ;
@end
