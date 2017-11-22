#import <StoreServices/SSRequest.h>
#import <StoreServices/SSDownloadMetadata.h>
#import <StoreServices/SSPurchaseResponse.h>
@interface SSImportDownloadToIPodLibraryRequest : SSRequest
-(SSDownloadMetadata *)downloadMetadata;
-(SSPurchaseResponse *)purchaseResponse;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(id)initWithPurchase:(id)purchase ;
-(void)startWithResponseBlock:(/*^block*/id)block ;
-(id)initWithDownloadMetadata:(id)metadata ;
@end
