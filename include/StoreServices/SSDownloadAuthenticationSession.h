#import <StoreServices/SSDownloadSession.h>
@interface SSDownloadAuthenticationSession : SSDownloadSession
-(NSURLAuthenticationChallenge *)authenticationChallenge;
-(void)_finishWithType:(int)type credential:(id)credential ;
@end
