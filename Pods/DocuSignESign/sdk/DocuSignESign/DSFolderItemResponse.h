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


#import "DSFolderItemV2.h"


@protocol DSFolderItemResponse
@end

@interface DSFolderItemResponse : DSObject

/* The last position in the result set.  [optional]
 */
@property(nonatomic) NSString* endPosition;
/* A list of the envelopes in the specified folder or folders.  [optional]
 */
@property(nonatomic) NSArray<DSFolderItemV2>* folderItems;
/* The URI to the next chunk of records based on the search request. If the endPosition is the entire results of the search, this is null.  [optional]
 */
@property(nonatomic) NSString* nextUri;
/* The postal code for the billing address. [optional]
 */
@property(nonatomic) NSString* previousUri;
/* The number of results returned in this response.  [optional]
 */
@property(nonatomic) NSString* resultSetSize;
/* Starting position of the current result set. [optional]
 */
@property(nonatomic) NSString* startPosition;
/*  [optional]
 */
@property(nonatomic) NSString* totalRows;

@end