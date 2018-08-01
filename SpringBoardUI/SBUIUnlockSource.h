#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import SpringBoardUI
cy# extern "C" NSString *NSStringFromUnlockSource(NSUInteger)
(extern "C" NSString *NSStringFromUnlockSource(unsigned long))
cy# NSStringFromUnlockSource(0)
@"None"
cy# NSStringFromUnlockSource(1)
@"LockButton"
cy# NSStringFromUnlockSource(2)
@"Keyboard"
cy# NSStringFromUnlockSource(3)
@"SmartCover"
cy# NSStringFromUnlockSource(4)
@"NotificationCenter"
cy# NSStringFromUnlockSource(5)
@"LiftToWake"
cy# NSStringFromUnlockSource(6)
@"Restoring"
cy# NSStringFromUnlockSource(7)
@"Car"
cy# NSStringFromUnlockSource(8)
@"Plugin"
cy# NSStringFromUnlockSource(9)
@"Alert"
cy# NSStringFromUnlockSource(10)
@"Notification"
cy# NSStringFromUnlockSource(11)
@"HomeButton"
cy# NSStringFromUnlockSource(12)
@"VolumeButton"
cy# NSStringFromUnlockSource(13)
@"OtherButton"
cy# NSStringFromUnlockSource(14)
@"Touch"
cy# NSStringFromUnlockSource(15)
@"Siri"
cy# NSStringFromUnlockSource(16)
@"SystemServiceRequest"
cy# NSStringFromUnlockSource(17)
@"ExternalRequest"
cy# NSStringFromUnlockSource(18)
@"ApplicationRequest"
cy# NSStringFromUnlockSource(19)
@"RemoteAlert"
cy# NSStringFromUnlockSource(20)
@"ACPowerChange"
cy# NSStringFromUnlockSource(21)
@"ChargingAccessoryChange"
cy# NSStringFromUnlockSource(22)
@"Mesa"
cy# NSStringFromUnlockSource(23)
@"SpringBoardRequest"
cy# NSStringFromUnlockSource(24)
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

typedef NS_ENUM(NSUInteger, SBUIUnlockSource) {
    SBUIUnlockSourceNone,
    SBUIUnlockSourceLockButton,
    SBUIUnlockSourceKeyboard,
    SBUIUnlockSourceSmartCover,
    SBUIUnlockSourceNotificationCenter,
    SBUIUnlockSourceLiftToWake,
    SBUIUnlockSourceRestoring,
    SBUIUnlockSourceCar,
    SBUIUnlockSourcePlugin,
    SBUIUnlockSourceAlert,
    SBUIUnlockSourceNotification,
    SBUIUnlockSourceHomeButton,
    SBUIUnlockSourceVolumeButton,
    SBUIUnlockSourceOtherButton,
    SBUIUnlockSourceTouch,
    SBUIUnlockSourceSiri,
    SBUIUnlockSourceSystemServiceRequest,
    SBUIUnlockSourceExternalRequest,
    SBUIUnlockSourceApplicationRequest,
    SBUIUnlockSourceRemoteAlert,
    SBUIUnlockSourceACPowerChange,
    SBUIUnlockSourceChargingAccessoryChange,
    SBUIUnlockSourceMesa,
    SBUIUnlockSourceSpringBoardRequest
};
