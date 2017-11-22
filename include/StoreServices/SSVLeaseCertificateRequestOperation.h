#import <StoreServices/SSVComplexOperation.h>
#import <StoreServices/SSVPlaybackLeaseConfiguration.h>
#import <StoreServices/SSURLBag.h>
@interface SSVLeaseCertificateRequestOperation : SSVComplexOperation
-(id)_resolveCertificateURLReturningError:(id*)error ;
-(NSString *)certificateURLBagKey;
-(void)setCertificateURLBagKey:(NSString *)key ;
-(void)cancel;
-(id)initWithConfiguration:(id)configuration ;
-(void)main;
-(id)initWithURLBag:(id)bag ;
-(void)setOutputBlock:(id)block ;
-(id)outputBlock;
@end
