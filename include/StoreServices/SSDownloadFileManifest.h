#import <StoreServices/SSXPCConnection.h>
@interface SSDownloadFileManifest : NSObject
-(id)initWithManifestType:(long long)type ;
-(void)_removeItemsWithAssetPaths:(id)paths completionBlock:(/*^block*/id)block ;
-(void)getPathsForFilesWithClass:(long long)class completionBlock:(/*^block*/id)block ;
-(long long)manifestType;
-(void)rebuildManifestWithCompletionBlock:(/*^block*/id)block ;
-(void)removeItemWithAssetPath:(id)path completionBlock:(/*^block*/id)block ;
-(void)removeItemsWithAssetPaths:(id)paths completionBlock:(/*^block*/id)block ;
-(id)init;
-(void)dealloc;
@end
