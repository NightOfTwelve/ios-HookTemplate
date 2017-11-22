//#import <StoreServices/StoreServices-Structs.h>
@interface SSVFairPlaySubscriptionController : NSObject
-(BOOL)stopSubscriptionLease:(id*)lease ;
-(BOOL)importSubscriptionKeyBagData:(id)data leaseInfoData:(id)data2 returningError:(id*)error ;
-(id)_subscriptionStatusForFPSubscriptionInfo:(char[/*?*/] /* FPSubscriptionInfo_ */)info ;
-(void)_enumerateSubscriptionInfoUsingBlock:(/*^block*/id)block ;
-(id)_accountUniqueIdentifierToSubscriptionStatusWithFPSubscriptionInfoList:(void* /* FPSubscriptionInfo_* */)list subscriptionInfoListLength:(unsigned)length ;
-(void)_notifySubscriptionStatusDidChange;
-(void)enumerateAccountSubscriptionStatusUsingBlock:(/*^block*/id)block ;
-(BOOL)generateSubscriptionBagRequestWithAccountUniqueIdentifier:(unsigned long long)identifier transactionType:(unsigned)type machineIDData:(id)data returningSubscriptionBagData:(id*)data4 error:(id*)error ;
-(BOOL)generateSubscriptionLeaseRequestWithAccountUniqueID:(unsigned long long)d transactionType:(unsigned)type certificateData:(id)data assetIDData:(id)data4 returningLeaseData:(id*)data5 subscriptionBagData:(id*)data6 error:(id*)error ;
-(BOOL)importSubscriptionKeyBagData:(id)data returningError:(id*)error ;
-(id)init;
-(void)dealloc;
-(id)subscriptionStatusForAccountUniqueIdentifier:(unsigned long long)identifier ;
@end
