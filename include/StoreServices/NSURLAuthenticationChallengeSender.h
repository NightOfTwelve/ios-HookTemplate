@protocol NSURLAuthenticationChallengeSender
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)challenge ;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)challenge ;
-(void)useCredential:(id)credential forAuthenticationChallenge:(id)challenge ;
-(void)cancelAuthenticationChallenge:(id)challenge ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)challenge ;
@end
