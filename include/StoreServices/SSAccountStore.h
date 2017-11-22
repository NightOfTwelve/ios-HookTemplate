#import <StoreServices/SSKeyValueStore.h>
#import <StoreServices/SSAccount.h>
@interface SSAccountStore : NSObject
+(BOOL)isExpiredForTokenType:(long long)type ;
+(void)resetExpirationForTokenType:(long long)type ;
+(double)tokenExpirationInterval;
+(void)setDefaultStore:(id)store ;
+(void)resetExpiration;
+(id)existingDefaultStore;
+(id)defaultStore;
+(BOOL)isExpired;
-(id)_keyValueStore;
-(BOOL)isExpiredForTokenType:(long long)type ;
-(void)resetExpirationForTokenType:(long long)type ;
-(void)signOutAllAccountsWithCompletionBlock:(/*^block*/id)block ;
-(id)accountWithUniqueIdentifier:(id)identifier scope:(long long)scope ;
-(id)accountWithUniqueIdentifier:(id)identifier reloadIfNecessary:(BOOL)necessary ;
-(void)getDefaultAccountNameUsingBlock:(/*^block*/id)block ;
-(BOOL)isAuthenticationActive;
-(void)setAccountCredits:(id)credits forAccountWithUniqueIdentifier:(id)identifier ;
-(void)setDefaultAccountName:(id)name completionBlock:(/*^block*/id)block ;
-(id)_accountsFromDaemon;
-(void)_dispatchAsync:(/*^block*/id)async ;
-(void)_dispatchSync:(/*^block*/id)sync ;
-(void)_postAccountStoreChangeNotification;
-(id)init;
-(void)dealloc;
-(SSAccount *)activeLockerAccount;
-(void)signOutAllAccounts;
-(id)accountWithUniqueIdentifier:(id)identifier ;
-(id)setActiveAccount:(SSAccount *)account ;
-(id)setActiveLockerAccount:(SSAccount *)account ;
-(void)resetExpiration;
-(SSAccount *)activeAccount;
-(id)addAccount:(id)account ;
-(void)signOutAccount:(id)account ;
-(void)reloadAccounts;
-(BOOL)isExpired;
-(NSArray *)accounts;
@end
