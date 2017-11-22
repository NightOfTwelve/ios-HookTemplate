//#import <Foundation/NSOperation.h>
@interface SSVSecureKeyDeliveryRequestOperation : NSObject /*NSOperation*/
-(void)_sendResponseBlockWithError:(id)error ;
-(id)_streamingKeyDictionaryForID:(long long)d URI:(id)i serverPlaybackContextData:(id)data ;
-(id)_streamingRequestDictionaryWithStreamingKeyDictionaries:(id)dictionaries ;
-(id)_contentKeyContextForStreamingKeyID:(long long)d streamingKeyDictionaries:(id)dictionaries error:(id*)error ;
-(NSNumber *)rentalId;
-(id /*AVAssetResourceLoadingRequest **/)resourceLoadingRequest;
-(BOOL)isITunesStoreRequest;
-(void)setRentalId:(NSNumber *)id ;
-(id)init;
-(void)start;
-(void)main;
-(id)responseBlock;
-(NSURL *)certificateURL;
-(void)setITunesStoreRequest:(BOOL)request ;
-(NSURL *)keyServerURL;
-(void)setCertificateURL:(NSURL *)l ;
-(void)setKeyServerURL:(NSURL *)l ;
-(void)setResourceLoadingRequest:(id /*AVAssetResourceLoadingRequest **/)request ;
-(void)setResponseBlock:(id)block ;
@end
