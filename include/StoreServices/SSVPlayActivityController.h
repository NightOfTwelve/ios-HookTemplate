#import <StoreServices/SSXPCConnection.h>
#import <StoreServices/SSVPlayActivityTable.h>
@interface SSVPlayActivityController : NSObject
+(id)_requiredEndpointIdentifiers;
-(id)_table;
-(id)initWithWritingStyle:(unsigned long long)style ;
-(void)_acquirePendingPlayActivityEventsForEndpointIdentifier:(id)identifier withStoreAccountID:(unsigned long long)d shouldFilterStoreAccountID:(BOOL)d3 completionHandler:(/*^block*/id)handler ;
-(id)_revisionsIndexSetForPlayActivityEvents:(id)events ;
-(void)_completePendingPlayEventsWithRevisionIndexSet:(id)set forSessionToken:(unsigned long long)token withResult:(unsigned long long)result completionHandler:(/*^block*/id)handler ;
-(id)_revisionsIndexSetForPlayActivityEventPersistentIDs:(id)ds ;
-(void)_getFlushSessionInformationForEndpointIdentifier:(id)identifier shouldAcquire:(BOOL)acquire storeAccountID:(unsigned long long)d shouldFilterStoreAccountID:(BOOL)d4 withCompletionHandler:(/*^block*/id)handler ;
-(void)_loadEndpointIdentifierInformationIfNeeded;
-(void)removePlayActivityEventsUpToRevision:(unsigned long long)revision withCompletionHandler:(/*^block*/id)handler ;
-(BOOL)_setEndpointRevisionInformation:(id)information forEndpointIdentifier:(id)identifier ;
-(id)_sessionInformationForSessionToken:(unsigned long long)token ;
-(id)_copyEndpointRevisionInformationForEndpointIdentifier:(id)identifier ;
-(void)getRevisionInformationWithCompletionHandler:(/*^block*/id)handler ;
-(void)_setupNotifyTokenIfNeeded;
-(void)acquirePendingPlayActivityEventsForEndpointIdentifier:(id)identifier withStoreAccountID:(unsigned long long)d completionHandler:(/*^block*/id)handler ;
-(void)acquirePendingPlayActivityEventsForEndpointIdentifier:(id)identifier withCompletionHandler:(/*^block*/id)handler ;
-(void)completePendingPlayActivityEvents:(id)events forSessionToken:(unsigned long long)token withResult:(unsigned long long)result completionHandler:(/*^block*/id)handler ;
-(void)completePendingPlayActivityEventPersistentIDs:(id)ds forSessionToken:(unsigned long long)token withResult:(unsigned long long)result completionHandler:(/*^block*/id)handler ;
-(void)flushPendingPlayActivityEventsForEndpointIdentifier:(id)identifier withCompletionHandler:(/*^block*/id)handler ;
-(void)getHasPendingPlayEventsForEndpointIdentifier:(id)identifier withCompletionHandler:(/*^block*/id)handler ;
-(void)getPlayActivityEventsFromRevision:(unsigned long long)revision toRevision:(unsigned long long)revision2 withCompletionHandler:(/*^block*/id)handler ;
-(void)recordPlayActivityEvents:(id)events withCompletionHandler:(/*^block*/id)handler ;
-(void)removeFlushedPlayActivityEventsWithCompletionHandler:(/*^block*/id)handler ;
-(void)setCurrentRevision:(unsigned long long)revision revisionVersionToken:(id)token forEndpointIdentifier:(id)identifier withCompletionHandler:(/*^block*/id)handler ;
-(unsigned long long)writingStyle;
-(id)init;
-(void)dealloc;
-(id)_connection;
@end
