#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import ChatKit
cy# extern "C" NSString *NSStringFromColorType(char)
(extern "C" NSString *NSStringFromColorType(char))
cy# NSStringFromColorType(0)
@"CKUIColorTypeGreen"
cy# NSStringFromColorType(1)
@"CKUIColorTypeBlue"
cy# NSStringFromColorType(2)
@"CKUIColorTypeSiri"
cy# NSStringFromColorType(3)
@"CKUIColorTypeRed"
cy# NSStringFromColorType(4)
@"CKUIColorTypeWhite"
cy# NSStringFromColorType(5)
null
*/

/* rationale for char
@interface CKUITheme : NSObject
- (id)balloonColorsForColorType:(char)colorType;
@end
*/

// located in ChatKit (private framework)
typedef NS_ENUM(char, CKUIColorType) {
    CKUIColorTypeGreen,
    CKUIColorTypeBlue,
    CKUIColorTypeSiri,
    CKUIColorTypeRed,
    CKUIColorTypeWhite
};
