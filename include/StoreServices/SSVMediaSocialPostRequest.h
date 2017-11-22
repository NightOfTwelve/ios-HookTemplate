#import <StoreServices/SSRequest.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
#import <StoreServices/SSVMediaSocialPostDescription.h>
@interface SSVMediaSocialPostRequest : SSRequest
-(id)initWithPostDescription:(id)description ;
-(SSVMediaSocialPostDescription *)postDescription;
-(void)startWithCompletionBlock:(/*^block*/id)block ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
@end
