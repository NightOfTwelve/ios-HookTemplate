//#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSVPlayActivityEvent.h>
#import <StoreServices/SSVPlayActivityEventContainerIDs.h>
#import <StoreServices/SSVPlayActivityEventItemIDs.h>
@interface SSVMutablePlayActivityEvent : SSVPlayActivityEvent
-(void)setStoreAccountID:(unsigned long long)d ;
-(Class)_mutableCopyClass;
-(void)setEndReasonType:(unsigned long long)type ;
-(void)setFeatureName:(NSString *)name ;
-(void)setItemDuration:(double)duration ;
-(void)setItemEndTime:(double)time ;
-(void)setItemStartTime:(double)time ;
-(void)setOffline:(BOOL)offline ;
-(void)setPersistentID:(long long)d ;
-(void)setSBEnabled:(BOOL)enabled ;
-(void)setTimedMetadata:(NSData *)metadata ;
-(void)setTrackInfo:(NSData *)info ;
-(void)setPersonalizedContainerID:(NSString *)d ;
-(void)setReasonHintType:(unsigned long long)type ;
-(void)setEventTimeZone:(NSTimeZone *)zone ;
-(void)setItemIDs:(SSVPlayActivityEventItemIDs *)ds ;
-(id)copyWithZone:(NSZone*)zone ;
-(void)setSourceType:(unsigned long long)type ;
-(void)setVersion:(long long)version ;
-(void)setEventDate:(NSDate *)date ;
-(void)setEventType:(unsigned long long)type ;
-(void)setRequestingBundleIdentifier:(NSString *)identifier ;
-(void)setRequestingBundleVersion:(NSString *)version ;
-(void)setContainerType:(unsigned long long)type ;
-(void)setExternalID:(NSString *)d ;
-(void)setStoreID:(NSString *)d ;
-(void)setItemType:(unsigned long long)type ;
-(void)setMediaType:(unsigned long long)type ;
-(void)setDeviceName:(NSString *)name ;
-(void)setContainerID:(NSString *)d ;
-(void)setRecommendationData:(NSData *)data ;
-(void)setContainerIDs:(SSVPlayActivityEventContainerIDs *)ds ;
-(void)setBuildVersion:(NSString *)version ;
-(void)setStoreFrontID:(NSString *)d ;
@end
