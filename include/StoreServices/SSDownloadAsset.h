#import <StoreServices/SSEntity.h>
#import <StoreServices/SSURLRequestProperties.h>
@interface SSDownloadAsset : SSEntity
+(long long)_existsMessage;
+(long long)_getExternalValuesMessage;
+(long long)_getValueMessage;
+(long long)_setValuesMessage;
+(id)assetWithURL:(id)l type:(long long)type ;
-(long long)_legacyAssetType;
-(void)_resetLocalIVars;
-(id)_copyURLRequestProperties;
-(long long)bytesUploadTotal;
-(id)initWithURLRequest:(id)request type:(long long)type ;
-(NSString *)downloadFileName;
-(NSString *)downloadPath;
-(NSString *)finalizedPath;
-(void)dealloc;
-(BOOL)isExternal;
-(long long)fileSize;
-(NSArray *)sinfs;
-(id)copyXPCEncoding;
-(long long)bytesDownloaded;
-(SSURLRequestProperties *)URLRequestProperties;
-(id)initWithURLRequest:(id)request ;
-(NSURLRequest *)URLRequest;
-(id)initWithURLRequestProperties:(id)properties ;
-(long long)assetType;
-(long long)bytesUploaded;
@end
