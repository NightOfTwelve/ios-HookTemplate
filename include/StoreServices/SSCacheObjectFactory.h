@protocol SSCacheObjectFactory
-(BOOL)supportsTypeIdentifier:(id)identifier ;
-(id)cachedObjectWithDataRepresentation:(id)representation typeIdentifier:(id)identifier ;
@end
