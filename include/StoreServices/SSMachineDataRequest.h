#import <StoreServices/SSRequest.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
@interface SSMachineDataRequest : SSRequest
-(id)initWithURLResponse:(id)response ;
-(BOOL)allowsBootstrapCellularData;
-(void)setAllowsBootstrapCellularData:(BOOL)data ;
-(NSData *)actionData;
-(void)setActionData:(NSData *)data ;
-(void)setWaitsForPurchaseOperations:(BOOL)operations ;
-(BOOL)waitsForPurchaseOperations;
-(void)startWithDetailedCompletionBlock:(/*^block*/id)block ;
-(void)dealloc;
-(void)setActionName:(NSString *)name ;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)agent ;
-(void)setProtocolVersion:(long long)version ;
-(long long)protocolVersion;
-(void)startWithCompletionBlock:(/*^block*/id)block ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(NSString *)actionName;
-(NSNumber *)accountIdentifier;
-(void)setAccountIdentifier:(NSNumber *)identifier ;
@end
