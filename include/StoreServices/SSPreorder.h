////#import <libobjc.A.dylib/SSXPCCoding.h>
#import <StoreServices/SSItemImageCollection.h>
@interface SSPreorder : NSObject
-(id)_initWithPersistentIdentifier:(long long)identifier ;
-(SSItemImageCollection *)imageCollection;
-(void)_setArtistName:(id)name ;
-(void)_setImageCollection:(id)collection ;
-(void)_setItemKind:(id)kind ;
-(void)_setReleaseDate:(id)date ;
-(void)_setReleaseDateString:(id)string ;
-(void)_setStoreAccountIdentifier:(id)identifier ;
-(void)_setStoreItemIdentifier:(long long)identifier ;
-(void)_setStorePreorderIdentifier:(long long)identifier ;
-(void)dealloc;
-(BOOL)isEqual:(id)equal ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)title;
-(void)_setTitle:(id)title ;
-(NSDate *)releaseDate;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(id)copyReleaseDateStringWithStyle:(long long)style ;
-(unsigned long long)storePreorderIdentifier;
-(unsigned long long)storeItemIdentifier;
-(long long)persistentIdentifier;
-(NSString *)itemKind;
-(NSString *)artistName;
-(NSString *)releaseDateString;
-(NSNumber *)storeAccountIdentifier;
@end
