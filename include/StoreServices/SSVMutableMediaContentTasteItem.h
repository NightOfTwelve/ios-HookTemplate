//#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSVMediaContentTasteItem.h>
@interface SSVMutableMediaContentTasteItem : SSVMediaContentTasteItem
-(void)setContentType:(unsigned long long)type ;
-(void)setPlaylistGlobalID:(NSString *)d ;
-(void)setTasteType:(unsigned long long)type ;
-(id)copyWithZone:(NSZone*)zone ;
-(void)setStoreAdamID:(long long)d ;
@end
