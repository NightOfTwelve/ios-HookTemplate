#import <StoreServices/SSAccount.h>
#import <StoreServices/SSDatabaseCache.h>
#import <StoreServices/SSAppPurchaseHistoryDatabase.h>
@interface SSAppPurchaseHistoryCache : NSObject
-(id)allUncachedImages:(id)images ;
-(id)allUncachedImages;
-(void)clearCacheForAdamID:(id)d ;
-(BOOL)setImageData:(id)data forAdamID:(id)d imageToken:(id)token ;
-(id)imageDataForAdamID:(id)d ;
-(id)init;
-(void)dealloc;
-(unsigned long long)purgeableSpace;
-(id)initWithAccount:(id)account ;
-(unsigned long long)purge:(unsigned long long)purge ;
@end
