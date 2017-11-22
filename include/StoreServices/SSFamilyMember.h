////#import <libobjc.A.dylib/SSXPCCoding.h>
@interface SSFamilyMember : NSObject
-(NSNumber *)iTunesIdentifier;
-(id)newCacheRepresentation;
-(void)setICloudAccountName:(NSString *)name ;
-(void)setICloudIdentifier:(NSNumber *)identifier ;
-(void)setITunesIdentifier:(NSNumber *)identifier ;
-(BOOL)isSharingPurchases;
-(void)setSharingPurchases:(BOOL)purchases ;
-(NSString *)description;
-(BOOL)isMe;
-(void)setMe:(BOOL)me ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(id)initWithCacheRepresentation:(id)representation ;
-(void)setFirstName:(NSString *)name ;
-(void)setLastName:(NSString *)name ;
-(NSNumber *)iCloudIdentifier;
-(NSString *)iCloudAccountName;
-(NSString *)firstName;
-(NSString *)lastName;
@end
