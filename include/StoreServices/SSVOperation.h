//#import <Foundation/NSOperation.h>
@interface SSVOperation : NSObject /*NSOperation*/
-(void)addChildRequest:(id)request ;
-(void)removeChildRequest:(id)request ;
-(id)init;
-(void)cancel;
-(void)setSuccess:(BOOL)success ;
-(void)dispatchSync:(/*^block*/id)sync ;
-(void)dispatchAsync:(/*^block*/id)async ;
-(void)runChildOperation:(id)operation ;
-(NSError *)error;
-(void)setError:(NSError *)error ;
-(BOOL)success;
@end
