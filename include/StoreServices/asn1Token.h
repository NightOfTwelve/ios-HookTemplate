@interface asn1Token : NSObject
+(id)readTokenFromBuffer:(const char*)buffer opaque:(BOOL)opaque ;
+(id)readTokenFromBuffer:(const char*)buffer ;
+(id)readOpaqueTokenFromBuffer:(const char*)buffer ;
-(id)_initWithID:(unsigned long long)d class:(unsigned char)class length:(unsigned long long)length content:(const char*)content opaque:(BOOL)opaque ;
-(unsigned char)tokenClass;
-(id)description;
-(unsigned long long)length;
-(unsigned long long)identifier;
-(const char*)content;
@end
