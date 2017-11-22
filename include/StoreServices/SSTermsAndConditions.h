//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSTermsAndConditions : NSObject
-(void)setCurrentVersionIdentifier:(long long)identifier ;
-(void)setUserAccepted:(BOOL)accepted ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone ;
-(NSString *)currentText;
-(void)setCurrentText:(NSString *)text ;
-(BOOL)requiresAuthentication;
-(id)initWithResponseData:(id)data error:(id*)error ;
-(BOOL)isUserAccepted;
-(long long)currentVersionIdentifier;
@end
