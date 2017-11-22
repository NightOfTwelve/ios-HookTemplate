@interface SSUpdatableAsset : NSObject
-(void)_setCacheURL:(id)l ;
-(NSURL *)serverURL;
-(void)_setServerURL:(id)l ;
-(void)_setVersion:(id)version ;
-(void)_setMD5:(id)d5 ;
-(NSString *)name;
-(NSString *)version;
-(void)_setName:(id)name ;
-(NSURL *)cacheURL;
-(NSString *)md5;
@end
