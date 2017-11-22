//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCoding.h>
////#import <libobjc.A.dylib/NSCopying.h>
////#import <libobjc.A.dylib/NSMutableCopying.h>
////#import <libobjc.A.dylib/NSSecureCoding.h>
@interface SSVPlayActivityEventContainerIDs : NSObject
+(BOOL)supportsSecureCoding;
-(NSString *)cloudAlbumID;
-(NSString *)playlistVersionHash;
-(unsigned long long)cloudPlaylistID;
-(id)initWithCoder:(id)coder ;
-(void)encodeWithCoder:(id)coder ;
-(id)description;
-(id)copyWithZone:(NSZone*)zone ;
-(id)mutableCopyWithZone:(NSZone*)zone ;
-(long long)stationID;
-(NSString *)stationStringID;
-(NSString *)globalPlaylistID;
-(id)_copyWithClass:(Class)class ;
-(NSString *)stationHash;
-(long long)adamID;
@end
