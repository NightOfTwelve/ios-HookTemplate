#import <StoreServices/SSEntity.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
#import <StoreServices/SSDownloadMetadata.h>
#import <StoreServices/SSDownloadStatus.h>
#import <StoreServices/SSXPCConnection.h>
#import <StoreServices/SSDownloadPolicy.h>
@interface SSDownload : SSEntity
+(long long)_existsMessage;
+(long long)_getExternalValuesMessage;
+(long long)_getValueMessage;
+(long long)_setExternalValuesMessage;
+(long long)_setValuesMessage;
-(id)_errorWithData:(id)data ;
-(BOOL)isEligibleForRestore:(id*)restore ;
-(id)_errorWithXPCReply:(id)reply ;
-(void)_applyPhase:(id)phase toStatus:(id)status ;
-(void)_resetLocalIVars;
-(id)_newAssetWithURL:(id)l assetType:(id)type ;
-(id)_initWithLocalPropertyValues:(id)values ;
-(id)backgroundNetworkingJobGroupName;
-(id)networkConstraints;
-(BOOL)removeAsset:(id)asset ;
-(void)setBackgroundNetworkingJobGroupName:(id)name ;
-(void)_addCachedExternalValues:(id)values ;
-(void)_addCachedPropertyValues:(id)values ;
-(void)handleWithDownloadHandler:(id)handler completionBlock:(/*^block*/id)block ;
-(BOOL)isBackgroundNetworkingUserInitiated;
-(void)setBackgroundNetworkingUserInitiated:(BOOL)initiated ;
-(void)_resetStatus;
-(SSXPCConnection *)_XPCConnection;
-(void)dealloc;
-(double)percentComplete;
-(void)resume;
-(BOOL)isExternal;
-(void)pause;
-(SSDownloadStatus *)status;
-(void)setStatus:(SSDownloadStatus *)status ;
-(SSDownloadMetadata *)metadata;
-(void)setMetadata:(SSDownloadMetadata *)metadata ;
-(id)failureError;
-(BOOL)addAsset:(id)asset forType:(id)type ;
-(id)downloadIdentifier;
-(void)setDownloadHandler:(id)handler completionBlock:(/*^block*/id)block ;
-(id)assetsForType:(id)type ;
-(id)copyXPCEncoding;
-(id)initWithPersistentIdentifier:(long long)identifier ;
-(long long)bytesDownloaded;
-(long long)bytesTotal;
-(long long)downloadSizeLimit;
-(SSDownloadPolicy *)downloadPolicy;
-(void)setDownloadPolicy:(SSDownloadPolicy *)policy ;
-(void)prioritizeAboveDownload:(id)download completionBlock:(/*^block*/id)block ;
-(void)setNetworkConstraints:(id)constraints ;
-(void)setValuesWithStoreDownloadMetadata:(id)metadata ;
-(double)estimatedSecondsRemaining;
-(long long)persistentIdentifier;
-(id)initWithDownloadMetadata:(id)metadata ;
-(id)downloadPhaseIdentifier;
-(BOOL)isCancelable;
-(void)setAssets:(NSArray *)assets ;
-(NSArray *)assets;
-(void)restart;
@end
