@interface SSProtocolCondition : NSObject
+(id)newConditionWithDictionary:(id)dictionary ;
-(BOOL)evaluateWithContext:(id)context ;
-(void)dealloc;
-(id)initWithDictionary:(id)dictionary ;
@end
