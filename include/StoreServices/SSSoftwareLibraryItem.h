////#import <libobjc.A.dylib/SSXPCCoding.h>
@interface SSSoftwareLibraryItem : NSObject
-(void)setLaunchProhibited:(BOOL)prohibited ;
-(id)ETagForAssetType:(id)type ;
-(BOOL)setETag:(id)tag forAssetType:(id)type error:(id*)error ;
-(id)_initWithITunesMetadata:(id)metadata ;
-(void)setBeta:(BOOL)beta ;
-(BOOL)isProfileValidated;
-(void)setProfileValidated:(BOOL)validated ;
-(void)dealloc;
-(void)setPlaceholder:(BOOL)placeholder ;
-(void)_setValue:(id)value forProperty:(id)property ;
-(id)valueForProperty:(id)property ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(BOOL)isPlaceholder;
-(BOOL)isBeta;
-(BOOL)isLaunchProhibited;
@end
