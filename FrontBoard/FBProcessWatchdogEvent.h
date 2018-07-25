#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import FrontBoard
cy# extern "C" NSString *NSStringFromProcessWatchdogEvent(NSInteger)
(extern "C" NSString *NSStringFromProcessWatchdogEvent(long))
cy# NSStringFromProcessWatchdogEvent(0)
@"none"
cy# NSStringFromProcessWatchdogEvent(1)
@"process-launch"
cy# NSStringFromProcessWatchdogEvent(2)
@"scene-create"
cy# NSStringFromProcessWatchdogEvent(3)
@"scene-update"
cy# NSStringFromProcessWatchdogEvent(4)
@"process-exit"
cy# NSStringFromProcessWatchdogEvent(5)
@"(invalid - 5)"
*/

/* rationale for NSInteger
@interface FBProcessWatchdog : FBSProcessWatchdog
@property (nonatomic, readonly) long long event;
@end
*/

typedef NS_ENUM(NSInteger, FBProcessWatchdogEvent) {
    FBProcessWatchdogEventNone,
    FBProcessWatchdogEventProcessLaunch,
    FBProcessWatchdogEventSceneCreate,
    FBProcessWatchdogEventSceneUpdate,
    FBProcessWatchdogEventProcessExit
};
