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


#import "DSEnvelopeEvent.h"
#import "DSRecipientEvent.h"


@protocol DSEventNotification
@end

@interface DSEventNotification : DSObject

/* A list of envelope-level event statuses that will trigger Connect to send updates to the endpoint specified in the `url` property.   To receive notifications, you must include either an `envelopeEvents` node or a `recipientEvents` node. You do not need to specify both. [optional]
 */
@property(nonatomic) NSArray<DSEnvelopeEvent>* envelopeEvents;
/* When set to **true**, the Connect Service includes the Certificate of Completion with completed envelopes.  [optional]
 */
@property(nonatomic) NSString* includeCertificateOfCompletion;
/* When set to **true**, this tells the Connect service to send the DocuSign signedby certificate as part of the outgoing SOAP xml. This appears in the XML as wsse:BinarySecurityToken. [optional]
 */
@property(nonatomic) NSString* includeCertificateWithSoap;
/* When set to **true**, the Document Fields associated with envelope documents are included in the data. Document Fields are optional custom name-value pairs added to documents using the API.  [optional]
 */
@property(nonatomic) NSString* includeDocumentFields;
/* When set to **true**, the PDF documents are included in the message along with the updated XML.  [optional]
 */
@property(nonatomic) NSString* includeDocuments;
/* When set to **true**, this tells the Connect Service to include the void reason, as entered by the person that voided the envelope, in the message.  [optional]
 */
@property(nonatomic) NSString* includeEnvelopeVoidReason;
/* When set to **true**, the sender account ID is included as a envelope custom field in the data.  [optional]
 */
@property(nonatomic) NSString* includeSenderAccountAsCustomField;
/* When set to **true**, the envelope time zone information is included in the message.  [optional]
 */
@property(nonatomic) NSString* includeTimeZone;
/* When set to **true**, logging is turned on for envelope events on the Web Console Connect page.  [optional]
 */
@property(nonatomic) NSString* loggingEnabled;
/* A list of recipient event statuses that will trigger Connect to send updates to   the endpoint specified in the url property.  To receive notifications, you must include either an `envelopeEvents` node or a `recipientEvents` node. You do not need to specify both. [optional]
 */
@property(nonatomic) NSArray<DSRecipientEvent>* recipientEvents;
/* When set to **true**, the DocuSign Connect service checks that the message was received and retries on failures.  [optional]
 */
@property(nonatomic) NSString* requireAcknowledgment;
/* When set to **true**, messages are signed with an X509 certificate. This provides support for 2-way SSL in the envelope.  [optional]
 */
@property(nonatomic) NSString* signMessageWithX509Cert;
/* This lists the namespace in the SOAP listener provided. [optional]
 */
@property(nonatomic) NSString* soapNameSpace;
/* Specifies the endpoint to which envelope updates are sent. Udpates are sent as XML unless `useSoapInterface` property is set to **true**. [optional]
 */
@property(nonatomic) NSString* url;
/* When set to **true**, this tells the Connect service that the user's endpoint has implemented a SOAP interface.  [optional]
 */
@property(nonatomic) NSString* useSoapInterface;

@end