#import <StoreServices/SSSQLiteDatabase.h>
@interface SSUpdatesDatabaseSession : NSObject
-(void)dealloc;
-(SSSQLiteDatabase *)database;
-(id)initWithDatabase:(id)database ;
@end
