#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import HealthDaemon
cy# extern "C" NSString  *NSStringFromHDDemoDataProfileType(NSInteger)
(extern "C" NSString *NSStringFromHDDemoDataProfileType(long))
cy# NSStringFromHDDemoDataProfileType(0)
@"Not Set"
cy# NSStringFromHDDemoDataProfileType(1)
@"Normal"
cy# NSStringFromHDDemoDataProfileType(2)
null
*/

/* rationale for NSInteger
@interface HDDemoData : NSObject
- (instancetype)initWithProfileType:(long long)profileType;
@end
*/

typedef NS_ENUM(NSInteger, HDDemoDataProfileType) {
    HDDemoDataProfileTypeNotSet,
    HDDemoDataProfileTypeNormal
};
