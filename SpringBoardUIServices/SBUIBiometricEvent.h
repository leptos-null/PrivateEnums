#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import SpringBoardUIServices
cy# extern "C" NSString *NSStringFromSBUIBiometricEvent(NSUInteger)
(extern "C" NSString *NSStringFromSBUIBiometricEvent(unsigned long))
cy# NSStringFromSBUIBiometricEvent(0)
@"finger off"
cy# NSStringFromSBUIBiometricEvent(1)
@"finger on"
cy# NSStringFromSBUIBiometricEvent(2)
@"request finger off"
cy# NSStringFromSBUIBiometricEvent(3)
@"identity match"
cy# NSStringFromSBUIBiometricEvent(4)
@"bio unlocked"
cy# NSStringFromSBUIBiometricEvent(5)
@"passcode required - generic"
cy# NSStringFromSBUIBiometricEvent(6)
@"passcode required - bio lockout"
cy# NSStringFromSBUIBiometricEvent(7)
@"passcode required - bio expired"
cy# NSStringFromSBUIBiometricEvent(8)
@"passcode required after reboot"
cy# NSStringFromSBUIBiometricEvent(9)
@"identity match failed - dirt on sensor"
cy# NSStringFromSBUIBiometricEvent(10)
@"identity match failed"
cy# NSStringFromSBUIBiometricEvent(11)
@"identity match failed, and caused bio lockout"
cy# NSStringFromSBUIBiometricEvent(12)
Segmentation fault: 11
*/

/* rationale for NSUInteger
@interface SBUIBiometricResource : NSObject
- (void)biometricKitInterface:(id)interface handleEvent:(unsigned long long)event;
@end
*/

typedef NS_ENUM(NSUInteger, SBUIBiometricEvent) {
    SBUIBiometricEventFingerOff,
    SBUIBiometricEventFingerOn,
    SBUIBiometricEventRequestFingerOff,
    SBUIBiometricEventIdentityMatch,
    SBUIBiometricEventBioUnlocked,
    SBUIBiometricEventPasscodeRequiredGeneric,
    SBUIBiometricEventPasscodeRequiredBioLockout,
    SBUIBiometricEventPasscodeRequiredBioExpired,
    SBUIBiometricEventPasscodeRequiredAfterReboot,
    SBUIBiometricEventIdentityMatchFailedDirtOnSensor,
    SBUIBiometricEventIdentityMatchFailed,
    SBUIBiometricEventIdentityMatchFailedCausedBioLockout
};
