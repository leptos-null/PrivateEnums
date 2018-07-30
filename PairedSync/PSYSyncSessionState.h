#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import PairedSync
cy# extern "C" NSString *NSStringFromPSYSyncSessionState(NSUInteger)
(extern "C" NSString *NSStringFromPSYSyncSessionState(unsigned long))
cy# NSStringFromPSYSyncSessionState(0)
@"not started"
cy# NSStringFromPSYSyncSessionState(1)
@"running"
cy# NSStringFromPSYSyncSessionState(2)
@"completed"
cy# NSStringFromPSYSyncSessionState(3)
@""
*/

/* rationale for NSUInteger
@interface PSYSyncSession : NSObject
@property (assign, nonatomic) unsigned long long syncSessionState;
@end
*/

typedef NS_ENUM(NSUInteger, PSYSyncSessionState) {
    PSYSyncSessionStateNotStarted,
    PSYSyncSessionStateRunning,
    PSYSyncSessionStateCompleted
};
