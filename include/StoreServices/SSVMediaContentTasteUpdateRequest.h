#import <StoreServices/SSRequest.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
@interface SSVMediaContentTasteUpdateRequest : SSRequest
-(void)setContentTasteItemUpdates:(NSArray *)updates ;
-(NSArray *)contentTasteItemUpdates;
-(BOOL)shouldInvalidateLocalCache;
-(void)setShouldInvalidateLocalCache:(BOOL)cache ;
-(void)startWithCompletionBlock:(/*^block*/id)block ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(void)startWithResponseBlock:(/*^block*/id)block ;
@end
