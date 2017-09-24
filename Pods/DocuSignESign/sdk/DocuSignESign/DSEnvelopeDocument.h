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


#import "DSErrorDetails.h"
#import "DSNameValue.h"
#import "DSSignatureType.h"


@protocol DSEnvelopeDocument
@end

@interface DSEnvelopeDocument : DSObject

/*  [optional]
 */
@property(nonatomic) NSString* attachmentTabId;
/*  [optional]
 */
@property(nonatomic) NSArray<DSSignatureType>* availableDocumentTypes;
/*  [optional]
 */
@property(nonatomic) NSString* containsPdfFormFields;
/*  [optional]
 */
@property(nonatomic) NSString* display;
/*  [optional]
 */
@property(nonatomic) NSArray<DSNameValue>* documentFields;
/*  [optional]
 */
@property(nonatomic) NSString* documentGroup;
/* Specifies the document ID number that the tab is placed on. This must refer to an existing Document's ID attribute. [optional]
 */
@property(nonatomic) NSString* documentId;

@property(nonatomic) DSErrorDetails* errorDetails;
/*  [optional]
 */
@property(nonatomic) NSString* includeInDownload;
/*  [optional]
 */
@property(nonatomic) NSString* name;
/*  [optional]
 */
@property(nonatomic) NSString* order;
/*  [optional]
 */
@property(nonatomic) NSString* pages;
/*  [optional]
 */
@property(nonatomic) NSString* signerMustAcknowledge;
/* When set to **true**, the sender cannot change any attributes of the recipient. Used only when working with template recipients.  [optional]
 */
@property(nonatomic) NSString* templateLocked;
/* When set to **true**, the sender may not remove the recipient. Used only when working with template recipients. [optional]
 */
@property(nonatomic) NSString* templateRequired;
/*  [optional]
 */
@property(nonatomic) NSString* type;
/*  [optional]
 */
@property(nonatomic) NSString* uri;

@end