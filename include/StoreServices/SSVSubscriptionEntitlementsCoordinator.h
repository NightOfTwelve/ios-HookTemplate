#import <StoreServices/SSVSubscriptionEntitlements.h>
#import <StoreServices/SSXPCConnection.h>
@interface SSVSubscriptionEntitlementsCoordinator : NSObject
+(id)sharedCoordinator;
-(id)_cachedSubscriptionEntitlements;
-(id)_loadSubscriptionEntitlementsIgnoreCaches:(BOOL)caches error:(id*)error ;
-(void)_setCachedSubscriptionEntitlements:(id)entitlements ;
-(void)getSubscriptionEntitlements:(/*^block*/id)entitlements ;
-(id)init;
-(void)dealloc;
-(id)_connection;
-(void)getSubscriptionEntitlementsIgnoreCaches:(BOOL)caches entitlementsBlock:(/*^block*/id)block ;
@end
