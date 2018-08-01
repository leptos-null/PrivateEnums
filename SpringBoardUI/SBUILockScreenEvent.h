#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import SpringBoardUI
cy# extern "C" NSString *NSStringFromLockScreenEvent(NSUInteger)
(extern "C" NSString *NSStringFromLockScreenEvent(unsigned long))
cy# NSStringFromLockScreenEvent(0)
@"None"
cy# NSStringFromLockScreenEvent(1)
@"Unlock"
cy# NSStringFromLockScreenEvent(2)
@"ScreenOff"
cy# NSStringFromLockScreenEvent(3)
@"HomeButton"
cy# NSStringFromLockScreenEvent(4)
@"LockButton"
cy# NSStringFromLockScreenEvent(5)
@"VolumeUp"
cy# NSStringFromLockScreenEvent(6)
@"VolumeDown"
cy# NSStringFromLockScreenEvent(7)
@"HeadsetButton"
cy# NSStringFromLockScreenEvent(8)
@"HeadsetButtonHeld"
cy# NSStringFromLockScreenEvent(9)
null
*/

/* rationale for NSUInteger
The proof function is not called
from within the framework, and there
are not any suggestive method names. 
Psychology suggests that similarities
between NSUI and SBUI would convince 
a person to use NSUInteger as the type
*/

typedef NS_ENUM(NSUInteger, SBUILockScreenEvent) {
    SBUILockScreenEventNone,
    SBUILockScreenEventUnlock,
    SBUILockScreenEventScreenOff,
    SBUILockScreenEventHomeButton,
    SBUILockScreenEventLockButton,
    SBUILockScreenEventVolumeUp,
    SBUILockScreenEventVolumeDown,
    SBUILockScreenEventHeadsetButton,
    SBUILockScreenEventHeadsetButtonHeld
};
