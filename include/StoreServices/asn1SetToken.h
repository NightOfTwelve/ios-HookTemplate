#import <StoreServices/asn1Token.h>
@interface asn1SetToken : asn1Token
-(id)_initWithID:(unsigned long long)d class:(unsigned char)class length:(unsigned long long)length content:(const char*)content opaque:(BOOL)opaque ;
-(id)nextToken;
-(id)description;
-(void)reset;
@end
