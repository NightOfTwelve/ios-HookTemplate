#import <StoreServices/SSMetricsBaseEvent.h>
@interface SSMetricsSearchEvent : SSMetricsBaseEvent
-(NSString *)targetType;
-(NSString *)targetIdentifier;
-(id)actionDetails;
-(NSString *)targetURL;
-(id)init;
-(void)setActionType:(NSString *)type ;
-(void)setTargetIdentifier:(NSString *)identifier ;
-(void)setTargetURL:(NSString *)l ;
-(void)setLocationWithEventLocations:(id)locations ;
-(void)setTargetType:(NSString *)type ;
-(void)setActionDetails:(id)details ;
-(void)setSearchTerm:(NSString *)term ;
-(NSString *)searchTerm;
-(NSString *)actionType;
@end
