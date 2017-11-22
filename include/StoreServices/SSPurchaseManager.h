#import <StoreServices/SSXPCConnection.h>
@interface SSPurchaseManager : NSObject
-(id)_requestConnection;
-(id)_responseConnection;
-(void)_connectToDaemon;
-(void)_sendMessage:(long long)message withPurchases:(id)purchases afterPurchase:(id)purchase completionBlock:(/*^block*/id)block ;
-(void)_sendMessage:(long long)message withPurchaseIdentifiers:(id)identifiers afterPurchase:(id)purchase completionBlock:(/*^block*/id)block ;
-(void)_sendCompletionBlock:(/*^block*/id)block forGetPurchasesReply:(id)reply ;
-(BOOL)_shouldInvalidateSubscriptionStatusForPurchaseResponse:(id)response ;
-(void)_handleMessage:(id)message fromConnection:(id)connection ;
-(BOOL)_resultForReply:(id)reply error:(id*)error ;
-(id)_newEncodedArrayWithPurchaseIdentifiers:(id)identifiers ;
-(void)_sendCompletionBlock:(/*^block*/id)block forStandardReply:(id)reply ;
-(id)_newEncodedArrayWithPurchases:(id)purchases ;
-(void)insertPurchases:(id)purchases afterPurchase:(id)purchase withCompletionBlock:(/*^block*/id)block ;
-(NSString *)managerIdentifier;
-(void)_reconnectForDaemonLaunch;
-(id)init;
-(void)setDelegate:(id/* <SSPurchaseManagerDelegate> */)delegate ;
-(void)dealloc;
-(id/* <SSPurchaseManagerDelegate> */)delegate;
-(id)initWithManagerIdentifier:(id)identifier ;
-(void)getPurchasesUsingBlock:(/*^block*/id)block ;
-(void)addPurchases:(id)purchases withCompletionBlock:(/*^block*/id)block ;
-(void)cancelPurchases:(id)purchases withCompletionBlock:(/*^block*/id)block ;
-(void)movePurchases:(id)purchases afterPurchase:(id)purchase withCompletionBlock:(/*^block*/id)block ;
@end
