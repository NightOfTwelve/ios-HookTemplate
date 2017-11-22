////#import <libobjc.A.dylib/NSURLAuthenticationChallengeSender.h>
#import <StoreServices/SSDownloadAuthenticationSession.h>
@interface SSDownloadAuthenticationChallengeSender : NSObject
-(id)initWithAuthenticationSession:(id)session ;
-(SSDownloadAuthenticationSession *)authenticationSession;
-(void)dealloc;
-(void)useCredential:(id)credential forAuthenticationChallenge:(id)challenge ;
-(void)cancelAuthenticationChallenge:(id)challenge ;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)challenge ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)challenge ;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)challenge ;
@end
