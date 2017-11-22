#import <StoreServices/SSVComplexOperation.h>
#import <StoreServices/SSURLRequestProperties.h>
@interface SSVLoadDownloadQueueOperation : SSVComplexOperation
+(id)newLoadAutomaticDownloadQueueOperation;
-(NSString *)storeCorrelationID;
-(id)_account;
-(void)setStoreCorrelationID:(NSString *)d ;
-(void)setPowerAssertionIdentifier:(NSString *)identifier ;
-(id)resolveBagURLForKey:(id)key bagContext:(id)context error:(id*)error ;
-(BOOL)_loadDownloadsFromStart:(id)start toEnd:(id)end url:(id)url ;
-(id)_newURLOperationWithStartIdentifier:(id)identifier endIdentifier:(id)identifier2 url:(id)url ;
-(void)importKeybagSync:(id)sync ;
-(void)addGUIDToBody:(id)body ;
-(void)addKeybagSyncToBody:(id)body ;
-(BOOL)featureEnabledForBagKey:(id)key bagContext:(id)context error:(id*)error ;
-(id)gzipData:(id)data ;
-(void)setDownloadsMetadata:(id)metadata ;
-(NSString *)powerAssertionIdentifier;
-(id)init;
-(void)lock;
-(void)unlock;
-(long long)reason;
-(void)main;
-(BOOL)needsAuthentication;
-(SSURLRequestProperties *)requestProperties;
-(id)initWithRequestProperties:(id)properties ;
-(NSString *)requestIdentifier;
-(void)setNeedsAuthentication:(BOOL)authentication ;
-(NSMutableOrderedSet *)downloads;
-(NSNumber *)accountIdentifier;
-(void)setAccountIdentifier:(NSNumber *)identifier ;
-(void)setRequestIdentifier:(NSString *)identifier ;
-(void)setReason:(long long)reason ;
-(void)_handleResponse:(id)response ;
@end
