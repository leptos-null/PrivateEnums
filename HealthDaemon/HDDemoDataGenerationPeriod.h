#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import HealthDaemon
cy# extern "C" NSString *NSStringFromHDDemoDataGenerationPeriod(int)
(extern "C" NSString *NSStringFromHDDemoDataGenerationPeriod(int))
cy# NSStringFromHDDemoDataGenerationPeriod(0)
@"Not Set"
cy# NSStringFromHDDemoDataGenerationPeriod(1)
@"1 Day"
cy# NSStringFromHDDemoDataGenerationPeriod(7)
@"1 Week"
cy# NSStringFromHDDemoDataGenerationPeriod(30)
@"1 Month"
cy# NSStringFromHDDemoDataGenerationPeriod(60)
@"2 Months"
cy# NSStringFromHDDemoDataGenerationPeriod(90)
@"3 Months"
cy# NSStringFromHDDemoDataGenerationPeriod(180)
@"6 Months"
cy# NSStringFromHDDemoDataGenerationPeriod(365)
@"1 Year"
cy# NSStringFromHDDemoDataGenerationPeriod(3000)
@"Year to Date"
*/

/* rationale for int
It's the C default. I couldn't figure out where
this was used anywhere in the framework. It might
be in the actual daemon that uses this framework.
*/

typedef NS_ENUM(int, HDDemoDataGenerationPeriod) {
    HDDemoDataGenerationPeriodNotSet      = 0,
    HDDemoDataGenerationPeriodOneDay      = 1,
    HDDemoDataGenerationPeriodOneWeek     = 7,
    HDDemoDataGenerationPeriodOneMonth    = 30,
    HDDemoDataGenerationPeriodTwoMonths   = 60,
    HDDemoDataGenerationPeriodThreeMonths = 90,
    HDDemoDataGenerationPeriodSixMonths   = 180,
    HDDemoDataGenerationPeriodOneYear     = 365,
    HDDemoDataGenerationPeriodYearToDate  = 3000
};
