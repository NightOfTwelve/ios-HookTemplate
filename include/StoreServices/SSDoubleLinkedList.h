#import <StoreServices/SSDoubleLinkedListNode.h>
@interface SSDoubleLinkedList : NSObject
-(id)insertObject:(id)object ;
-(NSArray *)allNodes;
-(NSString *)listIdentifier;
-(void)setListIdentifier:(NSString *)identifier ;
-(id)appendObject:(id)object ;
-(id)init;
-(unsigned long long)count;
-(id)description;
-(void)insertNode:(id)node ;
-(void)removeNode:(id)node ;
-(void)appendNode:(id)node ;
-(SSDoubleLinkedListNode *)head;
-(SSDoubleLinkedListNode *)tail;
-(void)setTail:(SSDoubleLinkedListNode *)tail ;
-(void)setHead:(SSDoubleLinkedListNode *)head ;
@end
