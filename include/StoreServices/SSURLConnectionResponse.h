////#import <libobjc.A.dylib/SSXPCCoding.h>
#import <StoreServices/SSMetricsPageEvent.h>
@interface SSURLConnectionResponse : NSObject
-(id)initWithURLResponse:(id)response bodyData:(id)data ;
-(void)setMetricsPageEvent:(SSMetricsPageEvent *)event ;
-(BOOL)ssv_isExpiredResponse;
-(id)initWithDatabaseEncoding:(id)encoding ;
-(NSData *)databaseEncoding;
-(NSString *)suggestedFilename;
-(NSString *)storeCorrelationID;
-(void)dealloc;
-(NSURL *)URL;
-(NSString *)MIMEType;
-(long long)statusCode;
-(id)allHeaderFields;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(NSString *)textEncodingName;
-(NSData *)bodyData;
-(SSMetricsPageEvent *)metricsPageEvent;
-(NSHTTPURLResponse *)URLResponse;
-(long long)expectedContentLength;
@end
