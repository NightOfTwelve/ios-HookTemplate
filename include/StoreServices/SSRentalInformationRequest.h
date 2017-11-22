#import <StoreServices/SSRequest.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
@interface SSRentalInformationRequest : SSRequest
-(NSNumber *)rentalKeyIdentifier;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(void)startWithResponseBlock:(/*^block*/id)block ;
-(id)initWithAccountIdentifier:(id)identifier rentalKeyIdentifier:(id)identifier2 ;
-(NSNumber *)accountIdentifier;
@end
