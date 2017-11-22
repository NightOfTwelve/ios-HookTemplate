#import <StoreServices/SSUpdatableAssetManifest.h>
#import <StoreServices/SSUpdatableAssetCacheManager.h>
#import <StoreServices/SSXPCConnection.h>
@interface SSUpdatableAssetController : NSObject
-(id)initWithBundledManifestURL:(id)l clientIdentifier:(id)identifier ;
-(id)_bundledManifestVersion;
-(id)_bundledManifest;
-(NSURL *)bundledManifestURL;
-(void)dealloc;
-(id)_connection;
-(SSUpdatableAssetManifest *)currentManifest;
-(SSUpdatableAssetManifest *)newestCachedManifest;
-(void)refreshCachedManifest:(/*^block*/id)manifest ;
-(id)initWithBundledManifestURL:(id)l ;
-(void)clearCache:(/*^block*/id)cache ;
-(NSURL *)manifestURL;
-(void)setManifestURL:(NSURL *)l ;
@end
