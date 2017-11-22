@interface SSDoubleLinkedListNode : NSObject
-(NSString *)listIdentifier;
-(void)setListIdentifier:(NSString *)identifier ;
-(id)init;
-(SSDoubleLinkedListNode *)next;
-(SSDoubleLinkedListNode *)previous;
-(id)object;
-(void)setObject:(id)object ;
-(id)initWithObject:(id)object ;
-(void)setPrevious:(SSDoubleLinkedListNode *)previous ;
-(void)setNext:(SSDoubleLinkedListNode *)next ;
@end
