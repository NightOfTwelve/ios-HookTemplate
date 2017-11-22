@interface SSUpdatesDatabaseSchema : NSObject
+(void)createSchemaInDatabase:(id)database withName:(id)name ;
+(BOOL)databaseRequiresMigration:(id)migration ;
+(void)_migrate7000to7001InDatabase:(id)database ;
+(id)databasePath;
@end
