@interface SSVPlayActivityFeedSerialization : NSObject
+(id)defaultOverrideHTTPHeaderFields;
-(id)propertyListObjectWithPlayActivityEvent:(id)event ;
-(void)setCurrentStoreFrontID:(NSString *)d ;
-(NSString *)currentStoreFrontID;
@end
