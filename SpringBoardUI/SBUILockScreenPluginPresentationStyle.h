#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import SpringBoardUI
cy# extern "C" NSString *NSStringFromLockScreenPluginPresentationStyle(NSInteger)
(extern "C" NSString *NSStringFromLockScreenPluginPresentationStyle(long))
cy# NSStringFromLockScreenPluginPresentationStyle(0)
@"Undefined"
cy# NSStringFromLockScreenPluginPresentationStyle(1)
@"Overlay"
cy# NSStringFromLockScreenPluginPresentationStyle(2)
@"Normal"
cy# NSStringFromLockScreenPluginPresentationStyle(3)
@"Background"
cy# NSStringFromLockScreenPluginPresentationStyle(4)
@"Stationary"
cy# NSStringFromLockScreenPluginPresentationStyle(5)
null
*/

/* rationale for NSInteger
@interface SBLockScreenPluginAppearanceContext : NSObject
@property (nonatomic, readonly) long long presentationStyle;
@end
*/

typedef NS_ENUM(NSInteger, SBUILockScreenPluginPresentationStyle) {
    SBUILockScreenPluginPresentationStyleUndefined,
    SBUILockScreenPluginPresentationStyleOverlay,
    SBUILockScreenPluginPresentationStyleNormal,
    SBUILockScreenPluginPresentationStyleStationary
};
