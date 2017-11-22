//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/SSDownloadManagerObserverPrivate.h>
#import <StoreServices/SSDownloadManager.h>
@interface SSDownloadQueue : NSObject
+(id)mediaDownloadKinds;
+(id)softwareApplicationDownloadKinds;
-(void)_handleDownloadsDidChange:(id)change ;
-(id)initWithDownloadKinds:(id)kinds ;
-(id)_initWithDownloadManagerOptions:(id)options ;
-(BOOL)canCancelDownload:(id)download ;
-(void)_sendDownloadStatusChangedAtIndex:(long long)index ;
-(void)_handleDownloadsRemoved:(id)removed ;
-(void)_sendQueueNetworkUsageChanged;
-(void)_messageObserversWithFunction:(/*function pointer*/void*)function context:(void*)context ;
-(void)_sendQueueChangedWithRemovals:(id)removals ;
-(void)downloadManager:(id)manager downloadsDidChange:(id)change ;
-(id)initWithDownloadManagerOptions:(id)options ;
-(void)addPlaceholderDownloads:(id)downloads ;
-(id)downloadForItemIdentifier:(unsigned long long)identifier ;
-(NSArray *)placeholderDownloads;
-(NSArray *)preorders;
-(void)removePlaceholderDownload:(id)download ;
-(BOOL)startPreOrderDownload:(id)download ;
-(void)_sendQueuePreOrdersChanged;
-(BOOL)shouldAutomaticallyFinishDownloads;
-(void)setShouldAutomaticallyFinishDownloads:(BOOL)downloads ;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)observer ;
-(void)removeObserver:(id)observer ;
-(BOOL)isUsingNetwork;
-(NSSet *)downloadKinds;
-(SSDownloadManager *)downloadManager;
-(void)getDownloadsUsingBlock:(/*^block*/id)block ;
-(BOOL)reloadFromServer;
-(void)downloadManager:(id)manager downloadStatesDidChange:(id)change ;
-(void)downloadManagerDownloadsDidChange:(id)change ;
-(void)downloadManagerNetworkUsageDidChange:(id)change ;
-(NSArray *)downloads;
-(BOOL)addDownload:(id)download ;
-(BOOL)cancelDownload:(id)download ;
@end
