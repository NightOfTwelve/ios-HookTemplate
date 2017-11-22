//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSVPlatformContext : NSObject
-(NSString *)lookupURLString;
-(id/* <SSVSAPContext> */)SAPContext;
-(void)setSAPContext:(id/* <SSVSAPContext> */)context ;
-(NSArray *)signedHeaders;
-(NSArray *)signedQueryParameters;
-(NSString *)unpersonalizedLookupURLString;
-(id)copyWithZone:(NSZone*)zone ;
-(NSDictionary *)bagDictionary;
-(id)initWithBagDictionary:(id)dictionary ;
@end
