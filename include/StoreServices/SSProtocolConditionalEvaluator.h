#import <StoreServices/SSProtocolConditionalContext.h>
@interface SSProtocolConditionalEvaluator : NSObject
+(id)defaultConditionalContext;
+(void)setDefaultConditionalContext:(id)context ;
-(id)initWithDictionary:(id)dictionary conditionalContext:(id)context ;
-(id)_dictionaryByEvaluatingWithForcedValue:(long long)value ;
-(id)_dictionaryByEvaluatingDictionary:(id)dictionary withForcedValue:(long long)value ;
-(id)_arrayByEvaluatingChildrenOfArray:(id)array withForcedValue:(long long)value ;
-(int)_logicalOperatorForString:(id)string ;
-(BOOL)_checkConditions:(id)conditions withOperator:(id)operator ;
-(id)_dictionaryByEvaluatingChildrenOfDictionary:(id)dictionary withForcedValue:(long long)value ;
-(id)init;
-(void)dealloc;
-(id)initWithDictionary:(id)dictionary ;
-(id)dictionaryByEvaluatingConditions;
-(id)dictionaryByRemovingConditions;
@end
