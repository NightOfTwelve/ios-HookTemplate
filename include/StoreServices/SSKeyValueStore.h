#import <StoreServices/SSXPCConnection.h>
#import <StoreServices/SSKeyValueStoreDatabase.h>
@interface SSKeyValueStore : NSObject
+(BOOL)isLocalReadable;
-(void)setValuesWithDictionary:(id)dictionary forDomain:(id)domain completionBlock:(/*^block*/id)block ;
-(void)getValuesForDomain:(id)domain keys:(const id*)keys count:(unsigned long long)count usingBlock:(/*^block*/id)block ;
-(BOOL)isLocalReadable;
-(void)readUsingSessionBlock:(/*^block*/id)block ;
-(void)modifyUsingTransactionBlock:(/*^block*/id)block ;
-(void)setValue:(id)value forDomain:(id)domain key:(id)key ;
-(id)copyAccountDictionaryForDomain:(id)domain ;
-(id)iTunesValueForKey:(id)key usedDomain:(id*)domain ;
-(void)removeAccountFromDomain:(id)domain ;
-(void)removeAllValuesForDomain:(id)domain ;
-(void)removeAllValuesWithCompletionBlock:(/*^block*/id)block ;
-(void)setValuesWithDictionary:(id)dictionary forDomain:(id)domain ;
-(id)copyAccounts;
-(BOOL)isLocalWritable;
-(id)init;
-(void)dealloc;
-(void)getValueForDomain:(id)domain key:(id)key usingBlock:(/*^block*/id)block ;
-(void)removeAllValuesForDomain:(id)domain completionBlock:(/*^block*/id)block ;
-(void)setValue:(id)value forDomain:(id)domain key:(id)key completionBlock:(/*^block*/id)block ;
@end
