#import <StoreServices/SSXPCConnection.h>
#import <StoreServices/SSURLBagContext.h>
@interface SSURLBag : NSObject
+(id)URLBagForContext:(id)context ;
+(void)setURLBag:(id)bag forContext:(id)context ;
-(void)_loadWithCompletionBlock:(/*^block*/id)block ;
-(void)_drainPendingLookupsWithError:(id)error ;
-(void)_loadURLBag;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id)_connection;
-(void)loadWithCompletionBlock:(/*^block*/id)block ;
-(id)valueForKey:(id)key error:(id*)error ;
-(void)loadValueForKey:(id)key completionBlock:(/*^block*/id)block ;
-(void)dispatchSync:(/*^block*/id)sync ;
-(void)dispatchAsync:(/*^block*/id)async ;
-(id)existingBagDictionary;
-(void)getTrustForURL:(id)l completionBlock:(/*^block*/id)block ;
-(SSURLBagContext *)URLBagContext;
-(id)initWithURLBagContext:(id)context ;
@end
