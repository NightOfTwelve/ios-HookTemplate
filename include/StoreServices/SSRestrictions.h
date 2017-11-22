@interface SSRestrictions : NSObject
+(BOOL)_isExplicitContentDisallowedInCurrentStoreFront;
+(BOOL)_calculateIsRestrictionsPasscodeSet;
+(BOOL)_isExplicitContentRestrictedByDefaultInCurrentStoreFront;
+(void)isExplicitContentRestrictedByDefaultInCurrentStoreFront:(/*^block*/id)front ;
+(void)isExplicitContentDisallowedInCurrentStoreFront:(/*^block*/id)front ;
+(void)isRestrictionsPasscodeSet:(/*^block*/id)set ;
+(void)setAllowExplicitContent;
+(void)shouldDisplayExplicitRestrictionAlertOfType:(long long)type completionBlock:(/*^block*/id)block ;
+(void)didDisplayExplicitRestrictionAlertOfType:(long long)type ;
+(BOOL)isActiveAccountAllowedToUpdateRestrictions;
+(id)setOfActiveRestrictionUUIDs;
@end
