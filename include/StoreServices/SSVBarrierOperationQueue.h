//#import <Foundation/NSOperationQueue.h>
@interface SSVBarrierOperationQueue : NSObject /*NSOperationQueue*/
-(void)addBarrierOperation:(id)operation ;
-(void)addOperationWithBlock:(/*^block*/id)block ;
-(void)addOperation:(id)operation ;
-(void)addOperations:(id)operations waitUntilFinished:(BOOL)finished ;
@end
