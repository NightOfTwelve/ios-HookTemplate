#import <StoreServices/SSRequest.h>
@interface SSRentalCheckinRequest : SSRequest
-(id)initWithSinfs:(id)sinfs ;
-(NSNumber *)rentalKeyIdentifier;
-(id)init;
-(void)dealloc;
-(NSArray *)sinfs;
-(void)startWithCompletionBlock:(/*^block*/id)block ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(void)startWithConnectionResponseBlock:(/*^block*/id)block ;
-(id)initWithAccountIdentifier:(id)identifier rentalKeyIdentifier:(id)identifier2 ;
-(NSNumber *)accountIdentifier;
@end
