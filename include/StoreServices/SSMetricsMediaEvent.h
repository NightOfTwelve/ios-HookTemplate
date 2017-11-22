#import <StoreServices/SSMetricsBaseEvent.h>
@interface SSMetricsMediaEvent : SSMetricsBaseEvent
-(NSString *)locationDescription;
-(void)setLocationDescription:(NSString *)description ;
-(NSString *)mediaEventType;
-(id)init;
-(NSNumber *)itemIdentifier;
-(void)setItemIdentifier:(NSNumber *)identifier ;
-(void)setLocationWithEventLocations:(id)locations ;
-(void)setMediaEventType:(NSString *)type ;
-(void)setMediaURL:(NSString *)l ;
-(NSString *)mediaURL;
@end
