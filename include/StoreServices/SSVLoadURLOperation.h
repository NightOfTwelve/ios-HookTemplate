//#import <StoreServices/StoreServices-Structs.h>
//#import <Foundation/NSOperation.h>
////#import <libobjc.A.dylib/SSURLSessionManagerDelegate.h>
#import <StoreServices/SSVURLDataConsumer.h>
#import <StoreServices/SSMetricsPageEvent.h>
#import <StoreServices/SSVFairPlaySAPSession.h>
#import <StoreServices/SSVSAPSignaturePolicy.h>
#import <StoreServices/SSURLBag.h>
#import <StoreServices/SSVURLBagInterpreter.h>
@interface SSVLoadURLOperation : NSObject /*NSOperation*/
+(id)_sessionManager;
-(BOOL)isITunesStoreRequest;
-(id)_initSSVLoadURLOperation;
-(BOOL)recordsMetrics;
-(long long)machineDataStyle;
-(id)_newURLRequestWithRedirectURL:(id)l ;
-(void)_stopRunLoop;
-(void)_finishWithData:(id)data ;
-(void)_createAuthKitSession;
-(void)_runOnce;
-(void)setPrepareRequestBlock:(id)block ;
-(void)_finishWithOutput:(id)output error:(id)error ;
-(BOOL)_shouldRetryAfterMachineDataRequest:(id)request ;
-(void)_applyResponseToMetrics:(id)metrics ;
-(id)_outputForData:(id)data error:(id*)error ;
-(void)_releaseOutputBlocks;
-(void)_configureWithURLBagInterpreter:(id)interpreter ;
-(void)_addMachineDataHeadersToRequest:(id)request withAccountIdentifier:(id)identifier ;
-(void)_addSAPSignatureToRequest:(id)request ;
-(id)prepareRequestBlock;
-(void)_loadURLBagInterpreter;
-(void)_stopIfCancelled;
-(int)_runRunLoopUntilStopped;
-(void)_keepAliveTimer:(id)timer ;
-(void)URLSession:(id)session task:(id)task didCompleteWithEvent:(id)event error:(id)error ;
-(id)expiredOutputBlock;
-(SSVSAPSignaturePolicy *)SAPSignaturePolicy;
-(void)setExpiredOutputBlock:(id)block ;
-(id)_dataForCachedResponse:(void* /* CFCachedURLResponseRef */)response ;
-(id)init;
-(void)cancel;
-(NSURL *)URL;
-(id)initWithURL:(id)l ;
-(void)main;
-(void)URLSession:(id)session dataTask:(id)task didReceiveResponse:(id)response completionHandler:(/*^block*/id)handler ;
-(void)URLSession:(id)session dataTask:(id)task didReceiveData:(id)data ;
-(void)URLSession:(id)session task:(id)task willPerformHTTPRedirection:(id)redirection newRequest:(id)request completionHandler:(/*^block*/id)handler ;
-(void)URLSession:(id)session task:(id)task didReceiveChallenge:(id)challenge completionHandler:(/*^block*/id)handler ;
-(NSString *)storeFrontSuffix;
-(void)configureWithURLBagDictionary:(id)dictionary ;
-(void)setOutputBlock:(id)block ;
-(id)initWithURLRequest:(id)request ;
-(void)setITunesStoreRequest:(BOOL)request ;
-(SSMetricsPageEvent *)metricsPageEvent;
-(void)setDataConsumer:(SSVURLDataConsumer *)consumer ;
-(void)setStoreFrontSuffix:(NSString *)suffix ;
-(NSHTTPURLResponse *)URLResponse;
-(NSURLRequest *)URLRequest;
-(id)initWithData:(id)data fromOperation:(id)operation ;
-(SSVURLDataConsumer *)dataConsumer;
-(void)configureWithURLBag:(id)bag ;
-(void)dispatchSync:(/*^block*/id)sync ;
-(void)dispatchAsync:(/*^block*/id)async ;
-(id)outputBlock;
-(NSString *)referrerApplicationName;
-(void)setReferrerApplicationName:(NSString *)name ;
-(NSString *)referrerURLString;
-(void)setReferrerURLString:(NSString *)string ;
-(NSCachedURLResponse *)cachedURLResponse;
-(id)initWithURLRequestProperties:(id)properties ;
-(void)setRecordsMetrics:(BOOL)metrics ;
-(void)setMachineDataStyle:(long long)style ;
-(void)setSAPSession:(SSVFairPlaySAPSession *)session ;
-(void)setSAPSignaturePolicy:(SSVSAPSignaturePolicy *)policy ;
-(SSVFairPlaySAPSession *)SAPSession;
@end
