#import <StoreServices/SSKeyValueStoreSession.h>
@interface SSKeyValueStoreTransaction : SSKeyValueStoreSession
-(BOOL)setValue:(id)value forDomain:(id)domain key:(id)key ;
-(void)removeAccountFromDomain:(id)domain ;
-(BOOL)setData:(id)data forDomain:(id)domain key:(id)key ;
@end
