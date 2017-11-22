@interface SSVFamilyContentDeletionEvent : NSObject
+(id)notificationPayloadWithAccountPairs:(id)pairs ;
+(void)postDistributedNotificationWithAccountPairs:(id)pairs ;
-(id)initWithNotificationUserInfo:(id)info ;
-(id)initWithXPCEventStreamEvent:(id)event ;
-(NSArray *)deletedAccounts;
@end
