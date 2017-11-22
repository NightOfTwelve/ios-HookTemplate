//#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSSQLiteDatabase.h>
@interface SSVCookieStorage : NSObject
+(id)_sharedStorageLocationPath;
+(BOOL)_setupCookieDatabase:(id)database forCookieStorage:(id)storage ;
+(id)sharedInstance;
+(id)sharedStorage;
-(id)initWithStorageLocation:(id)location ;
-(id)_copyCookiesWithUserIdentifier:(id)identifier ;
-(id)_copyCookieDictionaryForURL:(id)l userIdentifier:(id)identifier ;
-(id)_copyCookieObjectsForURL:(id)l userIdentifier:(id)identifier ;
-(void)_cookieDatabaseDidChange;
-(id)_columnNameForCookieProperty:(id)property ;
-(BOOL)_bindStatement:(void* /* sqlite3_stmtRef */)statement withValues:(id)values ;
-(void)_insertCookies:(id)cookies forUserIdentifier:(id)identifier ;
-(id)_allUserIdentifiers;
-(id)_copyPrivateCookiesForURL:(id)l userIdentifier:(id)identifier ;
-(id)_copyPrivateCookieObjectsForURL:(id)l userIdentifier:(id)identifier ;
-(id)_copyCookiesForPreparedSQLStatement:(void* /* sqlite3_stmtRef */)statement ;
-(void)_bindInsertStatement:(void* /* sqlite3_stmtRef */)statement forCookie:(id)cookie userIdentifier:(id)identifier ;
-(id)cookiesForURL:(id)l userIdentifier:(id)identifier ;
-(void)removeAllCookies;
-(void)removeCookiesWithProperties:(id)properties ;
-(void)setCookiesFromCookieStorage:(id)storage ;
-(NSURL *)storageLocation;
-(void)_handleSharedCookieDatabaseDidChangeDarwinNotification;
-(void)synchronizeCookies;
-(id)init;
-(void)dealloc;
-(id)allCookiesForUserIdentifier:(id)identifier ;
-(void)setCookies:(id)cookies forUserIdentifier:(id)identifier ;
-(void)setCookiesForHTTPResponse:(id)response userIdentifier:(id)identifier ;
-(id)cookieHeadersForURL:(id)l userIdentifier:(id)identifier ;
@end
