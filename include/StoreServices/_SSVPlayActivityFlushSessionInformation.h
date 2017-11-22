@interface _SSVPlayActivityFlushSessionInformation : NSObject
-(NSIndexSet *)revisionsIndexSet;
-(void)setRevisionVersionToken:(NSString *)token ;
-(unsigned long long)sessionToken;
-(NSString *)endpointIdentifier;
-(NSString *)revisionVersionToken;
-(void)setRevisionsIndexSet:(NSIndexSet *)set ;
-(void)setEndpointIdentifier:(NSString *)identifier ;
-(void)setSessionToken:(unsigned long long)token ;
@end
