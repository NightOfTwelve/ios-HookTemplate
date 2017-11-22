////#import <libobjc.A.dylib/SSXPCCoding.h>
@interface SSFamilyCircle : NSObject
-(id)newCacheRepresentation;
-(id)allITunesIdentifiers;
-(id)allITunesAccountNames;
-(NSArray *)iTunesAccountNames;
-(void)setITunesAccountNames:(NSArray *)names ;
-(void)setFamilyMembers:(NSArray *)members ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(id)initWithCacheRepresentation:(id)representation ;
-(NSArray *)familyMembers;
@end
