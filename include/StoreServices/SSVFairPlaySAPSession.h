////#import <libobjc.A.dylib/SSVSAPContext.h>
#import <StoreServices/SSVFairPlaySAPContext.h>
#import <StoreServices/SSURLBag.h>
#import <StoreServices/SSVURLBagInterpreter.h>
@interface SSVFairPlaySAPSession : NSObject
-(BOOL)verifyData:(id)data withSignature:(id)signature error:(id*)error ;
-(id)signatureWithData:(id)data error:(id*)error ;
-(id)_urlBagInterpreter;
-(id)initWithSAPVersion:(long long)version ;
-(NSData *)certificateData;
-(void)setCertificateData:(NSData *)data ;
-(id)initWithURLBag:(id)bag SAPVersion:(long long)version ;
-(id)_initSSVFairPlaySAPSession;
-(id)_establishContext;
-(BOOL)_primeTheConnection;
-(void)signData:(id)data completionBlock:(/*^block*/id)block ;
-(void)verifySignature:(id)signature forData:(id)data completionBlock:(/*^block*/id)block ;
-(id)_loadCertificateData;
-(id)_postExchangeData:(id)data ;
-(BOOL)verifyPrimeResponse:(id)response ;
-(id)_initWithURLBagInterpreter:(id)interpreter SAPVersion:(long long)version ;
-(void)establishSessionWithCompletionBlock:(/*^block*/id)block ;
-(void)primeSessionWithCompletionBlock:(/*^block*/id)block ;
-(BOOL)primed;
-(id)init;
-(long long)version;
-(id)initWithURLBag:(id)bag ;
-(id)initWithURLBagDictionary:(id)dictionary SAPVersion:(long long)version ;
-(long long)SAPVersion;
-(id)initWithURLBagDictionary:(id)dictionary ;
@end
