#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import Home
cy# extern "C" NSString *NSStringFromHMResidentDeviceStatus(NSUInteger)
(extern "C" NSString *NSStringFromHMResidentDeviceStatus(unsigned long))
cy# NSStringFromHMResidentDeviceStatus(0)
@"{}"
cy# NSStringFromHMResidentDeviceStatus(1)
@"{Available}"
cy# NSStringFromHMResidentDeviceStatus(2)
@"{Primary}"
cy# NSStringFromHMResidentDeviceStatus(3)
@"{Available,Primary}"
cy# NSStringFromHMResidentDeviceStatus(4)
@"{OnBattery}"
cy# NSStringFromHMResidentDeviceStatus(5)
@"{Available,OnBattery}"
cy# NSStringFromHMResidentDeviceStatus(6)
@"{Primary,OnBattery}"
cy# NSStringFromHMResidentDeviceStatus(7)
@"{Available,Primary,OnBattery}"
cy# NSStringFromHMResidentDeviceStatus(8)
@"{LowBattery}"
cy# NSStringFromHMResidentDeviceStatus(9)
@"{Available,LowBattery}"
cy# NSStringFromHMResidentDeviceStatus(10)
@"{Primary,LowBattery}"
cy# NSStringFromHMResidentDeviceStatus(11)
@"{Available,Primary,LowBattery}"
cy# NSStringFromHMResidentDeviceStatus(12)
@"{OnBattery,LowBattery}"
cy# NSStringFromHMResidentDeviceStatus(13)
@"{Available,OnBattery,LowBattery}"
cy# NSStringFromHMResidentDeviceStatus(14)
@"{Primary,OnBattery,LowBattery}"
cy# NSStringFromHMResidentDeviceStatus(15)
@"{Available,Primary,OnBattery,LowBattery}"
cy# NSStringFromHMResidentDeviceStatus(16)
@"{}"
*/

/* rationale for NSUInteger
@interface HFHomeKitDispatcher : NSObject
- (void)residentDevice:(id)device didUpdateStatus:(unsigned long long)status;
@end
*/

typedef NS_ENUM(NSUInteger, HMResidentDeviceStatus) {
    HMResidentDeviceStatusAvailable  = 1 << 0,
    HMResidentDeviceStatusPrimary    = 1 << 1,
    HMResidentDeviceStatusOnBattery  = 1 << 2,
    HMResidentDeviceStatusLowBattery = 1 << 3
};
