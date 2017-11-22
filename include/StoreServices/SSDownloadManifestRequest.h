#import <StoreServices/SSRequest.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
@interface SSDownloadManifestRequest : SSRequest
-(void)setShouldHideUserPrompts:(BOOL)prompts ;
-(BOOL)shouldHideUserPrompts;
-(long long)manifestFormat;
-(id)init;
-(void)dealloc;
-(BOOL)start;
-(void)startWithCompletionBlock:(/*^block*/id)block ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(id)initWithURLRequest:(id)request ;
-(void)setManifestFormat:(long long)format ;
-(void)startWithManifestResponseBlock:(/*^block*/id)block ;
-(NSURLRequest *)URLRequest;
@end
