//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
////#import <libobjc.A.dylib/NSCopying.h>
#import <StoreServices/SSVSubscriptionStatus.h>
@interface SSVCloudServiceCapabilitiesResponse : NSObject
-(id)_descriptionWithSubscriptionStatusDescriptorBlock:(/*^block*/id)block ;
-(void)setSubscriptionStatus:(SSVSubscriptionStatus *)status ;
-(BOOL)supportsMusicCatalogPlayback;
-(void)setSupportsMusicCatalogPlayback:(BOOL)playback ;
-(BOOL)supportsAddToCloudMusicLibrary;
-(void)setSupportsAddToCloudMusicLibrary:(BOOL)library ;
-(BOOL)canSubscribeToMusicCatalog;
-(void)setCanSubscribeToMusicCatalog:(BOOL)catalog ;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)zone ;
-(SSVSubscriptionStatus *)subscriptionStatus;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
@end
