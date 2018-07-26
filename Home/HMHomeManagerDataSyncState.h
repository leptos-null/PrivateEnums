#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import Home
cy# extern "C" NSString *NSStringFromHMHomeManagerDataSyncState(NSUInteger)
(extern "C" NSString *NSStringFromHMHomeManagerDataSyncState(unsigned long))
cy# NSStringFromHMHomeManagerDataSyncState(0)
@"Unknown"
cy# NSStringFromHMHomeManagerDataSyncState(1)
@"Good"
cy# NSStringFromHMHomeManagerDataSyncState(2)
@"KeychainNotEnabled"
cy# NSStringFromHMHomeManagerDataSyncState(3)
@"iCloudSwitchNotEnabled"
cy# NSStringFromHMHomeManagerDataSyncState(4)
@"WaitingForCloudData"
cy# NSStringFromHMHomeManagerDataSyncState(5)
@"RequiresConfigurationReset"
cy# NSStringFromHMHomeManagerDataSyncState(6)
Segmentation fault: 11
*/

/* rationale for NSUInteger
@interface HMHomeManager : NSObject
@property (assign, nonatomic) unsigned long long dataSyncState;
@end
*/

typedef NS_ENUM(NSUInteger, HMHomeManagerDataSyncState) {
    HMHomeManagerDataSyncStateUnknown,
    HMHomeManagerDataSyncStateGood,
    HMHomeManagerDataSyncStateKeychainNotEnabled,
    HMHomeManagerDataSyncStateiCloudSwitchNotEnabled,
    HMHomeManagerDataSyncStateWaitingForCloudData,
    HMHomeManagerDataSyncStateRequiresConfigurationReset
};
