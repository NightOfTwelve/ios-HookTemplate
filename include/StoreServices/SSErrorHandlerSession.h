#import <StoreServices/SSXPCConnection.h>
@interface SSErrorHandlerSession : NSObject
-(void)_setControlConnection:(id)connection ;
-(void)_setSessionID:(long long)d ;
-(void)_setErrorProperties:(id)properties ;
-(void)performDefaultHandling;
-(void)redirectToURL:(id)l ;
-(id)init;
-(void)dealloc;
-(id)valueForProperty:(id)property ;
-(void)retry;
@end
