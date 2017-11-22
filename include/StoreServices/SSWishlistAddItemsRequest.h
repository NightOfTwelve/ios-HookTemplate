#import <StoreServices/SSRequest.h>
@interface SSWishlistAddItemsRequest : SSRequest
-(id)_convertedValueForValue:(id)value ;
-(id)copyQueryStringParameters;
-(id)initWithItems:(id)items caller:(id)caller version:(id)version ;
-(void)startWithAddItemsResponseBlock:(/*^block*/id)block ;
-(id)init;
-(NSArray *)items;
-(NSString *)version;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(NSString *)caller;
@end
