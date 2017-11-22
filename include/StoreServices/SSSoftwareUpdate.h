@interface SSSoftwareUpdate : NSObject
-(id)initWithUpdateDictionary:(id)dictionary ;
-(void)setUpdateState:(long long)state ;
-(void)setInstallDate:(NSDate *)date ;
-(NSDate *)installDate;
-(NSDictionary *)updateDictionary;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(long long)updateState;
-(long long)storeItemIdentifier;
-(long long)parentalControlsRank;
@end
