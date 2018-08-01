#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import Weather
cy# extern "C" NSString *NSStringFromWAWeatherDataAge(NSUInteger)
(extern "C" NSString *NSStringFromWAWeatherDataAge(unsigned long))
cy# NSStringFromWAWeatherDataAge(0)
@"WAWeatherDataAgeCurrent"
cy# NSStringFromWAWeatherDataAge(1)
@"WAWeatherDataAgeFromToday"
cy# NSStringFromWAWeatherDataAge(2)
@"WAWeatherDataAgeOutdated"
cy# NSStringFromWAWeatherDataAge(3)
@"(Unknown WAWeatherDataAge)"
*/

/* rationale for NSUInteger
@interface City : NSObject
- (unsigned long long)weatherDataAge;
@end
*/

typedef NS_ENUM(NSUInteger, WAWeatherDataAge) {
    WAWeatherDataAgeCurrent,
    WAWeatherDataAgeFromToday,
    WAWeatherDataAgeOutdated
};
