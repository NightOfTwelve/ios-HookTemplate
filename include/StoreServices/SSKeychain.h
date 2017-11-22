#import <StoreServices/SSXPCConnection.h>
@interface SSKeychain : NSObject
-(void)_sendMessage:(id)message completionBlock:(/*^block*/id)block ;
-(void)createAttestationDataForAccountIdentifier:(id)identifier completionBlock:(/*^block*/id)block ;
-(void)getPublicKeyDataForAccountIdentifier:(id)identifier completionBlock:(/*^block*/id)block ;
-(void)signData:(id)data withPrompt:(id)prompt forAccountIdentifier:(id)identifier completionBlock:(/*^block*/id)block ;
-(id)init;
@end
