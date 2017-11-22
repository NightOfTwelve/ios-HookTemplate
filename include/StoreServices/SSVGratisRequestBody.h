//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSVGratisRequestBody : NSObject
-(NSMutableDictionary *)bodyDictionary;
-(BOOL)isBackgroundRequest;
-(void)setBackgroundRequest:(BOOL)request ;
-(id)initWithRequestStyle:(long long)style ;
-(NSData *)propertyListBodyData;
-(void)setValue:(id)value forBodyParameter:(id)parameter ;
-(long long)requestStyle;
-(id)description;
-(id)copyWithZone:(NSZone*)zone ;
-(NSArray *)bundleIdentifiers;
-(void)setItemIdentifiers:(NSArray *)identifiers ;
-(NSNumber *)accountIdentifier;
-(NSArray *)itemIdentifiers;
-(void)setAccountIdentifier:(NSNumber *)identifier ;
-(void)setBundleIdentifiers:(NSArray *)identifiers ;
-(NSData *)JSONBodyData;
-(NSArray *)applications;
-(void)setApplications:(NSArray *)applications ;
@end
