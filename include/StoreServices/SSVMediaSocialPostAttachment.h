//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/NSCopying.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
@interface SSVMediaSocialPostAttachment : NSObject
-(void)setAlbumIdentifier:(NSString *)identifier ;
-(void)setArtists:(NSArray *)artists ;
-(void)setAssetData:(NSData *)data ;
-(void)setAssetURL:(NSURL *)l ;
-(void)setDeletesAssetWhenFinished:(BOOL)finished ;
-(void)setPreviewFrameTimestamp:(double)timestamp ;
-(id)childAttachmentForRelationship:(id)relationship ;
-(void)enumerateChildAttachmentsUsingBlock:(/*^block*/id)block ;
-(void)setChildAttachment:(id)attachment forRelationship:(id)relationship ;
-(NSString *)albumIdentifier;
-(NSArray *)artists;
-(NSData *)assetData;
-(double)previewFrameTimestamp;
-(BOOL)deletesAssetWhenFinished;
-(void)setTitle:(NSString *)title ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)zone ;
-(void)setSubtitle:(NSString *)subtitle ;
-(NSString *)subtitle;
-(NSString *)UTI;
-(void)setUTI:(NSString *)i ;
-(BOOL)isExplicitContent;
-(void)setExplicitContent:(BOOL)content ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(NSString *)categoryName;
-(void)setCategoryName:(NSString *)name ;
-(NSURL *)assetURL;
-(NSString *)attachmentDescription;
-(void)setAttachmentDescription:(NSString *)description ;
-(long long)attachmentType;
@end
