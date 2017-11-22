#import <StoreServices/SSRequest.h>
@interface SSVDownloadQueueRequest : SSRequest
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(long long)queueType;
-(id)initWithQueueType:(long long)type ;
-(void)startWithResponseBlock:(/*^block*/id)block ;
@end
