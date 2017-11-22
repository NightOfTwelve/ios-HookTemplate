#import <StoreServices/SSUpdatesDatabaseSession.h>
@interface SSUpdatesDatabaseTransaction : SSUpdatesDatabaseSession
-(BOOL)deleteUpdatesInstalledBefore:(double)before ;
-(id)_newUpdateEntityPropertiesWithUpdate:(id)update ;
-(BOOL)mergeAvailableUpdates:(id)updates availableCount:(long long*)count ;
@end
