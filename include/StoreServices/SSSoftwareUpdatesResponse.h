@interface SSSoftwareUpdatesResponse : NSObject
-(id)copyUpdateItemDictionaries;
-(void)setUpdateItemsWithItemDictionaries:(id)dictionaries ;
-(void)dealloc;
-(id)description;
-(NSArray *)updateItems;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(id)initWithError:(id)error ;
-(NSError *)error;
-(BOOL)isFailed;
@end
