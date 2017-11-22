@interface SSVAppleAccountStore : NSObject
+(id)sharedAccountStore;
-(id)init;
-(id /*ACAccount **/)primaryAppleAccount;
-(void)_accountStoreDidChangeNotification:(id)notification ;
@end
