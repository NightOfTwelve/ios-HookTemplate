////#import <libobjc.A.dylib/SSXPCCoding.h>
@interface SSDownloadMonitorItem : NSObject
-(NSString *)representativeTitle;
-(void)setRepresentativeTitle:(NSString *)title ;
-(long long)totalNumberOfItems;
-(void)setTotalNumberOfItems:(long long)items ;
-(unsigned long long)transferTypes;
-(void)setTransferTypes:(unsigned long long)types ;
-(void)dealloc;
-(void)setClientIdentifier:(NSString *)identifier ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(void)setStatusString:(NSString *)string ;
-(NSString *)clientIdentifier;
-(void)setItemState:(long long)state ;
-(long long)itemState;
-(NSString *)statusString;
@end
