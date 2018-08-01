#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import SpringBoardUI
cy# extern "C" NSString *NSStringFromLockSource(NSUInteger)
(extern "C" NSString *NSStringFromLockSource(unsigned long))
cy# NSStringFromLockSource(0)
@"None"
cy# NSStringFromLockSource(1)
@"LockButton"
cy# NSStringFromLockSource(2)
@"Keyboard"
cy# NSStringFromLockSource(3)
@"SmartCover"
cy# NSStringFromLockSource(4)
@"NotificationCenter"
cy# NSStringFromLockSource(5)
@"LiftToWake"
cy# NSStringFromLockSource(6)
@"Restoring"
cy# NSStringFromLockSource(7)
@"Car"
cy# NSStringFromLockSource(8)
@"Plugin"
cy# NSStringFromLockSource(9)
@"Alert"
cy# NSStringFromLockSource(10)
@"Notification"
cy# NSStringFromLockSource(11)
@"IdleTimer"
cy# NSStringFromLockSource(12)
@"Boot"
cy# NSStringFromLockSource(13)
@"Logout"
cy# NSStringFromLockSource(14)
@"Activation"
cy# NSStringFromLockSource(15)
@"Authentication"
cy# NSStringFromLockSource(16)
@"ThermalTrap"
cy# NSStringFromLockSource(17)
@"Blocked"
cy# NSStringFromLockSource(18)
@"LostMode"
cy# NSStringFromLockSource(19)
@"RemoteLock"
cy# NSStringFromLockSource(20)
Segmentation fault: 11
*/

/* rationale for NSUInteger
The proof function is not called
from within the framework, and there
are not any suggestive method names. 
Psychology suggests that similarities
between NSUI and SBUI would convince 
a person to use NSUInteger as the type
*/

typedef NS_ENUM(NSUInteger, SBUILockSource) {
    SBUILockSourceNone,
    SBUILockSourceLockButton,
    SBUILockSourceKeyboard,
    SBUILockSourceSmartCover,
    SBUILockSourceNotificationCenter,
    SBUILockSourceLiftToWake,
    SBUILockSourceRestoring,
    SBUILockSourceCar,
    SBUILockSourcePlugin,
    SBUILockSourceAlert,
    SBUILockSourceNotification,
    SBUILockSourceIdleTimer,
    SBUILockSourceBoot,
    SBUILockSourceLogout,
    SBUILockSourceActivation,
    SBUILockSourceAuthentication,
    SBUILockSourceThermalTrap,
    SBUILockSourceBlocked,
    SBUILockSourceLostMode,
    SBUILockSourceRemoteLock
};
