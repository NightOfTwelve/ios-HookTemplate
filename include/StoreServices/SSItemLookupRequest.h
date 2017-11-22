#import <StoreServices/SSRequest.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
@interface SSItemLookupRequest : SSRequest
-(id)_convertedValueForValue:(id)value ;
-(id)_errorForStatusCode:(long long)code ;
-(id)_copyItemsFromResponse:(id)response expirationDate:(id)date ;
-(id)valueForParameter:(id)parameter ;
-(id)copyQueryStringParameters;
-(id)init;
-(void)dealloc;
-(BOOL)start;
-(NSDictionary *)parameters;
-(void)startWithCompletionBlock:(/*^block*/id)block ;
-(void)setValue:(id)value forParameter:(id)parameter ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(void)startWithItemLookupBlock:(/*^block*/id)block ;
@end
