//#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSXPCConnection.h>
@interface SSPreorderManager : NSObject
+(id)bookStoreItemKinds;
+(id)musicStoreItemKinds;
-(NSArray *)preorders;
-(void)_connectAsObserver;
-(void)_handleMessage:(id)message fromServerConnection:(id)connection ;
-(void)_sendMessageToObservers:(SEL)observers ;
-(void)_registerAsObserver;
-(void)cancelPreorders:(id)preorders withCompletionBlock:(/*^block*/id)block ;
-(NSArray *)itemKinds;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)observer ;
-(void)removeObserver:(id)observer ;
-(id)initWithItemKinds:(id)kinds ;
-(void)reloadFromServer;
@end
