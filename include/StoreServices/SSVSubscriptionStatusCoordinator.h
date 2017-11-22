#import <StoreServices/SSVSubscriptionStatusRequest.h>
#import <StoreServices/SSVSubscriptionStatus.h>
@interface SSVSubscriptionStatusCoordinator : NSObject
+(id)_existingSharedCoordinator;
+(id)sharedCoordinator;
-(void)_externalChangeNotification;
-(void)_validateLastKnownStatus;
-(void)_deviceStoreFrontChangedNotification;
-(id)_copyValidStatusForStatus:(id)status ;
-(id)_copyStatusDateFromUserDefaults;
-(id)_copyStatusFromUserDefaults;
-(void)_handleRequestResponseWithStatus:(id)status isFinal:(BOOL)final error:(id)error ;
-(void)_fireStatusBlocksWithStatus:(id)status isFinal:(BOOL)final error:(id)error ;
-(void)_invalidateLastKnownStatus;
-(id)init;
-(void)dealloc;
-(void)reset;
-(SSVSubscriptionStatus *)lastKnownStatus;
-(void)modifyLastKnownStatusUsingBlock:(/*^block*/id)block ;
-(void)getStatusWithOptions:(id)options statusBlock:(/*^block*/id)block ;
@end
