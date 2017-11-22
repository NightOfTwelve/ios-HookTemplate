@interface SSVStoreDownload : NSObject
-(void)setPreferredAssetFlavor:(NSString *)flavor ;
-(NSString *)preferredAssetFlavor;
-(id)initWithDictionary:(id)dictionary ;
-(NSDictionary *)properties;
@end
