#import <StoreServices/SSDoubleLinkedListNode.h>
@interface SSLRUCacheItem : SSDoubleLinkedListNode
-(id)initWithKey:(id)key object:(id)object ;
-(id/* <NSCopying> */)key;
-(void)setKey:(id/* <NSCopying> */)key ;
@end
