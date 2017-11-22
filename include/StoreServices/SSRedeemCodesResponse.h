////#import <libobjc.A.dylib/SSXPCCoding.h>
@interface SSRedeemCodesResponse : NSObject
-(NSArray *)failedCodes;
-(NSArray *)redeemedCodes;
-(void)setFailedCodes:(NSArray *)codes ;
-(void)setRedeemedCodes:(NSArray *)codes ;
-(void)dealloc;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(id)dictionaryForCode:(id)code ;
-(id)errorForCode:(id)code ;
@end
