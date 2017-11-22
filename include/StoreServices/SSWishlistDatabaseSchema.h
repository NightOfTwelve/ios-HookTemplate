@interface SSWishlistDatabaseSchema : NSObject
+(void)createSchemaInDatabase:(id)database ;
+(void)_migrate7000to7001InDatabase:(id)database ;
+(id)databasePathWithAccountIdentifier:(long long)identifier ;
+(void)_migrate7001to7002InDatabase:(id)database ;
@end
