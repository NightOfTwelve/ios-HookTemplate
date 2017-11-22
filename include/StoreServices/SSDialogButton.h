@interface SSDialogButton : NSObject
+(id)buttonWithTitle:(id)title ;
-(id)initWithTitle:(id)title actionDictionary:(id)dictionary ;
-(id)valueForActionProperty:(id)property ;
-(id)actionParameter;
-(NSString *)URLTarget;
-(id)init;
-(void)dealloc;
-(NSString *)buttonAction;
-(NSString *)buttonTitle;
@end
