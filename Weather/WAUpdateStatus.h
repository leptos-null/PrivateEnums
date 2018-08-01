#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import Weather
cy# extern "C" NSString *NSStringFromWAUpdateStatus(NSUInteger)
(extern "C" NSString *NSStringFromWAUpdateStatus(unsigned long))
cy# NSStringFromWAUpdateStatus(0)
@"WAUpdateStatusSuccess"
cy# NSStringFromWAUpdateStatus(1)
@"WAUpdateStatusFailed"
cy# NSStringFromWAUpdateStatus(2)
@"WAUpdateStatusCancelled"
cy# NSStringFromWAUpdateStatus(3)
@"(Unknown WAUpdateStatus)"
*/

/* rationale for NSUInteger
@interface City : NSObject
@property (assign, nonatomic) unsigned long long lastUpdateStatus;
@end
*/

typedef NS_ENUM(NSUInteger, WAUpdateStatus) {
    WAUpdateStatusSuccess,
    WAUpdateStatusFailed,
    WAUpdateStatusCancelled
};
