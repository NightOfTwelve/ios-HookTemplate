@interface SSXPCServerObserver : NSObject
-(BOOL)isEqual:(id)equal ;
-(unsigned long long)hash;
-(void)setSelector:(SEL)selector ;
-(SEL)selector;
-(void)setObserver:(id)observer ;
-(id)observer;
@end
