@interface SSItemMedia : NSObject
-(id)initWithStoreOfferDictionary:(id)dictionary ;
-(BOOL)isProtectedMedia;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)equal ;
-(unsigned long long)hash;
-(id)description;
-(NSURL *)URL;
-(void)setMediaKind:(NSString *)kind ;
-(long long)mediaFileSize;
-(long long)fullDurationInMilliseconds;
-(NSString *)mediaKind;
-(long long)durationInMilliseconds;
@end
