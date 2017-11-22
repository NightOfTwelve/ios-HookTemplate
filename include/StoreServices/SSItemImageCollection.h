#import <UIKit/UIKit.h>
//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSItemImageCollection : NSObject
-(id)_newImagesForDictionary:(id)dictionary ;
-(id)imagesForSize:(CGSize)size ;
-(id)_imagesForSize:(CGSize)size scale:(double)scale ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(NSArray *)itemImages;
-(id)bestImageForSize:(CGSize)size ;
-(id)imagesForKind:(id)kind ;
-(id)initWithItemImages:(id)images ;
-(id)initWithImageCollection:(id)collection ;
@end
