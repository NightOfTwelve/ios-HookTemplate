//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
////#import <libobjc.A.dylib/NSCoding.h>
////#import <libobjc.A.dylib/NSCopying.h>
////#import <libobjc.A.dylib/NSMutableCopying.h>
@interface SSURLRequestProperties : NSObject
-(BOOL)isITunesStoreRequest;
-(BOOL)shouldDecodeResponse;
-(long long)machineDataStyle;
-(BOOL)shouldDisableCellular;
-(BOOL)shouldSetCookies;
-(BOOL)allowsBootstrapCellularData;
-(NSArray *)userAgentComponents;
-(NSInputStream *)HTTPBodyStream;
-(NSString *)clientAuditBundleIdentifier;
-(NSData *)clientAuditTokenData;
-(long long)allowedRetryCount;
-(BOOL)shouldProcessProtocol;
-(BOOL)shouldSendSecureToken;
-(BOOL)isLargeDownload;
-(long long)KBSyncType;
-(BOOL)requiresCellularDataNetwork;
-(BOOL)requiresExtendedValidationCertificates;
-(BOOL)requiresExternal;
-(BOOL)requiresHTTPS;
-(BOOL)shouldAddKBSyncData;
-(BOOL)shouldDisableCellularFallback;
-(id)init;
-(id)initWithCoder:(id)coder ;
-(void)encodeWithCoder:(id)coder ;
-(BOOL)isEqual:(id)equal ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)zone ;
-(NSURL *)URL;
-(NSArray *)URLs;
-(id)initWithURL:(id)l ;
-(id)mutableCopyWithZone:(NSZone*)zone ;
-(double)timeoutInterval;
-(NSString *)clientBundleIdentifier;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(unsigned long long)networkServiceType;
-(BOOL)canBeResolved;
-(NSDictionary *)requestParameters;
-(id)copyURLRequest;
-(id)URLBagURLBlock;
-(NSDictionary *)HTTPHeaders;
-(id)_initCommon;
-(NSString *)clientIdentifier;
-(id)initWithURLRequest:(id)request ;
-(long long)URLBagType;
-(NSString *)URLBagKey;
-(NSData *)HTTPBody;
-(NSString *)HTTPMethod;
-(long long)expectedContentLength;
-(unsigned long long)cachePolicy;
@end
