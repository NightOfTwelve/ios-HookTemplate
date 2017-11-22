@interface SSVFamilyAccountPair : NSObject
-(id)initWithDownloaderAccountIdentifier:(unsigned long long)identifier purchaserAccountIdentifier:(unsigned long long)identifier2 familyIdentifier:(unsigned long long)identifier3 ;
-(unsigned long long)downloaderAccountIdentifier;
-(unsigned long long)familyIdentifier;
-(unsigned long long)purchaserAccountIdentifier;
@end
