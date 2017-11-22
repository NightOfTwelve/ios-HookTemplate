#import <StoreServices/SSSQLiteEntity.h>
@interface SSAppPurchaseHistoryEntry : SSSQLiteEntity
+(id)predicateForAccountIdentifier:(id)identifier ;
+(id)predicateForNotHidden;
+(id)supportsPlatformPredicate:(BOOL)predicate ;
+(id)predicateForNotFirstParty;
+(id)predicateForHasMessagesExtension;
+(id)databaseTable;
+(id)disambiguatedSQLForProperty:(id)property ;
@end
