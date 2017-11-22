#import <StoreServices/SSUpdatableAsset.h>
@interface SSUpdatableAssetManifest : NSObject
+(id)_osVersionString;
-(void)_setBootstrapAsset:(id)asset ;
-(void)_setCacheURL:(id)l ;
-(void)_setExtraInfo:(id)info ;
-(double)lastModifiedTimestamp;
-(void)_setLastModifiedTimestamp:(double)timestamp ;
-(double)pollInterval;
-(void)_setPollInterval:(double)interval ;
-(void)_setReloadUrgencyType:(long long)type ;
-(NSURL *)serverURL;
-(void)_setServerURL:(id)l ;
-(void)_setVersion:(id)version ;
-(NSString *)name;
-(NSString *)version;
-(void)_setName:(id)name ;
-(id)assetWithName:(id)name ;
-(NSURL *)cacheURL;
-(long long)reloadUrgencyType;
-(SSUpdatableAsset *)bootstrapAsset;
-(NSArray *)assets;
-(void)_setAssets:(id)assets ;
-(NSDictionary *)extraInfo;
@end
