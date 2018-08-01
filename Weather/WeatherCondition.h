#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import Weather
cy# extern "C" NSString *NSStringFromWeatherConditionCode(NSInteger)
(extern "C" NSString *NSStringFromWeatherConditionCode(long))
cy# NSStringFromWeatherConditionCode(0)
@"WeatherConditionTornado"
cy# NSStringFromWeatherConditionCode(1)
@"WeatherConditionTropicalStorm"
cy# NSStringFromWeatherConditionCode(2)
@"WeatherConditionHurricane"
cy# NSStringFromWeatherConditionCode(3)
@"WeatherConditionSevereThunderstorm"
cy# NSStringFromWeatherConditionCode(4)
@"WeatherConditionThunderstorm"
cy# NSStringFromWeatherConditionCode(5)
@"WeatherConditionMixedRainAndSnow"
cy# NSStringFromWeatherConditionCode(6)
@"WeatherConditionMixedRainAndSleet"
cy# NSStringFromWeatherConditionCode(7)
@"WeatherConditionMixedSnowAndSleet"
cy# NSStringFromWeatherConditionCode(8)
@"WeatherConditionFreezingDrizzle"
cy# NSStringFromWeatherConditionCode(9)
@"WeatherConditionDrizzle"
cy# NSStringFromWeatherConditionCode(10)
@"WeatherConditionFreezingRain"
cy# NSStringFromWeatherConditionCode(11)
@"WeatherConditionShowers1"
cy# NSStringFromWeatherConditionCode(12)
@"WeatherConditionRain"
cy# NSStringFromWeatherConditionCode(13)
@"WeatherConditionSnowFlurries"
cy# NSStringFromWeatherConditionCode(14)
@"WeatherConditionSnowShowers"
cy# NSStringFromWeatherConditionCode(15)
@"WeatherConditionBlowingSnow"
cy# NSStringFromWeatherConditionCode(16)
@"WeatherConditionSnow"
cy# NSStringFromWeatherConditionCode(17)
@"WeatherConditionHail"
cy# NSStringFromWeatherConditionCode(18)
@"WeatherConditionSleet"
cy# NSStringFromWeatherConditionCode(19)
@"WeatherConditionDust"
cy# NSStringFromWeatherConditionCode(20)
@"WeatherConditionFog"
cy# NSStringFromWeatherConditionCode(21)
@"WeatherConditionHaze"
cy# NSStringFromWeatherConditionCode(22)
@"WeatherConditionSmoky"
cy# NSStringFromWeatherConditionCode(23)
@"WeatherConditionBreezy"
cy# NSStringFromWeatherConditionCode(24)
@"WeatherConditionWindy"
cy# NSStringFromWeatherConditionCode(25)
@"WeatherConditionFrigid"
cy# NSStringFromWeatherConditionCode(26)
@"WeatherConditionCloudy"
cy# NSStringFromWeatherConditionCode(27)
@"WeatherConditionMostlyCloudyNight"
cy# NSStringFromWeatherConditionCode(28)
@"WeatherConditionMostlyCloudyDay"
cy# NSStringFromWeatherConditionCode(29)
@"WeatherConditionPartlyCloudyNight"
cy# NSStringFromWeatherConditionCode(30)
@"WeatherConditionPartlyCloudyDay"
cy# NSStringFromWeatherConditionCode(31)
@"WeatherConditionClearNight"
cy# NSStringFromWeatherConditionCode(32)
@"WeatherConditionSunny"
cy# NSStringFromWeatherConditionCode(33)
@"WeatherConditionMostlySunnyNight"
cy# NSStringFromWeatherConditionCode(34)
@"WeatherConditionMostlySunnyDay"
cy# NSStringFromWeatherConditionCode(35)
@"WeatherConditionMixedRainFall"
cy# NSStringFromWeatherConditionCode(36)
@"WeatherConditionHot"
cy# NSStringFromWeatherConditionCode(37)
@"WeatherConditionIsolatedThunderstorms"
cy# NSStringFromWeatherConditionCode(38)
@"WeatherConditionScatteredThunderstorms"
cy# NSStringFromWeatherConditionCode(39)
@"WeatherConditionScatteredShowers"
cy# NSStringFromWeatherConditionCode(40)
@"WeatherConditionHeavyRain"
cy# NSStringFromWeatherConditionCode(41)
@"WeatherConditionScatteredSnowShowers"
cy# NSStringFromWeatherConditionCode(42)
@"WeatherConditionHeavySnow"
cy# NSStringFromWeatherConditionCode(43)
@"WeatherConditionBlizzard"
cy# NSStringFromWeatherConditionCode(44)
@"NotAvailable"
*/

/* rationale for NSInteger
@interface City : NSObject
@property (assign, nonatomic) long long conditionCode;
@end
*/

typedef NS_ENUM(NSInteger, WeatherCondition) {
    WeatherConditionTornado,
    WeatherConditionTropicalStorm,
    WeatherConditionHurricane,
    WeatherConditionSevereThunderstorm,
    WeatherConditionThunderstorm,
    WeatherConditionMixedRainAndSnow,
    WeatherConditionMixedRainAndSleet,
    WeatherConditionMixedSnowAndSleet,
    WeatherConditionFreezingDrizzle,
    WeatherConditionDrizzle,
    WeatherConditionFreezingRain,
    WeatherConditionShowers,
    WeatherConditionRain,
    WeatherConditionSnowFlurries,
    WeatherConditionSnowShowers,
    WeatherConditionBlowingSnow,
    WeatherConditionSnow,
    WeatherConditionHail,
    WeatherConditionSleet,
    WeatherConditionDust,
    WeatherConditionFog,
    WeatherConditionHaze,
    WeatherConditionSmoky,
    WeatherConditionBreezy,
    WeatherConditionWindy,
    WeatherConditionFrigid,
    WeatherConditionCloudy,
    WeatherConditionMostlyCloudyNight,
    WeatherConditionMostlyCloudyDay,
    WeatherConditionPartlyCloudyNight,
    WeatherConditionPartlyCloudyDay,
    WeatherConditionClearNight,
    WeatherConditionSunny,
    WeatherConditionMostlySunnyNight,
    WeatherConditionMostlySunnyDay,
    WeatherConditionMixedRainFall,
    WeatherConditionHot,
    WeatherConditionIsolatedThunderstorms,
    WeatherConditionScatteredThunderstorms,
    WeatherConditionScatteredShowers,
    WeatherConditionHeavyRain,
    WeatherConditionScatteredSnowShowers,
    WeatherConditionHeavySnow,
    WeatherConditionBlizzard
};
