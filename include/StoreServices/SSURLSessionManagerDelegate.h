@protocol SSURLSessionManagerDelegate
-(void)URLSession:(id)session task:(id)task didCompleteWithEvent:(id)event error:(id)error ;
-(BOOL)shouldDisableCellular;
-(BOOL)shouldRequireCellular;
-(BOOL)shouldSetCookies;
-(NSData *)sourceAppAuditTokenData;
-(NSString *)sourceAppBundleID;
-(NSString *)URLCacheID;
-(void)URLSession:(id)session dataTask:(id)task didReceiveResponse:(id)response completionHandler:(/*^block*/id)handler ;
-(void)URLSession:(id)session dataTask:(id)task didReceiveData:(id)data ;
-(void)URLSession:(id)session task:(id)task willPerformHTTPRedirection:(id)redirection newRequest:(id)request completionHandler:(/*^block*/id)handler ;
-(void)URLSession:(id)session task:(id)task didReceiveChallenge:(id)challenge completionHandler:(/*^block*/id)handler ;
-(void)URLSession:(id)session task:(id)task needNewBodyStream:(/*^block*/id)stream ;
-(void)URLSession:(id)session task:(id)task didSendBodyData:(long long)data totalBytesSent:(long long)sent totalBytesExpectedToSend:(long long)send ;
-(NSURLCache *)URLCache;
@end
