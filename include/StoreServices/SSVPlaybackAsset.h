@interface SSVPlaybackAsset : NSObject
-(id)initWithAssetDictionary:(id)dictionary ;
-(BOOL)isEqual:(id)equal ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)URLString;
-(NSDictionary *)assetDictionary;
-(NSString *)flavor;
-(NSArray *)sinfs;
-(NSString *)downloadKey;
@end
