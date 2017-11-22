#import <StoreServices/SSVPlaybackLeaseResponse.h>
@interface SSVPlaybackLeaseCallback : NSObject
-(SSVPlaybackLeaseResponse *)response;
-(void)setResponse:(SSVPlaybackLeaseResponse *)response ;
-(NSError *)error;
-(void)setError:(NSError *)error ;
-(void)setBlock:(id)block ;
-(id)block;
@end
