#import <StoreServices/SSXPCConnection.h>
@interface SSSoftwareLibrary : NSObject
-(void)_sendDemotionMessage:(id)message completionBlock:(/*^block*/id)block ;
-(void)_getItemsWithMessage:(id)message completionBlock:(/*^block*/id)block ;
-(void)demoteApplicationWithBundleIdentifier:(id)identifier completionBlock:(/*^block*/id)block ;
-(void)hasDemotedApplicationsWithCompletionBlock:(/*^block*/id)block ;
-(void)isInstalledApplicationWithBundleIdentifier:(id)identifier completionBlock:(/*^block*/id)block ;
-(void)refreshReceiptsWithCompletionBlock:(/*^block*/id)block ;
-(void)restoreAllDemotedApplicationsWithOptions:(id)options completionBlock:(/*^block*/id)block ;
-(void)restoreDemotedApplicationWithBundleIdentifier:(id)identifier options:(id)options completionBlock:(/*^block*/id)block ;
-(id)init;
-(void)getRemovableSytemApplicationsWithCompletionBlock:(/*^block*/id)block ;
-(void)getLibraryItemsForITunesStoreItemIdentifiers:(id)identifiers completionBlock:(/*^block*/id)block ;
-(void)getLibraryItemForBundleIdentifiers:(id)identifiers completionBlock:(/*^block*/id)block ;
-(void)isRemovedSystemApplicationWithBundleIdentifier:(id)identifier completionBlock:(/*^block*/id)block ;
-(void)restoreRemovedSystemApplicationWithBundleIdentifier:(id)identifier completionBlock:(/*^block*/id)block ;
@end
