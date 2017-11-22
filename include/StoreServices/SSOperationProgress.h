//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
////#import <libobjc.A.dylib/NSCopying.h>
@interface SSOperationProgress : NSObject
-(void)setCanPause:(BOOL)pause ;
-(void)setNormalizedCurrentValue:(long long)value ;
-(void)setNormalizedMaxValue:(long long)value ;
-(void)setOperationType:(long long)type ;
-(BOOL)canPause;
-(long long)normalizedCurrentValue;
-(long long)normalizedMaxValue;
-(double)estimatedTimeRemaining;
-(double)changeRate;
-(void)_updateStatisticsFromSnapshots;
-(void)resetSnapshots;
-(void)setChangeRate:(double)rate ;
-(void)setEstimatedTimeRemaining:(double)remaining ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)zone ;
-(void)snapshot;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(long long)units;
-(void)setUnits:(long long)units ;
-(long long)currentValue;
-(void)setCurrentValue:(long long)value ;
-(long long)maxValue;
-(void)setMaxValue:(long long)value ;
-(long long)operationType;
@end
