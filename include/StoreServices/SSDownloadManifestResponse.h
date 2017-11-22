////#import <libobjc.A.dylib/SSXPCCoding.h>
////#import <libobjc.A.dylib/NSCoding.h>
@interface SSDownloadManifestResponse : NSObject
-(void)setValidDownloads:(NSArray *)downloads ;
-(id)initWithCoder:(id)coder ;
-(void)encodeWithCoder:(id)coder ;
-(void)dealloc;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(NSArray *)validDownloads;
@end
