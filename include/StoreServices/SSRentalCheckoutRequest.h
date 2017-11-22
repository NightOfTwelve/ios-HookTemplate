#import <StoreServices/SSRequest.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
@interface SSRentalCheckoutRequest : SSRequest
-(id)initWithSinfs:(id)sinfs ;
-(id)initWithDownloadIdentifier:(long long)identifier ;
-(NSNumber *)rentalKeyIdentifier;
-(BOOL)shouldValidateRentalInfo;
-(void)setShouldValidateRentalInfo:(BOOL)info ;
-(BOOL)shouldCheckoutWithPlay;
-(void)setCheckoutWithPlay:(BOOL)play ;
-(id)init;
-(void)dealloc;
-(long long)downloadIdentifier;
-(NSArray *)sinfs;
-(void)startWithCompletionBlock:(/*^block*/id)block ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(void)startWithConnectionResponseBlock:(/*^block*/id)block ;
-(id)initWithAccountIdentifier:(id)identifier rentalKeyIdentifier:(id)identifier2 ;
-(NSNumber *)accountIdentifier;
@end
