#import <StoreServices/SSRequest.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
@interface SSVRepairApplicationRequest : SSRequest
-(id)initWithBundleID:(id)d accountIdentifier:(id)identifier claimStyle:(long long)style ;
-(long long)claimStyle;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(NSNumber *)accountDSID;
-(void)startWithResponseBlock:(/*^block*/id)block ;
-(NSString *)bundleID;
@end
