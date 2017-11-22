#import <StoreServices/SSSQLiteEntity.h>
@interface SSMetricsEventTableEntity : SSSQLiteEntity
+(id)databaseTable;
-(id)reportingDictionary;
-(id)reportingCanaryIdentifier;
-(id)reportingJSON;
-(void)dealloc;
@end
