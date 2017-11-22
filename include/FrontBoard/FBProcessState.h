@interface FBProcessState : NSObject

@property (nonatomic, getter=isRunning) BOOL running;

@property (nonatomic) int pid;
@property (nonatomic) int visibility;

@end
