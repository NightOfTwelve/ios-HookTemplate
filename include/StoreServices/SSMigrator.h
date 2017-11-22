#import <StoreServices/SSXPCConnection.h>
@interface SSMigrator : NSObject
-(void)performMigration:(unsigned long long)migration completionBlock:(/*^block*/id)block ;
-(id)init;
@end
