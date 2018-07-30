#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import PairedSync
cy# extern "C" NSString *NSStringFromPSYDeviceSyncState(NSUInteger)
(extern "C" NSString *NSStringFromPSYDeviceSyncState(unsigned long))
cy# NSStringFromPSYDeviceSyncState(0)
@"Not Paired"
cy# NSStringFromPSYDeviceSyncState(1)
@"Connected, Not Started"
cy# NSStringFromPSYDeviceSyncState(2)
@"In Progress"
cy# NSStringFromPSYDeviceSyncState(3)
@"Complete"
cy# NSStringFromPSYDeviceSyncState(4)
@"Unknown"
cy# NSStringFromPSYDeviceSyncState(5)
null
*/

/* rationale for NSUInteger
@interface PSYDeviceSyncStateEntry : NSObject
@property (assign, nonatomic) unsigned long long initialSyncState;
@end
*/

typedef NS_ENUM(NSUInteger, PSYDeviceSyncState) {
    PSYDeviceSyncStateNotPaired,
    PSYDeviceSyncStateConnectedNotStarted,
    PSYDeviceSyncStateInProgress,
    PSYDeviceSyncStateComplete,
    PSYDeviceSyncStateUnknown
};
