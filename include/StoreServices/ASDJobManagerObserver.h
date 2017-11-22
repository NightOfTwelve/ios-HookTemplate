@protocol ASDJobManagerObserver
-(void)jobManager:(id)manager changedJobs:(id)jobs ;
-(void)jobManager:(id)manager completedJobs:(id)jobs ;
-(void)jobManager:(id)manager updatedProgressOfJobs:(id)jobs ;
-(void)jobManager:(id)manager updatedStateOfJobs:(id)jobs ;
@end
