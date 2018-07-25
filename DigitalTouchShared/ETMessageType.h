#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import DigitalTouchShared
cy# extern "C" NSString *NSStringFromETMessageType(uint16_t)
(extern "C" NSString *NSStringFromETMessageType(unsigned short))
cy# NSStringFromETMessageType(0)
@"tap"
cy# NSStringFromETMessageType(1)
@"doodle"
cy# NSStringFromETMessageType(2)
@"heartbeat"
cy# NSStringFromETMessageType(3)
@"unknown (3)"
cy# NSStringFromETMessageType(4)
@"unknown (4)"
cy# NSStringFromETMessageType(5)
@"unknown (5)"
cy# NSStringFromETMessageType(6)
@"quick-tap"
cy# NSStringFromETMessageType(7)
@"read-receipt"
cy# NSStringFromETMessageType(8)
@"video"
cy# NSStringFromETMessageType(9)
@"kiss"
cy# NSStringFromETMessageType(10)
@"anger"
cy# NSStringFromETMessageType(11)
@"unknown (11)"
cy# NSStringFromETMessageType(12)
@"unknown (12)"
cy# NSStringFromETMessageType(13)
@"unknown (13)"
cy# NSStringFromETMessageType(14)
@"unknown (14)"
cy# NSStringFromETMessageType(15)
@"unknown (15)"
*/

/* rationale for uint16_t
@interface ETMessage : NSObject
@property (nonatomic, readonly) unsigned short messageType;
@end
*/

typedef NS_ENUM(uint16_t, ETMessageType) {
    ETMessageTypeTap,
    ETMessageTypeDoodle,
    ETMessageTypeHeartbeat,
    /* 3, 4, 5 are undeclared, as shown above.
     * They may have been left empty with the 
     * intention of adding them in a later OS 
     */
    ETMessageTypeQuickTap = 6,
    ETMessageTypeReadReceipt,
    ETMessageTypeVideo,
    ETMessageTypeKiss,
    ETMessageTypeAnger
};
