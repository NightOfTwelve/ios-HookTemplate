#import <StoreServices/SSVComplexOperation.h>
@interface SSVAccountLessPlaybackOperation : SSVComplexOperation
-(void)setHTTPHeaderFields:(NSDictionary *)fields ;
-(NSDictionary *)HTTPHeaderFields;
-(NSString *)assetStoreFrontIdentifier;
-(void)main;
-(void)setValue:(id)value forHTTPHeaderField:(id)field ;
-(void)setAssetStoreFrontIdentifier:(NSString *)identifier ;
-(id)responseBlock;
-(NSString *)itemIdentifier;
-(void)setResponseBlock:(id)block ;
-(void)setItemIdentifier:(NSString *)identifier ;
-(id)valueForHTTPHeaderField:(id)field ;
-(id)_requestBodyData;
@end
