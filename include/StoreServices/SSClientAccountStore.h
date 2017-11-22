#import <StoreServices/SSAccountStore.h>
@interface SSClientAccountStore : SSAccountStore
-(void)signOutAllAccountsWithCompletionBlock:(/*^block*/id)block ;
-(id)accountWithUniqueIdentifier:(id)identifier scope:(long long)scope ;
-(id)accountWithUniqueIdentifier:(id)identifier reloadIfNecessary:(BOOL)necessary ;
-(void)setAccountCredits:(id)credits forAccountWithUniqueIdentifier:(id)identifier ;
-(id)_accountsFromDaemon;
-(void)_reloadAccountsIfNeeded;
-(id)_addAccount:(id)account asActiveAccount:(BOOL)account2 activeLockerAccount:(BOOL)account3 ;
-(id)_accountWithUniqueIdentifier:(id)identifier ;
-(void)_invalidateAccounts;
-(void)updateAccountsWithMessage:(id)message completionBlock:(/*^block*/id)block ;
-(void)_signOutWithAccountIDs:(id)ds completionBlock:(/*^block*/id)block ;
-(id)_copyDaemonAccounts;
-(id)_copyReloadedAccounts;
-(id)init;
-(void)dealloc;
-(id)activeLockerAccount;
-(void)signOutAllAccounts;
-(id)accountWithUniqueIdentifier:(id)identifier ;
-(id)setActiveAccount:(id)account ;
-(id)setActiveLockerAccount:(id)account ;
-(id)activeAccount;
-(id)addAccount:(id)account ;
-(void)signOutAccount:(id)account ;
-(void)reloadAccounts;
-(void)setAccounts:(NSArray *)accounts ;
-(NSArray *)accounts;
@end
