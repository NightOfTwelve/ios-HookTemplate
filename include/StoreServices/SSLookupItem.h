@interface SSLookupItem : NSObject
-(BOOL)isPOIBased;
-(long long)numberOfUserRatingsForCurrentVersion;
-(float)userRatingForCurrentVersion;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(NSString *)displayName;
-(NSArray *)artwork;
-(NSArray *)categoryNames;
-(id)initWithLookupDictionary:(id)dictionary ;
-(NSDictionary *)lookupDictionary;
-(NSString *)itemKind;
-(NSString *)artistName;
-(long long)numberOfUserRatings;
-(float)userRating;
-(NSURL *)productPageURL;
-(NSArray *)offers;
-(NSNumber *)ITunesStoreIdentifier;
@end
