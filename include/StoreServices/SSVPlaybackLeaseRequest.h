//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSVPlaybackLeaseRequest : NSObject
+(id)_requestWithType:(long long)type ;
-(id)valueForParameter:(id)parameter ;
-(long long)_actionType;
-(void)_applyValuesToCopy:(id)copy ;
-(NSString *)_actionParameterValue;
-(void)setKDChannelIdentifier:(unsigned long long)identifier ;
-(void)_setKDMovieIdentifier:(unsigned long long)identifier ;
-(void)setParameterValues:(NSDictionary *)values ;
-(void)setHTTPHeaderFields:(NSDictionary *)fields ;
-(void)_setActionType:(long long)type ;
-(void)_setCertificateData:(id)data ;
-(id)_copyWithLeaseType:(long long)type ;
-(id)_copyBodyDictionaryWithFairPlaySession:(void*)session ;
-(NSString *)_URLBagKey;
-(unsigned long long)KDChannelIdentifier;
-(NSDictionary *)parameterValues;
-(NSDictionary *)HTTPHeaderFields;
-(BOOL)startsLeaseSession;
-(NSData *)_certificateData;
-(long long)_leaseType;
-(unsigned long long)_KDMovieIdentifier;
-(id)copyWithZone:(NSZone*)zone ;
-(NSURL *)_URL;
-(void)setValue:(id)value forHTTPHeaderField:(id)field ;
-(void)setValue:(id)value forParameter:(id)parameter ;
-(void)setStartsLeaseSession:(BOOL)session ;
-(void)_setURL:(id)l ;
-(id)valueForHTTPHeaderField:(id)field ;
@end
