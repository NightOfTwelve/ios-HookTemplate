#import <StoreServices/SSXPCConnection.h>
@interface SSBiometrics : NSObject
-(void)_sendMessage:(id)message withCompletionBlock:(/*^block*/id)block ;
-(void)setEnabled:(BOOL)enabled withAuthToken:(id)token completionBlock:(/*^block*/id)block ;
-(void)getStateWithCompletionBlock:(/*^block*/id)block ;
-(void)renewPurchaseTokenWithAuthToken:(id)token completionBlock:(/*^block*/id)block ;
-(void)resetWithCompletionBlock:(/*^block*/id)block ;
-(void)setEnabled:(BOOL)enabled withCompletionBlock:(/*^block*/id)block ;
-(void)setAllowed:(BOOL)allowed completionBlock:(/*^block*/id)block ;
-(void)getIdentityMapCountWithCompletionBlock:(/*^block*/id)block ;
-(void)isIdentityMapValidForAccountIdentifier:(id)identifier completionBlock:(/*^block*/id)block ;
-(void)saveIdentityMapForAccountIdentifier:(id)identifier completionBlock:(/*^block*/id)block ;
-(id)init;
@end
