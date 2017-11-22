#import <StoreServices/asn1Token.h>
#import <StoreServices/asn1Token.h>
@interface asn1OSToken : asn1Token
-(id)_initWithID:(unsigned long long)d class:(unsigned char)class length:(unsigned long long)length content:(const char*)content opaque:(BOOL)opaque ;
-(void)dealloc;
-(asn1Token *)value;
-(id)stringValue;
@end
