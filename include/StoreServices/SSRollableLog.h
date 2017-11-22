#import <StoreServices/SSLogFileOptions.h>
@interface SSRollableLog : NSObject
-(id)initWithLogOptions:(id)options ;
-(void)_openLogFile;
-(void)_checkLogFileSize;
-(void)_closeLogFile;
-(id)_logFilePathWithIndex:(long long)index ;
-(id)_activeLogFilePath;
-(void)_rollLogFiles;
-(SSLogFileOptions *)logOptions;
-(void)dealloc;
-(void)writeString:(id)string ;
@end
