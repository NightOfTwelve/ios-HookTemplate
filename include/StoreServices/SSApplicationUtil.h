#import <StoreServices/SSXPCConnection.h>
@interface SSApplicationUtil : NSObject
-(id)init;
-(id)_connection;
-(void)restartApplication:(/*^block*/id)application ;
@end
