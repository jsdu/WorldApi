#import <Foundation/Foundation.h>
#import "DSObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol DSEnvelopeIdsRequest
@end

@interface DSEnvelopeIdsRequest : DSObject

/*  [optional]
 */
@property(nonatomic) NSArray* /* NSString */ envelopeIds;
/*  [optional]
 */
@property(nonatomic) NSArray* /* NSString */ transactionIds;

@end
