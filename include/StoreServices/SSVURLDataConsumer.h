@interface SSVURLDataConsumer : NSObject
+(id)consumer;
-(id)objectForData:(id)data response:(id)response error:(id*)error ;
@end
