//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSVPlaybackResponse : NSObject
-(id)initWithDictionary:(id)dictionary URLResponse:(id)response ;
-(NSArray *)items;
-(id)copyWithZone:(NSZone*)zone ;
-(void)_enumerateItemsUsingBlock:(/*^block*/id)block ;
-(NSDictionary *)responseDictionary;
-(NSHTTPURLResponse *)URLResponse;
-(id)itemForItemIdentifier:(id)identifier ;
@end
