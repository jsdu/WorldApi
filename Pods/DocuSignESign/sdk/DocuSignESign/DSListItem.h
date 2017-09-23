#import <Foundation/Foundation.h>
#import "DSObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol DSListItem
@end

@interface DSListItem : DSObject

/* Specifies the text that is shown in the dropdown list. [optional]
 */
@property(nonatomic) NSString* text;
/* Specifies the value that is used when the list item is selected. [optional]
 */
@property(nonatomic) NSString* value;
/* When set to **true**, indicates that this item is the default selection shown to a signer. \n\nOnly one selection can be set as the default. [optional]
 */
@property(nonatomic) NSString* selected;

@end
