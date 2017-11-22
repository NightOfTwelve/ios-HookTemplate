//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSDictionaryResponse : NSObject
-(id)_valueForProtocolKey:(id)key ;
-(id)_copyAccount;
-(NSNumber *)failureType;
-(BOOL)isSupportedProtocolVersion;
-(NSURL *)versionMismatchURL;
-(id)init;
-(void)dealloc;
-(NSArray *)actions;
-(id)copyWithZone:(NSZone*)zone ;
-(NSDictionary *)responseDictionary;
-(id)initWithResponseDictionary:(id)dictionary ;
-(NSArray *)pingURLs;
-(id)actionsWithActionType:(id)type ;
@end
