#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import SpringBoardUIServices
cy# extern "C" NSString *NSStringFromSBUIBiometricMatchMode(NSUInteger)
(extern "C" NSString *NSStringFromSBUIBiometricMatchMode(unsigned long))
cy# NSStringFromSBUIBiometricMatchMode(0)
@"None"
cy# NSStringFromSBUIBiometricMatchMode(1)
@"PreArm"
cy# NSStringFromSBUIBiometricMatchMode(2)
@"PreArmCaptureOnly"
cy# NSStringFromSBUIBiometricMatchMode(3)
@"Unlock"
cy# NSStringFromSBUIBiometricMatchMode(4)
Segmentation fault: 11
*/

/* rationale for NSUInteger
@interface SBUIPasscodeBiometricResource : NSObject
@property (nonatomic, readonly) unsigned long long matchMode; 
@end
*/

typedef NS_ENUM(NSUInteger, SBUIBiometricMatchMode) {
    SBUIBiometricMatchModeNone,
    SBUIBiometricMatchModePreArm,
    SBUIBiometricMatchModePreArmCaptureOnly,
    SBUIBiometricMatchModeUnlock
};
