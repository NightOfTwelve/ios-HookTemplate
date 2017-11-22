#import <StoreServices/ISPurchaseReceipt.h>
@interface SSPurchaseReceipt : NSObject
+(void)getReceiptPathWithCompletionBlock:(/*^block*/id)block ;
-(BOOL)isRevoked;
-(BOOL)isVPPLicensed;
-(id)initWithContainerPath:(id)path ;
-(id)initWithContentsOfFile:(id)file ;
-(NSDate *)expirationDate;
@end
