#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import SpringBoardUI
cy# extern "C" NSString *NSStringFromLockScreenCapabilities(NSUInteger)
(extern "C" NSString *NSStringFromLockScreenCapabilities(unsigned long))
cy# NSStringFromLockScreenCapabilities(1 << 0)
throw #"*** -[__NSArrayM insertObject:atIndex:]: object cannot be nil"
cy# NSStringFromLockScreenCapabilities(1 << 1)
@"Siri"
cy# NSStringFromLockScreenCapabilities(1 << 2)
@"Camera"
cy# NSStringFromLockScreenCapabilities(1 << 3)
@"Unlock"
cy# NSStringFromLockScreenCapabilities(1 << 4)
@"Logout"
cy# NSStringFromLockScreenCapabilities(1 << 5)
@"TouchID"
cy# NSStringFromLockScreenCapabilities(1 << 6)
@"MediaControls"
cy# NSStringFromLockScreenCapabilities(1 << 7)
@"TodayCenter"
cy# NSStringFromLockScreenCapabilities(1 << 8)
@"ControlCenter"
cy# NSStringFromLockScreenCapabilities(1 << 9)
@"NotificationCenter"
cy# NSStringFromLockScreenCapabilities(1 << 10)
throw #"*** -[__NSArrayM insertObject:atIndex:]: object cannot be nil"
*/

/* rationale for NSUInteger
@interface SBLockScreenPluginAppearanceContext : NSObject
@property (nonatomic, readonly) unsigned long long restrictedCapabilities;
@end
*/

typedef NS_OPTIONS(NSUInteger, SBUILockScreenCapabilities) {
    SBUILockScreenCapabilitiesSiri               = 1 << 1,
    SBUILockScreenCapabilitiesCamera             = 1 << 2,
    SBUILockScreenCapabilitiesUnlock             = 1 << 3,
    SBUILockScreenCapabilitiesLogout             = 1 << 4,
    SBUILockScreenCapabilitiesTouchID            = 1 << 5,
    SBUILockScreenCapabilitiesMediaControls      = 1 << 6,
    SBUILockScreenCapabilitiesTodayCenter        = 1 << 7,
    SBUILockScreenCapabilitiesControlCenter      = 1 << 8,
    SBUILockScreenCapabilitiesNotificationCenter = 1 << 9
};
