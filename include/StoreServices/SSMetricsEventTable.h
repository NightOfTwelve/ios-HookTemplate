#import <StoreServices/SSEventsTableBase.h>
@interface SSMetricsEventTable : SSEventsTableBase
+(id)databasePath;
-(BOOL)_setupDatabase;
@end
