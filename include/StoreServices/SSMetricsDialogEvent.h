#import <StoreServices/SSMetricsBaseEvent.h>
@interface SSMetricsDialogEvent : SSMetricsBaseEvent
-(void)setDialogType:(NSString *)type ;
-(NSString *)dialogId;
-(void)setDialogId:(NSString *)id ;
-(NSString *)targetId;
-(void)setTargetId:(NSString *)id ;
-(id)actionURL;
-(void)setUserActions:(NSArray *)actions ;
-(NSArray *)userActions;
-(id)init;
-(NSString *)result;
-(void)setActionType:(NSString *)type ;
-(NSDictionary *)details;
-(void)setDetails:(NSDictionary *)details ;
-(void)setResult:(NSString *)result ;
-(NSString *)dialogType;
-(NSString *)actionType;
@end
