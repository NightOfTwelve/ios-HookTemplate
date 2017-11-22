//#import <Foundation/NSOperation.h>
#import <StoreServices/SSVPlatformContext.h>
@interface SSVPlatformRequestOperation : NSObject /*NSOperation*/
-(id)_lookupWithRequest:(id)request error:(id*)error ;
-(void)_makeLocalMescalRequest;
-(void)_makeLocalJSSignRequest;
-(void)_makeLookupRequestWithPersonalizationStyle:(long long)style ;
-(id)_callerValue;
-(id)_URLBagContext;
-(void)_enumerateQueryParametersUsingBlock:(/*^block*/id)block ;
-(void)_setCaller:(id)caller ;
-(void)_setUserAgent:(id)agent ;
-(id)init;
-(void)main;
-(void)setValue:(id)value forHTTPHeaderField:(id)field ;
-(void)setTimeoutInterval:(NSNumber *)interval ;
-(NSString *)storeFrontSuffix;
-(NSNumber *)timeoutInterval;
-(long long)personalizationStyle;
-(id)responseBlock;
-(id)valueForRequestParameter:(id)parameter ;
-(void)setValue:(id)value forRequestParameter:(id)parameter ;
-(void)setResponseBlock:(id)block ;
-(void)setStoreFrontSuffix:(NSString *)suffix ;
-(id)initWithPlatformContext:(id)context ;
-(void)setKeyProfile:(NSString *)profile ;
-(void)setItemIdentifiers:(NSArray *)identifiers ;
-(void)setPersonalizationStyle:(long long)style ;
-(NSString *)imageProfile;
-(void)setImageProfile:(NSString *)profile ;
-(NSString *)keyProfile;
-(NSArray *)itemIdentifiers;
-(id)valueForHTTPHeaderField:(id)field ;
@end
