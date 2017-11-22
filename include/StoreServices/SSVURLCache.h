//#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSVURLCacheConfiguration.h>
@interface SSVURLCache : NSObject
-(id)cachedConnectionResponseForRequestProperties:(id)properties cachedResponse:(id*)response ;
-(void)storeConnectionResponse:(id)response forRequestProperties:(id)properties userInfo:(id)info ;
-(id)cachedConnectionResponseForRequestProperties:(id)properties ;
-(void)loadMemoryCacheFromDisk;
-(void)saveMemoryCacheToDisk;
-(void)storeConnectionResponse:(id)response forRequestProperties:(id)properties ;
-(id)init;
-(void)dealloc;
-(id)initWithConfiguration:(id)configuration ;
-(id)cachedResponseForRequest:(id)request ;
-(void)storeCachedResponse:(id)response forRequest:(id)request ;
-(void)removeAllCachedResponses;
-(void)configureRequest:(id)request ;
@end
