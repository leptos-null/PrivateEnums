#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import SpringBoardUI
cy# extern "C" NSString *NSStringFromLockScreenElement(NSInteger)
(extern "C" NSString *NSStringFromLockScreenElement(long))
cy# NSStringFromLockScreenElement(0)
@"None"
cy# NSStringFromLockScreenElement(1)
@"StatusBar"
cy# NSStringFromLockScreenElement(2)
@"TimeAndDate"
cy# NSStringFromLockScreenElement(3)
@"Subtitle"
cy# NSStringFromLockScreenElement(4)
@"Timer"
cy# NSStringFromLockScreenElement(5)
null
*/

/* rationale for NSInteger
@interface SBLockScreenElementOverride : NSObject
@property (assign, nonatomic) long long element;
@end
*/

typedef NS_ENUM(NSInteger, SBUILockScreenElement) {
    SBUILockScreenElementNone,
    SBUILockScreenElementStatusBar,
    SBUILockScreenElementTimeAndDate,
    SBUILockScreenElementSubtitle,
    SBUILockScreenElementTimer
};
