//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCoding.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSDownloadPolicyApplicationState : NSObject
-(NSSet *)applicationStates;
-(void)addApplicationState:(long long)state ;
-(void)setNotRunningApplicationStates;
-(void)setApplicationStates:(NSSet *)states ;
-(id)initWithCoder:(id)coder ;
-(void)encodeWithCoder:(id)coder ;
-(void)dealloc;
-(BOOL)isEqual:(id)equal ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)zone ;
-(void)setApplicationIdentifier:(NSString *)identifier ;
-(NSString *)applicationIdentifier;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(id)initWithApplicationIdentifier:(id)identifier ;
@end
