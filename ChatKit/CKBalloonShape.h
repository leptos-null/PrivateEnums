#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import ChatKit
cy# extern "C" NSString *NSStringFromBalloonShape(char)
(extern "C" NSString *NSStringFromBalloonShape(char))
cy# NSStringFromBalloonShape(0)
@"CKBalloonShapeRoundRect"
cy# NSStringFromBalloonShape(1)
@"CKBalloonShapeSkinnyRoundRect"
cy# NSStringFromBalloonShape(2)
@"CKBalloonShapeCircle"
cy# NSStringFromBalloonShape(3)
null
*/

/* rationale for char
@interface CKBalloonView : CKBalloonImageView
@property (assign, nonatomic) char balloonShape;
@end
*/

typedef NS_ENUM(char, CKBalloonShape) {
    CKBalloonShapeRoundRect,
    CKBalloonShapeSkinnyRoundRect,
    CKBalloonShapeCircle
};
