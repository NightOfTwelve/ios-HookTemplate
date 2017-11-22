//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCopying.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
@interface SSVDialogResponse : NSObject
-(void)setSelectedButtonIndex:(long long)index ;
-(void)setTextFieldValues:(NSArray *)values ;
-(NSArray *)textFieldValues;
-(id)copyWithZone:(NSZone*)zone ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(long long)selectedButtonIndex;
@end
