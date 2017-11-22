//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCopying.h>
////#import <libobjc.A.dylib/NSSecureCoding.h>
@interface _SSVPlayActivityEndpointRevisionInformation : NSObject
+(BOOL)supportsSecureCoding;
-(NSIndexSet *)additionalPendingRevisionsIndexSet;
-(void)setCurrentRevision:(unsigned long long)revision ;
-(void)setRevisionVersionToken:(NSString *)token ;
-(NSString *)revisionVersionToken;
-(void)setAdditionalPendingRevisionsIndexSet:(NSIndexSet *)set ;
-(id)initWithCoder:(id)coder ;
-(void)encodeWithCoder:(id)coder ;
-(BOOL)isEqual:(id)equal ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)zone ;
-(unsigned long long)currentRevision;
@end
