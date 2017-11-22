#import <StoreServices/SSXPCConnection.h>
#import <StoreServices/SSDownload.h>
#import <StoreServices/SSDownloadAsset.h>
@interface SSDownloadSession : NSObject
-(id)_initWithMessage:(id)message controlConnection:(id)connection ;
-(id)_initSSDownloadSession;
-(id)_copySessionPropertyWithKey:(const char*)key ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)equal ;
-(unsigned long long)hash;
-(id)description;
-(SSDownloadAsset *)downloadAsset;
-(SSDownload *)download;
@end
