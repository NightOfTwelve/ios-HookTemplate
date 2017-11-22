//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCopying.h>
//#import <StoreServices/SSItem.h>
#import <StoreServices/SSItemMedia.h>
#import <StoreServices/SSDialog.h>
#import <StoreServices/SSNetworkConstraints.h>
@class SSItem;

@interface SSItemOffer : NSObject
+(id)_preferredOfferIdentifiers;
-(SSNetworkConstraints *)networkConstraints;
-(void)_setOfferItem:(id)item ;
-(SSDialog *)confirmationDialog;
-(SSDialog *)successDialog;
-(NSArray *)supportedDevices;
-(NSSet *)accountIdentifiers;
-(long long)estimatedDiskSpaceNeeded;
-(id)requiredSoftwareCapabilities;
-(SSItem *)_offerItem;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)zone ;
-(id)valueForProperty:(id)property ;
-(BOOL)isPreorder;
-(void)setPriceDisplay:(NSString *)display ;
-(void)setActionDisplayName:(NSString *)name ;
-(void)setOneTapOffer:(BOOL)offer ;
-(NSString *)priceDisplay;
-(id)documentCannotOpenDialog;
-(id)documentRequiredHandlers;
-(SSItemMedia *)offerMedia;
-(id)documentUTI;
-(id)allowedToneStyles;
-(id)playableMedia;
-(NSString *)offerIdentifier;
-(id)initWithOfferIdentifier:(id)identifier dictionary:(id)dictionary ;
-(BOOL)shouldShowPlusIcon;
-(NSString *)actionDisplayName;
-(BOOL)isOneTapOffer;
-(NSString *)buyParameters;
-(void)setBuyParameters:(NSString *)parameters ;
-(NSString *)actionType;
@end
