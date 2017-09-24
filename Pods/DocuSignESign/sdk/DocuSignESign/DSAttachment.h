#import <Foundation/Foundation.h>
#import "DSObject.h"

/**
* DocuSign REST API
* The DocuSign REST API provides you with a powerful, convenient, and simple Web services API for interacting with DocuSign.
*
* OpenAPI spec version: v2
* Contact: devcenter@docusign.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/




@protocol DSAttachment
@end

@interface DSAttachment : DSObject

/*  [optional]
 */
@property(nonatomic) NSString* accessControl;
/*  [optional]
 */
@property(nonatomic) NSString* attachmentId;
/* Specifies the type of the attachment for the recipient. [optional]
 */
@property(nonatomic) NSString* attachmentType;
/*  [optional]
 */
@property(nonatomic) NSString* data;
/*  [optional]
 */
@property(nonatomic) NSString* label;
/*  [optional]
 */
@property(nonatomic) NSString* name;
/*  [optional]
 */
@property(nonatomic) NSString* remoteUrl;

@end