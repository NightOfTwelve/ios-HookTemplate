#import <StoreServices/SSProtocolCondition.h>
@interface SSRestrictionCondition : SSProtocolCondition
-(BOOL)evaluateWithContext:(id)context ;
-(void)dealloc;
-(id)initWithDictionary:(id)dictionary ;
@end
