#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import WeatherFoundation
cy# extern "C" NSString *NSStringFromWFTemperatureUnit(int)
(extern "C" NSString *NSStringFromWFTemperatureUnit(int))
cy# NSStringFromWFTemperatureUnit(0)
null
cy# NSStringFromWFTemperatureUnit(1)
@"WFTemperatureUnitFahrenheit"
cy# NSStringFromWFTemperatureUnit(2)
@"WFTemperatureUnitCelsius"
cy# NSStringFromWFTemperatureUnit(3)
@"WFTemperatureUnitKelvin"
cy# NSStringFromWFTemperatureUnit(4)
null
*/

/* rationale for int
@protocol WFTemperatureUnitObserver <NSObject>
- (void)temperatureUnitObserver:(id)observer didChangeTemperatureUnitTo:(int)unit;
@end
*/

typedef NS_ENUM(NSUInteger, WFTemperatureUnit) {
    WFTemperatureUnitFahrenheit = 1,
    WFTemperatureUnitCelsius,
    WFTemperatureUnitKelvin
};
