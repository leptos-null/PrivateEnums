#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import ChatKit
cy# extern "C" NSString *NSStringFromTailShape(char)
(extern "C" NSString *NSStringFromTailShape(char))
cy# NSStringFromTailShape(0)
@"CKBalloonTailShapeNone"
cy# NSStringFromTailShape(1)
@"CKBalloonTailShapeGlyph"
cy# NSStringFromTailShape(2)
@"CKBalloonTailShapeBubbles"
cy# NSStringFromTailShape(3)
null
*/

/* rationale for char
@interface CKBalloonView : CKBalloonImageView
@property (assign, nonatomic) char balloonTailShape;
@end
*/

typedef NS_ENUM(char, CKBalloonTailShape) {
    CKBalloonTailShapeNone,
    CKBalloonTailShapeGlyph,
    CKBalloonTailShapeBubbles
};
