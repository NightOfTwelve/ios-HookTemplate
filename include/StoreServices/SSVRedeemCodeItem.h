@interface SSVRedeemCodeItem : NSObject
-(NSDictionary *)redeemCodeDictionary;
-(id)initWithLookupItem:(id)item ;
-(long long)itemIdentifier;
-(id)initWithRedeemCodeDictionary:(id)dictionary ;
@end
