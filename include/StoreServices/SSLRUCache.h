#import <StoreServices/SSDoubleLinkedList.h>
@interface SSLRUCache : NSObject
-(unsigned long long)_count;
-(SSDoubleLinkedList *)backingList;
-(void)_removeObjectForKey:(id)key ;
-(void)_addObject:(id)object forKey:(id)key ;
-(id)allObjectsAndKeys;
-(void)setBackingList:(SSDoubleLinkedList *)list ;
-(id)init;
-(unsigned long long)count;
-(id)description;
-(id)objectForKey:(id)key ;
-(void)setObject:(id)object forKey:(id)key ;
-(unsigned long long)maxSize;
-(id/* <OS_dispatch_queue> */)accessQueue;
-(void)setAccessQueue:(id/* <OS_dispatch_queue> */)queue ;
-(id)initWithMaxSize:(unsigned long long)size ;
-(NSMutableDictionary *)backingDictionary;
-(void)setBackingDictionary:(NSMutableDictionary *)dictionary ;
@end
