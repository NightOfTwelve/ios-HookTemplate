@interface SSVPlaybackItem : NSObject
-(void)_enumerateAssetsUsingBlock:(/*^block*/id)block ;
-(BOOL)isEqual:(id)equal ;
-(unsigned long long)hash;
-(id)description;
-(id)assetForFlavor:(id)flavor ;
-(NSDictionary *)itemDictionary;
-(id)initWithItemDictionary:(id)dictionary ;
-(id)itemIdentifier;
-(NSArray *)assets;
@end
