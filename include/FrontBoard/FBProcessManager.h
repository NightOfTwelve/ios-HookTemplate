@class FBProcess;

@interface FBProcessManager : NSObject

+ (instancetype)sharedInstance;

- (FBProcess *)processForPID:(int)pid;

- (NSArray*)processesForBundleIdentifier:(NSString*)bundleID;

@end
