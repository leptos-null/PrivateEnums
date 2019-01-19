#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import HealthDaemon
cy# extern "C" NSString *NSStringFromHDDemoDataGenerationPeriod(NSInteger)
(extern "C" NSString *NSStringFromHDDemoDataGenerationPeriod(long))
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

/* rationale for NSInteger
The proof function is not called from 
within the framework, and there are 
no suggestive class or method names.
*/

typedef NS_ENUM(NSInteger, HDDemoDataGenerationPeriod) {
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
