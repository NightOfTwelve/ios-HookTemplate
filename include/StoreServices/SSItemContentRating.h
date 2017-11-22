//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
////#import <libobjc.A.dylib/NSCopying.h>
#import <StoreServices/SSItemArtworkImage.h>
@interface SSItemContentRating : NSObject
+(long long)ratingSystemFromString:(id)string ;
+(id)stringForRatingSystem:(long long)system ;
-(NSDictionary *)contentRatingDictionary;
-(void)_setValueCopy:(id)copy forProperty:(id)property ;
-(id)init;
-(void)dealloc;
-(id)initWithDictionary:(id)dictionary ;
-(id)copyWithZone:(NSZone*)zone ;
-(void)_setValue:(id)value forProperty:(id)property ;
-(id)valueForProperty:(id)property ;
-(BOOL)isRestricted;
-(void)setRank:(long long)rank ;
-(long long)rank;
-(BOOL)isExplicitContent;
-(BOOL)_isRatingSystemForApps:(long long)apps ;
-(BOOL)_isRatingSystemForMovies:(long long)movies ;
-(BOOL)_isRatingSystemForTV:(long long)v ;
-(BOOL)_isRatingSystemForMusic:(long long)music ;
-(NSString *)ratingDescription;
-(void)setRatingDescription:(NSString *)description ;
-(NSString *)ratingLabel;
-(void)setRatingLabel:(NSString *)label ;
-(long long)ratingSystem;
-(void)setRatingSystem:(long long)system ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(BOOL)shouldHideWhenRestricted;
-(SSItemArtworkImage *)ratingSystemLogo;
-(void)setShouldHideWhenRestricted:(BOOL)restricted ;
@end
