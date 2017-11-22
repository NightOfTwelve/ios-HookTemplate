@interface SSVURLCacheConfiguration : NSObject
-(BOOL)supportsProcessSharing;
-(void)setSupportsProcessSharing:(BOOL)sharing ;
-(NSString *)sessionIdentifier;
-(void)setSessionIdentifier:(NSString *)identifier ;
@end
