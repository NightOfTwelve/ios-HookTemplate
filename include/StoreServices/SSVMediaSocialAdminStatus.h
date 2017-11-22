////#import <libobjc.A.dylib/NSSecureCoding.h>
@interface SSVMediaSocialAdminStatus : NSObject
+(BOOL)supportsSecureCoding;
-(BOOL)isAdmin;
-(id)initWithAdminStatus:(BOOL)status dateUpdated:(id)updated ;
-(id)initWithCoder:(id)coder ;
-(void)encodeWithCoder:(id)coder ;
-(NSDate *)dateUpdated;
@end
