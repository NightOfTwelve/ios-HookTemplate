#import <StoreServices/SSXPCConnection.h>
#import <StoreServices/SSUpdatesDatabase.h>
@interface SSSoftwareUpdatesStore : NSObject
+(id)databasePath;
-(id)_copyUpdates;
-(id)_copyUpdatesWithSession:(id)session predicate:(id)predicate ;
-(void)_readUsingSessionBlock:(/*^block*/id)block ;
-(BOOL)_migrateReadOnlyDatabase;
-(void)clearExpiredUpdateHistoryWithCompletionBlock:(/*^block*/id)block ;
-(void)hideApplicationBadgeForPendingUpdates;
-(void)removeUpdateBulletins;
-(void)showApplicationBadgeForPendingUpdates;
-(void)updateItemWithIdentifer:(long long)identifer downloadPhase:(id)phase properties:(id)properties callback:(/*^block*/id)callback ;
-(id)updateWithItemIdentifier:(long long)identifier ;
-(id)init;
-(void)dealloc;
-(void)getUpdatesWithCompletionBlock:(/*^block*/id)block ;
-(void)reloadFromServerWithCompletionBlock:(/*^block*/id)block ;
@end
