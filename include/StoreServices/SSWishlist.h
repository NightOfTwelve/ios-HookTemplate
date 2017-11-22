#import <StoreServices/SSSQLiteDatabase.h>
@interface SSWishlist : NSObject
+(BOOL)existsForAccountIdentifier:(long long)identifier ;
-(BOOL)deleteBackingStore;
-(void)dealloc;
-(id)initWithAccountIdentifier:(long long)identifier ;
-(long long)accountIdentifier;
-(void)setLastSyncTime:(NSNumber *)time ;
-(void)performTransactionWithBlock:(/*^block*/id)block ;
-(NSNumber *)lastSyncTime;
@end
