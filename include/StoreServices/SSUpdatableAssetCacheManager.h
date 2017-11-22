@interface SSUpdatableAssetCacheManager : NSObject
-(id)manifestsDirectoryURL;
-(id)currentManifestFileURL;
-(BOOL)setCacheURLsOnManifestAndAssets:(id)assets error:(id*)error ;
-(id)cacheRoot;
-(id)assetsDirectoryURL;
-(id)assetFileName:(id)name ;
-(id)manifestFileName:(id)name ;
-(id)manifestFileURL:(id)l ;
-(id)validatePath:(id)path ;
-(id)assetFileURL:(id)l ;
-(id)allCachedManifests;
-(id)loadCurrentCachedManifest;
-(id)initWithClientIdentifier:(id)identifier ;
@end
