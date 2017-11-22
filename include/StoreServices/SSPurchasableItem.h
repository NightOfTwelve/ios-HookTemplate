#import <StoreServices/SSSQLiteDatabase.h>
@interface SSPurchasableItem : NSObject
+(id)sortByDatePurchasedKey;
+(id)allPropertyKeys;
+(id)databaseTable;
-(long long)accountUniqueIdentifier;
-(id)initWithPropertyValues:(id)values ;
-(void)dealloc;
-(BOOL)isHidden;
-(id)description;
-(id)datePurchased;
-(long long)storeID;
-(id)propertyValues;
-(long long)pid;
@end
