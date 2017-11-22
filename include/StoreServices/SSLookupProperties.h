//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCopying.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
@interface SSLookupProperties : NSObject
-(id)copyRequestParameters;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone ;
-(id /*CLLocation **/)location;
-(void)setLocation:(id /*CLLocation **/)location ;
-(void)setTimeoutInterval:(NSNumber *)interval ;
-(NSNumber *)timeoutInterval;
-(void)setLocalizationStyle:(long long)style ;
-(id)valueForRequestParameter:(id)parameter ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(long long)localizationStyle;
-(void)setValue:(id)value forRequestParameter:(id)parameter ;
-(void)setKeyProfile:(NSString *)profile ;
-(NSString *)keyProfile;
@end
