@interface SSVMediaContentTasteController : NSObject
+(id)defaultMediaTasteController;
-(void)_refreshContentTasteItems;
-(void)_contentTasteForItemUpdate:(id)update finishedWithError:(id)error ;
-(void)_sendUpdateWithItemUpdates:(id)updates completionHandler:(/*^block*/id)handler ;
-(void)_handleContentTasteItemsUpdateResponse:(id)response allowNotifications:(BOOL)notifications ;
-(BOOL)_isRetryableError:(id)error ;
-(void)_scheduleContentTasteUpdateOperationForFailedItems;
-(void)_retryOperationForItemUpdates:(id)updates finishedWithError:(id)error ;
-(unsigned long long)contentTasteTypeForPlaylistGlobalID:(id)d ;
-(unsigned long long)contentTasteTypeForStoreAdamID:(long long)d ;
-(id)init;
-(void)dealloc;
-(void)setContentTasteType:(unsigned long long)type forStoreAdamID:(long long)d withContentType:(unsigned long long)type3 completionHandler:(/*^block*/id)handler ;
-(void)setContentTasteType:(unsigned long long)type forPlaylistGlobalID:(id)d withCompletionHandler:(/*^block*/id)handler ;
@end
