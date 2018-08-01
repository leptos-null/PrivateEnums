#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import Weather
cy# extern "C" NSString *NSStringFromWAWeatherPressureState(NSInteger)
(extern "C" NSString *NSStringFromWAWeatherPressureState(long))
cy# NSStringFromWAWeatherPressureState(0)
@"WAWeatherPressureStateSteady"
cy# NSStringFromWAWeatherPressureState(1)
@"WAWeatherPressureStateRising"
cy# NSStringFromWAWeatherPressureState(2)
@"WAWeatherPressureStateFalling"
cy# NSStringFromWAWeatherPressureState(3)
@"(Unknown WAWeatherPressureState)"
*/

/* rationale for NSInteger
The proof function is not called from 
within the framework, and there are 
no suggestive class or method names.
*/

typedef NS_ENUM(NSInteger, WAWeatherPressureState) {
    WAWeatherPressureStateSteady,
    WAWeatherPressureStateRising,
    WAWeatherPressureStateFalling
};
