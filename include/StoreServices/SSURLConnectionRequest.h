#import <StoreServices/SSRequest.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
#import <StoreServices/SSURLRequestProperties.h>
#import <StoreServices/SSAuthenticationContext.h>
#import <StoreServices/SSVURLDataConsumer.h>
#import <StoreServices/SSVFairPlaySAPSession.h>
#import <StoreServices/SSVSAPSignaturePolicy.h>
#import <StoreServices/SSURLBag.h>
#import <StoreServices/SSVURLBagInterpreter.h>
@interface SSURLConnectionRequest : SSRequest
-(SSVSAPSignaturePolicy *)SAPSignaturePolicy;
-(BOOL)_canRunInProcess;
-(BOOL)runsInProcess;
-(NSURL *)destinationFileURL;
-(BOOL)sendsResponseForHTTPFailures;
-(BOOL)shouldMescalSign;
-(void)setSendsResponseForHTTPFailures:(BOOL)failures ;
-(void)setDestinationFileURL:(NSURL *)l ;
-(void)setRunsInProcess:(BOOL)process ;
-(id)init;
-(void)dealloc;
-(BOOL)start;
-(void)configureWithURLBagDictionary:(id)dictionary ;
-(void)startWithCompletionBlock:(/*^block*/id)block ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(SSAuthenticationContext *)authenticationContext;
-(SSURLRequestProperties *)requestProperties;
-(id)initWithRequestProperties:(id)properties ;
-(void)startWithConnectionResponseBlock:(/*^block*/id)block ;
-(id)initWithURLRequest:(id)request ;
-(void)setDataConsumer:(SSVURLDataConsumer *)consumer ;
-(NSURLRequest *)URLRequest;
-(SSVURLDataConsumer *)dataConsumer;
-(void)configureWithURLBag:(id)bag ;
-(void)setAuthenticationContext:(SSAuthenticationContext *)context ;
-(void)setShouldMescalSign:(BOOL)sign ;
-(void)setSAPSession:(SSVFairPlaySAPSession *)session ;
-(void)setSAPSignaturePolicy:(SSVSAPSignaturePolicy *)policy ;
-(SSVFairPlaySAPSession *)SAPSession;
@end
