#import <StoreServices/SSMetricsMutableEvent.h>
@interface SSMetricsBaseEvent : SSMetricsMutableEvent
-(BOOL)isBlacklistedByConfiguration:(id)configuration ;
-(NSString *)pageDescription;
-(NSNumber *)pixelRatio;
-(void)setPixelRatio:(NSNumber *)ratio ;
-(void)setScreenHeight:(NSNumber *)height ;
-(void)setScreenWidth:(NSNumber *)width ;
-(void)setWindowHeight:(NSNumber *)height ;
-(void)setWindowWidth:(NSNumber *)width ;
-(NSNumber *)windowHeight;
-(NSNumber *)windowWidth;
-(id)init;
-(id)description;
-(void)setPageURL:(NSString *)l ;
-(NSString *)pageURL;
-(void)setPageID:(unsigned long long)d ;
-(unsigned long long)pageID;
-(NSNumber *)screenHeight;
-(NSNumber *)screenWidth;
-(void)setPageType:(NSString *)type ;
-(NSString *)pageType;
-(void)setWindowOrientation:(NSString *)orientation ;
-(void)setPageContext:(NSString *)context ;
-(void)setPageDescription:(NSString *)description ;
-(NSString *)pageContext;
-(NSString *)windowOrientation;
@end
