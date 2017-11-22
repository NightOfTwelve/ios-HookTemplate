#import <StoreServices/SSProtocolCondition.h>
@interface SSApplicationVersionCondition : SSProtocolCondition
-(BOOL)evaluateWithContext:(id)context ;
-(void)dealloc;
-(id)initWithDictionary:(id)dictionary ;
@end
