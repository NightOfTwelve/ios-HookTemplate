#import <StoreServices/SSXPCConnection.h>
@interface SSDownloadHandler : NSObject
-(void)_handleMessage:(id)message fromServerConnection:(id)connection ;
-(void)_connectToDaemon;
-(void)_sendDisconnectMessage;
-(BOOL)_sendAuthenticationSessionWithMessage:(id)message ;
-(BOOL)_sendSessionHandleWithMessage:(id)message ;
-(BOOL)_sendSessionCancelWithMessage:(id)message ;
-(BOOL)_sendSessionPauseWithMessage:(id)message ;
-(id)_controlConnection;
-(id)_newSessionWithMessage:(id)message ;
-(NSArray *)downloadPhasesToIgnore;
-(void)resetDisavowedSessions;
-(BOOL)sessionsNeedPowerAssertion;
-(BOOL)sessionsShouldBlockOtherDownloads;
-(id)init;
-(void)setDelegate:(id/* <SSDownloadHandlerDelegate> */)delegate ;
-(void)dealloc;
-(id)description;
-(id/* <SSDownloadHandlerDelegate> */)delegate;
-(void)_setValue:(id)value forProperty:(const char*)property ;
-(void)setDownloadPhasesToIgnore:(NSArray *)ignore ;
-(void)setSessionsNeedPowerAssertion:(BOOL)assertion ;
-(void)setSessionsShouldBlockOtherDownloads:(BOOL)downloads ;
-(long long)handlerIdentifier;
@end
