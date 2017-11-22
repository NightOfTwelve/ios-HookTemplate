@interface SSItemOfferDeviceError : NSObject
-(id)_initWithMessage:(id)message title:(id)title URLTitle:(id)title3 URL:(id)l ;
-(NSString *)localizedURLTitle;
-(void)dealloc;
-(NSURL *)URL;
-(NSString *)localizedTitle;
-(NSString *)localizedMessage;
@end
