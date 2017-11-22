#import <StoreServices/SSRequest.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
@interface SSVInstallManagedApplicationRequest : SSRequest
-(NSNumber *)externalVersionIdentifier;
-(void)setExternalVersionIdentifier:(NSNumber *)identifier ;
-(id)initWithItemIdentifer:(id)identifer externalVersionIdentifier:(id)identifier bundleIdentifier:(id)identifier3 bundleVersion:(id)version ;
-(id)initWithItemIdentifer:(id)identifer externalVersionIdentifier:(id)identifier bundleIdentifier:(id)identifier3 bundleVersion:(id)version skipDownloads:(BOOL)downloads ;
-(void)startWithDetailedResponseBlock:(/*^block*/id)block ;
-(void)startWithMetadataResponseBlock:(/*^block*/id)block ;
-(BOOL)skipDownloads;
-(void)setSkipDownloads:(BOOL)downloads ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)identifier ;
-(NSString *)bundleVersion;
-(void)setBundleVersion:(NSString *)version ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(NSString *)itemIdentifier;
-(void)setItemIdentifier:(NSString *)identifier ;
-(void)startWithResponseBlock:(/*^block*/id)block ;
@end
