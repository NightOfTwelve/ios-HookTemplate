////#import <libobjc.A.dylib/SSXPCCoding.h>
#import <StoreServices/SSPurchase.h>
#import <StoreServices/SSURLConnectionResponse.h>
@interface SSPurchaseResponse : NSObject
-(id)downloadsMetadata;
-(void)setCancelsPurchaseBatch:(BOOL)batch ;
-(void)setURLResponse:(SSURLConnectionResponse *)response ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(NSArray *)downloadIdentifiers;
-(void)setDownloadIdentifiers:(NSArray *)identifiers ;
-(SSPurchase *)purchase;
-(BOOL)cancelsPurchaseBatch;
-(id)downloadMetadataForItemIdentifier:(long long)identifier ;
-(SSURLConnectionResponse *)URLResponse;
-(id)responseMetrics;
-(double)requestStartTime;
-(double)responseStartTime;
-(double)responseEndTime;
-(void)setRequestStartTime:(double)time ;
-(void)setResponseStartTime:(double)time ;
-(void)setResponseEndTime:(double)time ;
-(id)transactionIdentifierForItemIdentifier:(long long)identifier ;
-(NSError *)error;
-(void)setError:(NSError *)error ;
-(void)setPurchase:(SSPurchase *)purchase ;
@end
