//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSLogFileOptions : NSObject
-(NSString *)logDirectoryPath;
-(void)setLogDirectoryPath:(NSString *)path ;
-(NSString *)logFileBaseName;
-(void)setLogFileBaseName:(NSString *)name ;
-(unsigned long long)maxLogFileSize;
-(void)setMaxLogFileSize:(unsigned long long)size ;
-(long long)maxNumberOfLogFiles;
-(void)setMaxNumberOfLogFiles:(long long)files ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone ;
@end
