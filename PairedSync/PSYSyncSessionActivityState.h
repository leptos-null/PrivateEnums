#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import PairedSync
cy# extern "C" NSString *NSStringFromPSYSyncSessionActivityState(NSUInteger)
(extern "C" NSString *NSStringFromPSYSyncSessionActivityState(unsigned long))
cy# NSStringFromPSYSyncSessionActivityState(0)
@"not started"
cy# NSStringFromPSYSyncSessionActivityState(1)
@"running"
cy# NSStringFromPSYSyncSessionActivityState(2)
@"completed"
cy# NSStringFromPSYSyncSessionActivityState(3)
@""
*/

/* rationale for NSUInteger
@interface PSYSyncSessionActivity : NSObject
@property (nonatomic, readonly) unsigned long long activityState;
@end
*/

typedef NS_ENUM(NSUInteger, PSYSyncSessionActivityState) {
    PSYSyncSessionActivityStateNotStarted,
    PSYSyncSessionActivityStateRunning,
    PSYSyncSessionActivityStateCompleted
};
