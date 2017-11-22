#import <StoreServices/SSRequest.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
#import <StoreServices/SSAuthenticationContext.h>
#import <StoreServices/SSLookupProperties.h>
@interface SSLookupRequest : SSRequest
-(SSLookupProperties *)_lookupProperties;
-(void)_setTimeoutInterval:(id)interval ;
-(long long)resultFilters;
-(void)setResultFilters:(long long)filters ;
-(id)init;
-(void)dealloc;
-(BOOL)start;
-(id)initWithLocation:(id)location ;
-(long long)personalizationStyle;
-(void)startWithCompletionBlock:(/*^block*/id)block ;
-(void)setLocalizationStyle:(long long)style ;
-(id)valueForRequestParameter:(id)parameter ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(SSAuthenticationContext *)authenticationContext;
-(long long)localizationStyle;
-(BOOL)authenticatesIfNeeded;
-(void)setAuthenticatesIfNeeded:(BOOL)needed ;
-(void)setValue:(id)value forRequestParameter:(id)parameter ;
-(void)setKeyProfile:(NSString *)profile ;
-(void)setPersonalizationStyle:(long long)style ;
-(void)setAuthenticationContext:(SSAuthenticationContext *)context ;
-(NSString *)keyProfile;
-(void)startWithLookupBlock:(/*^block*/id)block ;
@end
