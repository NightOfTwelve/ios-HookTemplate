#import <StoreServices/SSMetricsBaseEvent.h>
@interface SSMetricsClickEvent : SSMetricsBaseEvent
-(NSString *)targetType;
-(NSString *)targetIdentifier;
-(NSNumber *)positionX;
-(NSNumber *)positionY;
-(id)actionDetails;
-(NSString *)locationDescription;
-(void)setLocationDescription:(NSString *)description ;
-(NSString *)targetURL;
-(id)init;
-(id)description;
-(void)setActionType:(NSString *)type ;
-(void)setTargetIdentifier:(NSString *)identifier ;
-(void)setTargetURL:(NSString *)l ;
-(void)setLocationWithEventLocations:(id)locations ;
-(void)setImpressions:(id)impressions ;
-(void)setTargetType:(NSString *)type ;
-(void)setActionDetails:(id)details ;
-(void)setPositionX:(NSNumber *)x ;
-(void)setPositionY:(NSNumber *)y ;
-(NSString *)actionType;
-(id)impressions;
@end
