#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import SpringBoardUI
cy# extern "C" NSString *NSStringFromLockScreenPluginBackgroundStyle(NSInteger)
(extern "C" NSString *NSStringFromLockScreenPluginBackgroundStyle(long))
cy# NSStringFromLockScreenPluginBackgroundStyle(0)
@"None"
cy# NSStringFromLockScreenPluginBackgroundStyle(1)
@"MediumDark"
cy# NSStringFromLockScreenPluginBackgroundStyle(2)
@"Dark"
cy# NSStringFromLockScreenPluginBackgroundStyle(3)
@"Legible"
cy# NSStringFromLockScreenPluginBackgroundStyle(4)
null
*/

/* rationale for NSInteger
@interface SBLockScreenPluginAppearanceContext : NSObject
@property (nonatomic, readonly) long long backgroundStyle;
@end
*/

typedef NS_ENUM(NSInteger, SBUILockScreenPluginBackgroundStyle) {
    SBUILockScreenPluginBackgroundStyleNone,
    SBUILockScreenPluginBackgroundStyleMediumDark,
    SBUILockScreenPluginBackgroundStyleDark,
    SBUILockScreenPluginBackgroundStyleLegible
};
