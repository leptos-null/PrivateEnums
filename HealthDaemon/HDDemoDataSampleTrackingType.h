#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import HealthDaemon
cy# extern "C" NSString *NSStringFromHDDemoDataSampleTrackingType(NSInteger)
(extern "C" NSString *NSStringFromHDDemoDataSampleTrackingType(long))
cy# NSStringFromHDDemoDataSampleTrackingType(0)
@"Not Set"
cy# NSStringFromHDDemoDataSampleTrackingType(1)
@"Typical"
cy# NSStringFromHDDemoDataSampleTrackingType(2)
@"Inclusive"
cy# NSStringFromHDDemoDataSampleTrackingType(3)
null
*/

/* rationale for NSInteger
@interface HDDemoDataPerson : NSObject
@property (assign, nonatomic) long long resultsTrackingType;
@end
*/

typedef NS_ENUM(NSInteger, HDDemoDataSampleTrackingType) {
    HDDemoDataSampleTrackingTypeNotSet,
    HDDemoDataSampleTrackingTypeTypical,
    HDDemoDataSampleTrackingTypeInclusive
};
