@interface SSLookupItemArtwork : NSObject
-(id)URLWithHeight:(long long)height width:(long long)width format:(id)format ;
-(void)dealloc;
-(NSURL *)URL;
-(long long)width;
-(long long)height;
-(id)URLWithHeight:(long long)height width:(long long)width cropStyle:(id)style format:(id)format ;
-(BOOL)getRed:(double*)red green:(double*)green blue:(double*)blue alpha:(double*)alpha forColorKind:(id)kind ;
-(id)initWithLookupDictionary:(id)dictionary ;
-(NSDictionary *)lookupDictionary;
-(id)URLWithHeight:(long long)height width:(long long)width ;
@end
