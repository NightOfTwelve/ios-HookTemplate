#import <StoreServices/SSDialogButton.h>
@interface SSDialog : NSObject
-(id)init;
-(void)dealloc;
-(void)setTitle:(NSString *)title ;
-(NSString *)title;
-(void)setMessage:(NSString *)message ;
-(NSString *)message;
-(void)setDefaultButton:(SSDialogButton *)button ;
-(SSDialogButton *)defaultButton;
-(void)_setValue:(id)value forProperty:(id)property ;
-(id)valueForProperty:(id)property ;
-(NSArray *)buttons;
-(void)setButtons:(NSArray *)buttons ;
-(NSDictionary *)dialogDictionary;
-(id)initWithDialogDictionary:(id)dictionary ;
-(NSString *)dialogKind;
@end
