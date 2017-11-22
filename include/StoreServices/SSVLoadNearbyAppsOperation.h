//#import <Foundation/NSOperation.h>
@interface SSVLoadNearbyAppsOperation : NSObject /*NSOperation*/
-(id)_storeFrontSuffix;
-(id)_lookupWithRequest:(id)request error:(id*)error ;
-(id)initWithBaseURL:(id)l location:(id)location ;
-(NSString *)pointOfInterestIdentifier;
-(NSString *)pointOfInterestProviderIdentifier;
-(NSString *)pointOfInterestProviderURL;
-(void)setPointOfInterestIdentifier:(NSString *)identifier ;
-(void)setPointOfInterestProviderIdentifier:(NSString *)identifier ;
-(void)setPointOfInterestProviderURL:(NSString *)l ;
-(id /*CLLocation **/)location;
-(void)main;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)agent ;
-(NSString *)storeFrontSuffix;
-(id)responseBlock;
-(void)setResponseBlock:(id)block ;
-(void)setStoreFrontSuffix:(NSString *)suffix ;
@end
