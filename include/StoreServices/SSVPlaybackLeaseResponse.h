//#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSVPlaybackResponse.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSVPlaybackLeaseResponse : SSVPlaybackResponse
-(NSData *)certificateData;
-(unsigned long long)KDMovieIdentifier;
-(BOOL)isOfflineSlotAvailable;
-(void)setCertificateData:(NSData *)data ;
-(NSData *)leaseInfoData;
-(NSData *)subscriptionKeyBagData;
-(void)setKDMovieIdentifier:(unsigned long long)identifier ;
-(id)copyWithZone:(NSZone*)zone ;
-(double)leaseDuration;
-(id)itemForItemIdentifier:(id)identifier ;
@end
