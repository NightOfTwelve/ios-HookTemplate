//#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSPurchase.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
////#import <libobjc.A.dylib/NSCoding.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSTonePurchase : SSPurchase
-(void)_setValuesUsingDatabaseEncoding:(id)encoding ;
-(void)_addEntriesToDatabaseEncoding:(id)encoding ;
-(id)initWithCoder:(id)coder ;
-(void)encodeWithCoder:(id)coder ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(void)setAllowedToneStyles:(NSArray *)styles ;
-(id)initWithItem:(id)item offer:(id)offer ;
-(NSArray *)allowedToneStyles;
-(NSNumber *)assigneeIdentifier;
-(void)setAssigneeIdentifier:(NSNumber *)identifier ;
-(NSString *)assigneeContactIdentifier;
-(void)setAssigneeContactIdentifier:(NSString *)identifier ;
-(NSString *)assigneeToneStyle;
-(void)setAssigneeToneStyle:(NSString *)style ;
-(BOOL)shouldMakeDefaultRingtone;
-(void)setShouldMakeDefaultRingtone:(BOOL)ringtone ;
-(BOOL)shouldMakeDefaultTextTone;
-(void)setShouldMakeDefaultTextTone:(BOOL)tone ;
@end
