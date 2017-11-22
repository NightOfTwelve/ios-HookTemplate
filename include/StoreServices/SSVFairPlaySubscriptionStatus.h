////#import <libobjc.A.dylib/SSXPCCoding.h>
@interface SSVFairPlaySubscriptionStatus : NSObject
-(void)setHasSubscriptionLease:(BOOL)lease ;
-(void)setHasSubscriptionSlot:(BOOL)slot ;
-(BOOL)isEqual:(id)equal ;
-(unsigned long long)hash;
-(NSString *)description;
-(BOOL)hasSubscriptionLease;
-(BOOL)hasSubscriptionSlot;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
@end
