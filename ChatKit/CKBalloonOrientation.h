#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import ChatKit
cy# extern "C" NSString *NSStringFromBalloonOrientation(char)
(extern "C" NSString *NSStringFromBalloonOrientation(char))
cy# NSStringFromBalloonOrientation(0)
@"CKBalloonOrientationLeft"
cy# NSStringFromBalloonOrientation(1)
@"CKBalloonOrientationRight"
cy# NSStringFromBalloonOrientation(2)
null
*/

/* rationale for char
@interface CKBalloonView : CKBalloonImageView
@property (assign, nonatomic) char orientation;
@end
*/

typedef NS_ENUM(char, CKBalloonOrientation) {
    CKBalloonOrientationLeft,
    CKBalloonOrientationRight
};
