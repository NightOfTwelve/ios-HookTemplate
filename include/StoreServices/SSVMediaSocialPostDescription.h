//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCopying.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
@interface SSVMediaSocialPostDescription : NSObject
-(void)setAttributed:(BOOL)attributed ;
-(void)setAuthorIdentifier:(NSString *)identifier ;
-(void)setContentItems:(NSArray *)items ;
-(void)setExternalServiceDestinations:(NSArray *)destinations ;
-(void)setSourceApplicationIdentifier:(NSString *)identifier ;
-(NSString *)authorIdentifier;
-(NSArray *)contentItems;
-(NSArray *)externalServiceDestinations;
-(NSString *)sourceApplicationIdentifier;
-(id)copyWithZone:(NSZone*)zone ;
-(NSString *)text;
-(void)setText:(NSString *)text ;
-(NSArray *)attachments;
-(void)setAttachments:(NSArray *)attachments ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(NSNumber *)accountIdentifier;
-(NSString *)authorType;
-(void)setAuthorType:(NSString *)type ;
-(BOOL)isAttributed;
-(void)setAccountIdentifier:(NSNumber *)identifier ;
@end
