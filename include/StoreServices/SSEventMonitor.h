#import <StoreServices/SSXPCConnection.h>
@interface SSEventMonitor : NSObject
-(void)_handleMessage:(id)message fromServerConnection:(id)connection ;
-(void)_connectEventConnection;
-(id)init;
-(void)setDelegate:(id/* <SSEventMonitorDelegate> */)delegate ;
-(void)dealloc;
-(id/* <SSEventMonitorDelegate> */)delegate;
@end
