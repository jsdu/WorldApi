#import <Foundation/Foundation.h>
#import "DSObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "DSMergeField.h"


@protocol DSTabMetadata
@end

@interface DSTabMetadata : DSObject

/* The font to be used for the tab value. Supported Fonts: Arial, Arial, ArialNarrow, Calibri, CourierNew, Garamond, Georgia, Helvetica,   LucidaConsole, Tahoma, TimesNewRoman, Trebuchet, Verdana, MSGothic, MSMincho, Default. [optional]
 */
@property(nonatomic) NSString* font;
/* When set to **true**, the information in the tab is bold. [optional]
 */
@property(nonatomic) NSString* bold;
/* When set to **true**, the information in the tab is italic. [optional]
 */
@property(nonatomic) NSString* italic;
/* When set to **true**, the information in the tab is underlined. [optional]
 */
@property(nonatomic) NSString* underline;
/* The font color used for the information in the tab.\n\nPossible values are: Black, BrightBlue, BrightRed, DarkGreen, DarkRed, Gold, Green, NavyBlue, Purple, or White. [optional]
 */
@property(nonatomic) NSString* fontColor;
/* The font size used for the information in the tab.\n\nPossible values are: Size7, Size8, Size9, Size10, Size11, Size12, Size14, Size16, Size18, Size20, Size22, Size24, Size26, Size28, Size36, Size48, or Size72. [optional]
 */
@property(nonatomic) NSString* fontSize;
/* Height of the tab in pixels. [optional]
 */
@property(nonatomic) NSString* height;
/* Width of the tab in pixels. [optional]
 */
@property(nonatomic) NSString* width;
/* The DocuSign generated custom tab ID for the custom tab to be applied. This can only be used when adding new tabs for a recipient. When used, the new tab inherits all the custom tab properties. [optional]
 */
@property(nonatomic) NSString* customTabId;
/* The original value of the tab. [optional]
 */
@property(nonatomic) NSString* initialValue;
/* When set to **true**, the tab is included in e-mails related to the envelope on which it exists. This applies to only specific tabs. [optional]
 */
@property(nonatomic) NSString* includedInEmail;
/* When set to **true**, disables the auto sizing of single line text boxes in the signing screen when the signer enters data. If disabled users will only be able enter as much data as the text box can hold. By default this is false. This property only affects single line text boxes. [optional]
 */
@property(nonatomic) NSString* disableAutoSize;
/* When set to **true**, the field appears normally while the recipient is adding or modifying the information in the field, but the data is not visible (the characters are hidden by asterisks) to any other signer or the sender.\n\nWhen an envelope is completed the information is available to the sender through the Form Data link in the DocuSign Console.\n\nThis setting applies only to text boxes and does not affect list boxes, radio buttons, or check boxes. [optional]
 */
@property(nonatomic) NSString* concealValueOnDocument;
/* When set to **true**, the signer cannot change the data of the custom tab. [optional]
 */
@property(nonatomic) NSString* locked;
/* When set to **true**, the signer is required to fill out this tab [optional]
 */
@property(nonatomic) NSString* required;
/* When set to **true**, this custom tab is shared. [optional]
 */
@property(nonatomic) NSString* shared;
/* If the tab is a list, this represents the values that are possible for the tab. [optional]
 */
@property(nonatomic) NSArray* /* NSString */ items;
/* The label string associated with the tab. [optional]
 */
@property(nonatomic) NSString* tabLabel;
/* The maximum number of entry characters supported by the custom tab. [optional]
 */
@property(nonatomic) NSString* maximumLength;
/* An optional string that is used to auto-match tabs to strings located in the documents of an envelope. [optional]
 */
@property(nonatomic) NSString* anchor;
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
@property(nonatomic) NSString* anchorMatchWholeWord;
/*  [optional]
 */
@property(nonatomic) NSString* anchorCaseSensitive;
/*  [optional]
 */
@property(nonatomic) NSString* anchorHorizontalAlignment;
/*  [optional]
 */
@property(nonatomic) NSString* name;
/* The type of this tab. Values are: Approve, CheckBox, Company, Date, DateSigned,	Decline, Email,	EmailAddress, EnvelopeId, FirstName, Formula, FullName,	InitialHere, InitialHereOptional, LastName, List, Note, Number,	Radio, SignerAttachment, SignHere, SignHereOptional, Ssn, Text, Title, Zip5, or Zip5Dash4. [optional]
 */
@property(nonatomic) NSString* type;
/* The message displayed if the custom tab fails input validation (either custom of embedded). [optional]
 */
@property(nonatomic) NSString* validationMessage;
/* A regular expressionn used to validate input for the tab. [optional]
 */
@property(nonatomic) NSString* validationPattern;
/* The userId of the DocuSign user who last modified this object. [optional]
 */
@property(nonatomic) NSString* lastModifiedByUserId;
/* The User Name of the DocuSign user who last modified this object. [optional]
 */
@property(nonatomic) NSString* lastModifiedByDisplayName;
/* The UTC DateTime this object was last modified. This is in ISO8601 format. [optional]
 */
@property(nonatomic) NSString* lastModified;
/* The userId of the DocuSign user who created this object. [optional]
 */
@property(nonatomic) NSString* createdByUserId;
/* The user name of the DocuSign user who created this object. [optional]
 */
@property(nonatomic) NSString* createdByDisplayName;
/* When set to **true**, the custom tab is editable. Otherwise the custom tab cannot be modified. [optional]
 */
@property(nonatomic) NSString* editable;

@property(nonatomic) DSMergeField* mergeField;

@end