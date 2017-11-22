@interface SSWeakReference : NSObject
+(id)weakReferenceWithObject:(id)object ;
-(void)dealloc;
-(BOOL)isEqual:(id)equal ;
-(unsigned long long)hash;
-(id)object;
@end
