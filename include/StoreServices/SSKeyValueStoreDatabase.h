#import <StoreServices/SSSQLiteDatabase.h>
@interface SSKeyValueStoreDatabase : NSObject
-(id)initReadOnly;
-(void)readUsingSessionBlock:(/*^block*/id)block ;
-(void)modifyUsingTransactionBlock:(/*^block*/id)block ;
-(void)modifyAsyncUsingTransactionBlock:(/*^block*/id)block ;
-(id)_initReadOnly:(BOOL)only ;
-(void)_dispatchBlockAsync:(/*^block*/id)async ;
-(void)readAsyncUsingSessionBlock:(/*^block*/id)block ;
-(id)init;
-(void)dealloc;
@end
