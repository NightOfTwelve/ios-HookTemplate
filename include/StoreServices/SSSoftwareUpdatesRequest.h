#import <StoreServices/SSRequest.h>
#import <StoreServices/SSSoftwareUpdatesContext.h>
@interface SSSoftwareUpdatesRequest : SSRequest
-(void)startWithUpdatesResponseBlock:(/*^block*/id)block ;
-(id)initWithUpdateQueueContext:(id)context ;
-(SSSoftwareUpdatesContext *)updateQueueContext;
-(void)dealloc;
-(BOOL)start;
-(void)startWithCompletionBlock:(/*^block*/id)block ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
@end
