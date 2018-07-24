#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import ChatKit
cy# extern "C" NSString *NSStringFromBalloonStyle(char)
(extern "C" NSString *NSStringFromBalloonStyle(char))
cy# NSStringFromBalloonStyle(0)
@"CKBalloonStyleFilled"
cy# NSStringFromBalloonStyle(1)
@"CKBalloonStyleStroked"
cy# NSStringFromBalloonStyle(2)
null
*/

/* rationale for char
 * The other ChatKit enums have been chars.
 * The function mentioned above is used in
 * NSStringFromBalloonDescriptor(id), and
 * the x86_64 assembly from the simulator
 * binary is difficult for me to read
 */

typedef NS_ENUM(char, CKBalloonStyle) {
    CKBalloonStyleFilled,
    CKBalloonStyleStroked
};
