#import <StoreServices/SSVLoadDownloadQueueOperation.h>
@interface SSVRefreshStoreQueueDownloadOperation : SSVLoadDownloadQueueOperation
-(BOOL)_refreshDownloadWithTransactionID:(id)d accountID:(id)d2 bagKey:(id)key error:(id*)error ;
-(id)initWithDownloadTransactionIdentifier:(id)identifier accountID:(id)d ;
-(id)isDownloadTransactionID;
-(NSString *)downloadTransactionID;
-(void)main;
-(NSNumber *)accountID;
@end
