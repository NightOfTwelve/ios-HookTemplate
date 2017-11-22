//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCoding.h>
////#import <libobjc.A.dylib/NSCopying.h>
////#import <libobjc.A.dylib/NSMutableCopying.h>
////#import <libobjc.A.dylib/NSSecureCoding.h>
#import <StoreServices/SSVPlayActivityEventContainerIDs.h>
#import <StoreServices/SSVPlayActivityEventItemIDs.h>
@interface SSVPlayActivityEvent : NSObject
+(BOOL)supportsSecureCoding;
-(double)itemEndTime;
-(unsigned long long)endReasonType;
-(double)itemDuration;
-(BOOL)isSBEnabled;
-(double)itemStartTime;
-(NSData *)trackInfo;
-(NSTimeZone *)eventTimeZone;
-(NSString *)personalizedContainerID;
-(unsigned long long)reasonHintType;
-(SSVPlayActivityEventItemIDs *)itemIDs;
-(SSVPlayActivityEventContainerIDs *)containerIDs;
-(Class)_mutableCopyClass;
-(id)init;
-(id)initWithCoder:(id)coder ;
-(void)encodeWithCoder:(id)coder ;
-(BOOL)isEqual:(id)equal ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)zone ;
-(NSString *)buildVersion;
-(id)mutableCopyWithZone:(NSZone*)zone ;
-(unsigned long long)sourceType;
-(long long)version;
-(unsigned long long)eventType;
-(NSString *)containerID;
-(NSDate *)eventDate;
-(unsigned long long)itemType;
-(NSData *)timedMetadata;
-(NSString *)requestingBundleIdentifier;
-(NSString *)requestingBundleVersion;
-(unsigned long long)containerType;
-(unsigned long long)storeAccountID;
-(NSString *)externalID;
-(NSString *)featureName;
-(NSString *)storeID;
-(unsigned long long)mediaType;
-(long long)persistentID;
-(NSData *)recommendationData;
-(NSString *)storeFrontID;
-(NSString *)deviceName;
-(NSData *)dataRepresentation;
-(BOOL)isOffline;
-(id)initWithDataRepresentation:(id)representation ;
@end
