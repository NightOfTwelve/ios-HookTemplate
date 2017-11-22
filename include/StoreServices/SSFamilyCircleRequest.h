#import <StoreServices/SSRequest.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
@interface SSFamilyCircleRequest : SSRequest
-(long long)authenticationPromptStyle;
-(BOOL)fetchITunesAccountNames;
-(void)setFetchITunesAccountNames:(BOOL)names ;
-(void)startWithCompletionBlock:(/*^block*/id)block ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(void)startWithResponseBlock:(/*^block*/id)block ;
-(void)setAuthenticationPromptStyle:(long long)style ;
@end
