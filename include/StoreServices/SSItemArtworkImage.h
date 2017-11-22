#import <UIKit/UIKit.h>
//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSItemArtworkImage : NSObject
-(void)setImageKind:(NSString *)kind ;
-(void)setImageKindWithTypeName:(id)name variantName:(id)name2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)equal ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)zone ;
-(long long)imageOrientation;
-(NSURL *)URL;
-(void)setURL:(NSURL *)l ;
-(CGSize)imageSize;
-(long long)width;
-(long long)height;
-(id)valueForProperty:(id)property ;
-(NSString *)URLString;
-(double)imageScale;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(NSString *)imageKind;
-(BOOL)isPrerendered;
-(void)setValue:(id)value forProperty:(id)property ;
-(id)initWithArtworkDictionary:(id)dictionary ;
-(void)_setValue:(id)value forKey:(id)key ;
@end
