#import <StoreServices/SSPurchasableItem.h>
@interface SSPurchasableAppItem : SSPurchasableItem
+(id)allPropertyKeys;
+(id)itemsFromDatabase:(id)database forAccount:(long long)account matching:(id)matching sortedBy:(id)by sortAscending:(BOOL)ascending ;
+(id)allItemsFromDatabase:(id)database forAccount:(long long)account sortedBy:(id)by sortAscending:(BOOL)ascending ;
+(id)sortByNameKey;
+(id)databaseTable;
-(id)iconURL;
-(long long)contentRatingFlags;
-(id)iconTitle;
-(BOOL)isFamilyShareable;
-(BOOL)isNewsstand;
-(id)longTitle;
-(unsigned)minimumOS;
-(BOOL)supportsIPad;
-(BOOL)supportsIPhone;
-(id)redownloadParams;
-(id)humanReadableVersion;
-(long long)iTunesVersion;
-(id)description;
-(id)category;
-(id)companyName;
-(BOOL)hasMessagesExtension;
-(id)accountIdentifier;
-(id)bundleID;
@end
