//#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSVPlayActivityEventContainerIDs.h>
@interface SSVMutablePlayActivityEventContainerIDs : SSVPlayActivityEventContainerIDs
-(void)setPlaylistVersionHash:(NSString *)hash ;
-(void)setStationHash:(NSString *)hash ;
-(void)setStationStringID:(NSString *)d ;
-(void)setStationID:(long long)d ;
-(void)setCloudAlbumID:(NSString *)d ;
-(void)setCloudPlaylistID:(unsigned long long)d ;
-(id)copyWithZone:(NSZone*)zone ;
-(void)setGlobalPlaylistID:(NSString *)d ;
-(void)setAdamID:(long long)d ;
@end
