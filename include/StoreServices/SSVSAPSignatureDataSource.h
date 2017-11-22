#import <StoreServices/SSURLRequestProperties.h>
@interface SSVSAPSignatureDataSource : NSObject
-(id)initWithURLResponse:(id)response bodyData:(id)data ;
-(id)valueForHTTPHeader:(id)header ;
-(id)initWithURLRequest:(id)request ;
-(id)valueForQueryParameter:(id)parameter ;
-(id)initWithURLRequestProperties:(id)properties ;
-(NSData *)HTTPBody;
-(NSString *)HTTPMethod;
@end
