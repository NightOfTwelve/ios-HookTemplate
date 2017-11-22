#import <StoreServices/asn1Token.h>
@interface asn1ReceiptToken : NSObject
+(id)readFromBuffer:(const char*)buffer ;
-(asn1Token *)contentToken;
-(id)_initWithType:(unsigned long long)type typeVersion:(unsigned long long)version contentToken:(id)token ;
-(unsigned long long)typeVersion;
-(void)dealloc;
-(id)description;
-(unsigned long long)integerValue;
-(unsigned long long)type;
-(NSString *)stringValue;
@end
