//#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSURLRequestProperties.h>
@interface SSMutableURLRequestProperties : SSURLRequestProperties
-(void)setHTTPHeaders:(NSDictionary *)headers ;
-(void)setExpectedContentLength:(long long)length ;
-(void)setAllowsBootstrapCellularData:(BOOL)data ;
-(void)setUserAgentComponents:(NSArray *)components ;
-(void)setShouldDisableCellular:(BOOL)cellular ;
-(void)setShouldDisableCellularFallback:(BOOL)fallback ;
-(void)setLargeDownload:(BOOL)download ;
-(void)setMultiPartFormDataWithDictionary:(id)dictionary ;
-(void)setRequiresExtendedValidationCertificates:(BOOL)certificates ;
-(void)setRequiresExternal:(BOOL)external ;
-(void)setRequiresHTTPS:(BOOL)s ;
-(void)setShouldAddKBSyncData:(BOOL)data ;
-(void)setShouldDecodeResponse:(BOOL)response ;
-(void)setShouldSetCookies:(BOOL)cookies ;
-(void)setClientAuditBundleIdentifier:(NSString *)identifier ;
-(void)setClientAuditTokenData:(NSData *)data ;
-(void)setURLBagURLBlock:(id)block ;
-(id)copyWithZone:(NSZone*)zone ;
-(void)setURL:(NSURL *)l ;
-(void)setURLs:(NSArray *)ls ;
-(void)setClientIdentifier:(NSString *)identifier ;
-(void)setValue:(id)value forHTTPHeaderField:(id)field ;
-(void)setHTTPBody:(NSData *)body ;
-(void)setHTTPMethod:(NSString *)method ;
-(void)setTimeoutInterval:(double)interval ;
-(void)setCachePolicy:(unsigned long long)policy ;
-(void)setRequiresCellularDataNetwork:(BOOL)network ;
-(void)setURLBagType:(long long)type ;
-(void)setITunesStoreRequest:(BOOL)request ;
-(void)setRequestParameters:(NSDictionary *)parameters ;
-(void)setValue:(id)value forRequestParameter:(id)parameter ;
-(void)setAllowedRetryCount:(long long)count ;
-(void)setURLBagKey:(NSString *)key ;
-(void)setShouldProcessProtocol:(BOOL)protocol ;
-(void)setKBSyncType:(long long)type ;
-(void)setShouldSendSecureToken:(BOOL)token ;
-(void)setMachineDataStyle:(long long)style ;
-(void)setHTTPBodyStream:(NSInputStream *)stream ;
-(void)setNetworkServiceType:(unsigned long long)type ;
@end