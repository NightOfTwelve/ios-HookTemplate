//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSDownloadManagerOptions : NSObject
-(BOOL)shouldFilterExternalOriginatedDownloads;
-(NSArray *)prefetchedDownloadExternalProperties;
-(NSArray *)prefetchedDownloadProperties;
-(NSString *)persistenceIdentifier;
-(BOOL)ignoreDivertedDownloads;
-(void)setIgnoreDivertedDownloads:(BOOL)downloads ;
-(BOOL)isEqual:(id)equal ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)zone ;
-(void)setPersistenceIdentifier:(NSString *)identifier ;
-(NSArray *)downloadKinds;
-(void)setDownloadKinds:(NSArray *)kinds ;
-(void)setPrefetchedDownloadExternalProperties:(NSArray *)properties ;
-(void)setPrefetchedDownloadProperties:(NSArray *)properties ;
-(void)setShouldFilterExternalOriginatedDownloads:(BOOL)downloads ;
@end
