////#import <libobjc.A.dylib/SSXPCCoding.h>
#import <StoreServices/SSXPCConnection.h>
@interface SSEntity : NSObject
+(long long)_existsMessage;
+(long long)_getExternalValuesMessage;
+(long long)_getValueMessage;
+(long long)_setExternalValuesMessage;
+(long long)_setValuesMessage;
-(id)_initWithPersistentIdentifier:(long long)identifier ;
-(void)_becomeManagedOnConnection:(id)connection ;
-(BOOL)_isManaged;
-(BOOL)setExternalValuesWithDictionary:(id)dictionary ;
-(void)_resetLocalIVars;
-(void)_addCachedExternalValues:(id)values ;
-(void)_addCachedPropertyValues:(id)values ;
-(NSDictionary *)_localExternalValues;
-(void)_setLocalExternalValues:(id)values ;
-(NSDictionary *)_localValues;
-(void)_setLocalValues:(id)values ;
-(void)_setDirtyCachedExternalProperties:(id)properties ;
-(void)_setDirtyCachedProperties:(id)properties ;
-(void)_getValues:(id*)values forProperties:(const id*)properties count:(unsigned long long)count message:(long long)message ;
-(void)getValues:(id*)values forExternalProperties:(const id*)properties count:(unsigned long long)count ;
-(long long)_persistentIdentifier;
-(void)__addCachedExternalValues:(id)values ;
-(void)__addCachedPropertyValues:(id)values ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)equal ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)valueForProperty:(id)property ;
-(void)getValues:(id*)values forProperties:(const id*)properties count:(unsigned long long)count ;
-(id)copyXPCEncoding;
-(void)resetCachedExternalProperties:(const id*)properties count:(unsigned long long)count ;
-(void)resetCachedProperties:(const id*)properties count:(unsigned long long)count ;
-(BOOL)setValue:(id)value forProperty:(id)property ;
-(id)valueForExternalProperty:(id)property ;
-(BOOL)setValuesWithDictionary:(id)dictionary ;
-(BOOL)exists;
@end
