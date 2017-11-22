#import <StoreServices/SSSQLiteDatabase.h>
@interface SSEventsTableBase : NSObject
+(id)databasePath;
-(BOOL)_setupDatabase;
-(id)init;
-(void)performTransactionWithBlock:(/*^block*/id)block ;
-(id)initWithDatabase:(id)database ;
@end
