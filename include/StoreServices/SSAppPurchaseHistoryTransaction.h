#import <StoreServices/SSSQLiteDatabase.h>
@interface SSAppPurchaseHistoryTransaction : NSObject
-(void)dealloc;
-(SSSQLiteDatabase *)database;
-(id)initWithDatabase:(id)database ;
@end
