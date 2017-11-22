@protocol NSURLSessionDataDelegate
-(void)URLSession:(id)session dataTask:(id)task didReceiveResponse:(id)response completionHandler:(/*^block*/id)handler ;
-(void)URLSession:(id)session dataTask:(id)task didBecomeDownloadTask:(id)task3 ;
-(void)URLSession:(id)session dataTask:(id)task didBecomeStreamTask:(id)task3 ;
-(void)URLSession:(id)session dataTask:(id)task didReceiveData:(id)data ;
-(void)URLSession:(id)session dataTask:(id)task willCacheResponse:(id)response completionHandler:(/*^block*/id)handler ;
@end
