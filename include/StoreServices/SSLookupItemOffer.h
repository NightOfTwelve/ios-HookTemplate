@interface SSLookupItemOffer : NSObject
-(void)dealloc;
-(NSNumber *)price;
-(NSString *)buyParameters;
-(id)initWithLookupDictionary:(id)dictionary ;
-(NSDictionary *)lookupDictionary;
-(NSString *)offerType;
-(id)actionTextForType:(id)type ;
-(NSString *)formattedPrice;
@end
