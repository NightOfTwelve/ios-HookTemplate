//#import <StoreServices/StoreServices-Structs.h>
@interface ISPurchaseReceipt : NSObject
+(id)receiptWithContentsOfFile:(id)file ;
-(BOOL)isRevoked;
-(BOOL)isVPPLicensed;
-(BOOL)_decodeReceiptData:(id)data toDecodedMessage:(void** /* inout SecCmsMessageStr* */)message ;
-(BOOL)_parseReceiptFromMessage:(void* /* SecCmsMessageStrRef */)message ;
-(void* /* SecCmsSignedDataStrRef */)_extractSignedDataFromMessage:(void* /* SecCmsMessageStrRef */)message ;
-(long long)_verifySignatureForSignedData:(void* /* SecCmsSignedDataStrRef */)data onDate:(id)date ;
-(BOOL)_checkIfCertificate:(void* /* SecCertificateRef */)certificate containsOID:(CFStringRef)d ;
-(void)_parseTokens:(id)tokens ;
-(void* /* CFArrayRef */)_copyCertificatesFromSignedData:(void* /* SecCmsSignedDataStrRef */)data ;
-(BOOL)_checkArray:(void* /* CFArrayRef */)array containsCertificateWithOID:(CFStringRef)d ;
-(BOOL)_setPoliciesForTrust:(void* /* SecTrustRef */)trust ;
-(BOOL)_anchorTrust:(void* /* SecTrustRef */)trust toRootCertificateIn:(void* /* CFArrayRef */)value ;
-(id)initWithContentsOfFile:(id)file ;
-(NSDate *)expirationDate;
@end
