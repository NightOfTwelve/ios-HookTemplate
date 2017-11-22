#import <StoreServices/SSItemOfferDeviceError.h>
@interface SSItemOfferDevice : NSObject
-(id)initWithOfferDeviceDicitionary:(id)dicitionary ;
-(id)initWithDeviceIdentifier:(long long)identifier ;
-(SSItemOfferDeviceError *)incompatibleDeviceError;
-(SSItemOfferDeviceError *)incompatibleSystemError;
-(NSString *)minimumProductVersion;
-(id)init;
-(void)dealloc;
-(long long)deviceIdentifier;
@end
