@interface SSVContentLink : NSObject
-(long long)targetApplication;
-(long long)contentKind;
-(long long)_targetApplicationWithContentKind:(long long)kind ;
-(id)_URLSchemeWithApplication:(long long)application ;
-(id)_stringForContentKind:(long long)kind ;
-(void)setItemTitle:(NSString *)title ;
-(void)setTargetApplication:(long long)application ;
-(NSURL *)URL;
-(NSString *)itemTitle;
-(NSString *)providerName;
-(void)setProviderName:(NSString *)name ;
-(NSNumber *)itemIdentifier;
-(void)setItemIdentifier:(NSNumber *)identifier ;
-(NSString *)categoryName;
-(void)setCategoryName:(NSString *)name ;
-(void)setSearchTerm:(NSString *)term ;
-(NSString *)searchTerm;
-(void)setContentKind:(long long)kind ;
@end
