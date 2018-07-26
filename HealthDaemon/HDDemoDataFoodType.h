#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import HealthDaemon
cy# extern "C" NSString *NSStringFromHDDemoDataFoodType(NSInteger)
(extern "C" NSString *NSStringFromHDDemoDataFoodType(long))
cy# NSStringFromHDDemoDataFoodType(0)
null
cy# NSStringFromHDDemoDataFoodType(1)
@"Breakfast"
cy# NSStringFromHDDemoDataFoodType(2)
@"Lunch"
cy# NSStringFromHDDemoDataFoodType(3)
@"Snack"
cy# NSStringFromHDDemoDataFoodType(4)
@"Dinner"
cy# NSStringFromHDDemoDataFoodType(5)
@"Beverage"
cy# NSStringFromHDDemoDataFoodType(6)
@"Other"
cy# NSStringFromHDDemoDataFoodType(7)
null
*/

/* rationale for NSInteger
@interface HDDemoDataFoodObject : NSObject
@property (assign, nonatomic) long long foodType;
@end
*/

typedef NS_ENUM(NSInteger, HDDemoDataFoodType) {
    HDDemoDataFoodTypeBreakfast = 1,
    HDDemoDataFoodTypeLunch,
    HDDemoDataFoodTypeSnack,
    HDDemoDataFoodTypeDinner,
    HDDemoDataFoodTypeBeverage,
    HDDemoDataFoodTypeOther
};
