//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSPlayInfoRequestContext : NSObject
-(NSData *)SICData;
-(NSNumber *)contentIdentifier;
-(void)setContentIdentifier:(NSNumber *)identifier ;
-(void)setPlaybackType:(NSString *)type ;
-(NSString *)playerGUID;
-(void)setPlayerGUID:(NSString *)d ;
-(void)setSICData:(NSData *)data ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone ;
-(NSString *)playbackType;
-(NSArray *)sinfs;
-(void)setSinfs:(NSArray *)sinfs ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(NSNumber *)accountIdentifier;
-(void)setAccountIdentifier:(NSNumber *)identifier ;
@end
