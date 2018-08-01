#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import SpringBoardUI
cy# extern "C" NSString *NSStringFromLockScreenPluginNotificationBehavior(NSInteger)
(extern "C" NSString *NSStringFromLockScreenPluginNotificationBehavior(long))
cy# NSStringFromLockScreenPluginNotificationBehavior(0)
@"Default"
cy# NSStringFromLockScreenPluginNotificationBehavior(1)
@"Disabled"
cy# NSStringFromLockScreenPluginNotificationBehavior(2)
@"Temporary"
cy# NSStringFromLockScreenPluginNotificationBehavior(3)
@"Exclusive"
cy# NSStringFromLockScreenPluginNotificationBehavior(4)
null
*/

/* rationale for NSInteger
@interface SBLockScreenPluginAppearanceContext : NSObject
@property (nonatomic, readonly) long long notificationBehavior;
@end
*/

typedef NS_ENUM(NSInteger, SBUILockScreenPluginNotificationBehavior) {
    SBUILockScreenPluginNotificationBehaviorDefault,
    SBUILockScreenPluginNotificationBehaviorDisabled,
    SBUILockScreenPluginNotificationBehaviorTemporary,
    SBUILockScreenPluginNotificationBehaviorExclusive
};
