//#import <StoreServices/StoreServices-Structs.h>
@interface SSVSubscriptionEntitlements : NSObject
+(id)_valueForKey:(id)key fromDictionary:(id)dictionary ofType:(Class)type ;
+(id)_parseJSONDictionary:(id)dictionary ;
-(void)setAccountISO3Country:(NSString *)country ;
-(void)setAccountStoreFrontIdentifier:(NSNumber *)identifier ;
-(void)setCachedTimestamp:(NSDate *)timestamp ;
-(void)setEntitledSubscriptions:(NSArray *)subscriptions ;
-(NSNumber *)accountStoreFrontIdentifier;
-(NSString *)accountISO3Country;
-(NSDate *)cachedTimestamp;
-(id)copyWithZone:(NSZone*)zone ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(NSNumber *)accountIdentifier;
-(void)setAccountIdentifier:(NSNumber *)identifier ;
-(NSArray *)entitledSubscriptions;
@end
