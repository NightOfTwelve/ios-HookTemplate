//#import <StoreServices/StoreServices-Structs.h>
@interface SSVFairPlaySAPContext : NSObject
-(id)initWithSAPVersion:(long long)version ;
-(id)primingSignatureForData:(id)data error:(id*)error ;
-(BOOL)verifySignature:(id)signature forData:(id)data error:(id*)error ;
-(void)dealloc;
-(BOOL)verifyPrimeSignature:(id)signature error:(id*)error ;
-(void)_teardownSession;
-(id)exchangeData:(id)data error:(id*)error ;
-(id)signData:(id)data error:(id*)error ;
-(BOOL)isComplete;
@end
