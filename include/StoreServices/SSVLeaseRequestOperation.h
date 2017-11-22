#import <StoreServices/SSVOperation.h>
#import <StoreServices/SSVPlaybackLeaseConfiguration.h>
#import <StoreServices/SSVPlaybackLeaseRequest.h>
#import <StoreServices/SSURLBag.h>
@interface SSVLeaseRequestOperation : SSVOperation
-(NSString *)certificateURLBagKey;
-(void)setCertificateURLBagKey:(NSString *)key ;
-(id)initWithLeaseRequest:(id)request configuration:(id)configuration ;
-(id)initWithLeaseRequest:(id)request URLBag:(id)bag ;
-(BOOL)_resolveConfigurationAndURLReturningError:(id*)error ;
-(BOOL)_loadCertificateDataIfNecessary:(id*)necessary ;
-(BOOL)_shouldRetryForError:(id)error ;
-(SSVPlaybackLeaseRequest *)leaseRequest;
-(void)cancel;
-(void)main;
-(void)setOutputBlock:(id)block ;
-(id)outputBlock;
@end
