@protocol SSVSAPContext
-(BOOL)verifyData:(id)data withSignature:(id)signature error:(id*)error ;
-(id)signatureWithData:(id)data error:(id*)error ;
@end
