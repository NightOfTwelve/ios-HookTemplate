#import <StoreServices/SSXPCConnection.h>
@interface SSVMediaSocialShareExtension : NSObject
-(NSString *)extensionIdentifier;
-(void)getVisibilityWithCompletionBlock:(/*^block*/id)block ;
-(id)init;
@end
