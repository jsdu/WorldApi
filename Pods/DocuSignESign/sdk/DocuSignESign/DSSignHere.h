#import <Foundation/Foundation.h>
#import "DSObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "DSMergeField.h"
#import "DSErrorDetails.h"


@protocol DSSignHere
@end

@interface DSSignHere : DSObject

/* Specifies the tool tip text for the tab. [optional]
 */
@property(nonatomic) NSString* name;
/* The label string associated with the tab. [optional]
 */
@property(nonatomic) NSString* tabLabel;
/*  [optional]
 */
@property(nonatomic) NSObject* scaleValue;
/*  [optional]
 */
@property(nonatomic) NSString* optional;
/* Specifies the document ID number that the tab is placed on. This must refer to an existing Document's ID attribute. [optional]
 */
@property(nonatomic) NSString* documentId;
/* Unique for the recipient. It is used by the tab element to indicate which recipient is to sign the Document. [optional]
 */
@property(nonatomic) NSString* recipientId;
/* Specifies the page number on which the tab is located. [optional]
 */
@property(nonatomic) NSString* pageNumber;
/* This indicates the horizontal offset of the object on the page. DocuSign uses 72 DPI when determining position. [optional]
 */
@property(nonatomic) NSString* xPosition;
/* This indicates the vertical offset of the object on the page. DocuSign uses 72 DPI when determining position. [optional]
 */
@property(nonatomic) NSString* yPosition;
/* Anchor text information for a radio button. [optional]
 */
@property(nonatomic) NSString* anchorString;
/* Specifies the X axis location of the tab, in achorUnits, relative to the anchorString. [optional]
 */
@property(nonatomic) NSString* anchorXOffset;
/* Specifies the Y axis location of the tab, in achorUnits, relative to the anchorString. [optional]
 */
@property(nonatomic) NSString* anchorYOffset;
/* Specifies units of the X and Y offset. Units could be pixels, millimeters, centimeters, or inches. [optional]
 */
@property(nonatomic) NSString* anchorUnits;
/* When set to **true**, this tab is ignored if anchorString is not found in the document. [optional]
 */
@property(nonatomic) NSString* anchorIgnoreIfNotPresent;
/*  [optional]
 */
@property(nonatomic) NSString* anchorCaseSensitive;
/*  [optional]
 */
@property(nonatomic) NSString* anchorMatchWholeWord;
/*  [optional]
 */
@property(nonatomic) NSString* anchorHorizontalAlignment;
/* The unique identifier for the tab. The tabid can be retrieved with the [ML:GET call]. [optional]
 */
@property(nonatomic) NSString* tabId;
/* When set to **true**, the sender cannot change any attributes of the recipient. Used only when working with template recipients. [optional]
 */
@property(nonatomic) NSString* templateLocked;
/* When set to **true**, the sender may not remove the recipient. Used only when working with template recipients. [optional]
 */
@property(nonatomic) NSString* templateRequired;
/* For conditional fields this is the TabLabel of the parent tab that controls this tab's visibility. [optional]
 */
@property(nonatomic) NSString* conditionalParentLabel;
/* For conditional fields, this is the value of the parent tab that controls the tab's visibility.\n\nIf the parent tab is a Checkbox, Radio button, Optional Signature, or Optional Initial use \"on\" as the value to show that the parent tab is active. [optional]
 */
@property(nonatomic) NSString* conditionalParentValue;
/* The DocuSign generated custom tab ID for the custom tab to be applied. This can only be used when adding new tabs for a recipient. When used, the new tab inherits all the custom tab properties. [optional]
 */
@property(nonatomic) NSString* customTabId;

@property(nonatomic) DSMergeField* mergeField;
/* Indicates the envelope status. Valid values are:\n\n* sent - The envelope is sent to the recipients. \n* created - The envelope is saved as a draft and can be modified and sent later. [optional]
 */
@property(nonatomic) NSString* status;

@property(nonatomic) DSErrorDetails* errorDetails;

@end
