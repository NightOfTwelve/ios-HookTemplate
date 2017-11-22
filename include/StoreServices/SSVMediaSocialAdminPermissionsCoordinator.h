@interface SSVMediaSocialAdminPermissionsCoordinator : NSObject
+(id)sharedCoordinator;
-(id)_adminStatusForAccountID:(id)d ;
-(BOOL)_statusIsFresh:(id)fresh ;
-(void)_setAdminStatus:(id)status forAccountID:(id)d ;
-(void)setRefreshPeriod:(double)period ;
-(double)refreshPeriod;
-(id)init;
-(void)reset;
-(void)getAdminStatusWithOptions:(id)options resultBlock:(/*^block*/id)block ;
-(void)getAdminStatusAndWaitWithOptions:(id)options resultBlock:(/*^block*/id)block ;
-(BOOL)isCurrentUserAdmin;
@end
