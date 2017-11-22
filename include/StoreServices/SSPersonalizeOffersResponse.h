////#import <libobjc.A.dylib/SSXPCCoding.h>
@interface SSPersonalizeOffersResponse : NSObject
-(void)_setPersonalizedItems:(id)items ;
-(NSArray *)personalizedItems;
-(void)setActionDisplayNameString:(id)string forItemType:(id)type ;
-(void)setActionParameters:(id)parameters forItemIdentifier:(id)identifier ;
-(void)setPriceDisplayString:(id)string forItemType:(id)type ;
-(void)dealloc;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(id)actionParametersForItemIdentifier:(id)identifier ;
-(id)priceDisplayForItemType:(id)type ;
-(id)actionDisplayNameForItemType:(id)type ;
@end
