#import <StoreServices/SSXPCConnection.h>
@interface SSDownloadMonitor : NSObject
-(id)_copyItemsWithReply:(id)reply error:(id*)error ;
-(void)getMonitorItemsWithCompletionBlock:(/*^block*/id)block ;
-(void)pauseMonitorItem:(id)item completionBlock:(/*^block*/id)block ;
-(void)prioritizeMonitorItem:(id)item completionBlock:(/*^block*/id)block ;
-(void)resumeMonitorItem:(id)item completionBlock:(/*^block*/id)block ;
-(void)_reloadForChangeNotification;
-(id)init;
-(void)setDelegate:(id/* <SSDownloadMonitorDelegate> */)delegate ;
-(void)dealloc;
-(id/* <SSDownloadMonitorDelegate> */)delegate;
-(id)_connection;
@end
