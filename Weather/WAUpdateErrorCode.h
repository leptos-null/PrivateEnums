#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import Weather
ccy# extern "C" NSString *NSStringFromWAUpdateErrorCode(NSInteger)
(extern "C" NSString *NSStringFromWAUpdateErrorCode(long))
cy# NSStringFromWAUpdateErrorCode(0)
@"WAUpdateErrorCodeUnknown"
cy# NSStringFromWAUpdateErrorCode(1)
@"WAUpdateErrorCodeTimedOut"
cy# NSStringFromWAUpdateErrorCode(2)
@"WAUpdateErrorCodeGeocodeFailed"
cy# NSStringFromWAUpdateErrorCode(3)
@"WAUpdateErrorCodeLocationServicesDisabled"
cy# NSStringFromWAUpdateErrorCode(4)
@"(Unknown WAUpdateErrorCode)"
cy# NSStringFromWAUpdateErrorCode(5)
@"WAUpdateErrorCodeInvalidCoordinatesForGeocode"
cy# NSStringFromWAUpdateErrorCode(6)
@"WAUpdateErrorCodeUpdateAlreadyInProgress"
cy# NSStringFromWAUpdateErrorCode(7)
@"WAUpdateErrorCodeUnderlyingForecastError"
cy# NSStringFromWAUpdateErrorCode(8)
@"(Unknown WAUpdateErrorCode)"
*/

/* rationale for NSInteger
@interface NSError : NSObject
@property (readonly) long long code; 
@end
*/

typedef NS_ENUM(NSInteger, WAUpdateErrorCode) {
    WAUpdateErrorCodeUnknown,
    WAUpdateErrorCodeTimedOut,
    WAUpdateErrorCodeGeocodeFailed,
    WAUpdateErrorCodeLocationServicesDisabled,
    /* case 4 skipped */
    WAUpdateErrorCodeInvalidCoordinatesForGeocode = 5,
    WAUpdateErrorCodeUpdateAlreadyInProgress,
    WAUpdateErrorCodeUnderlyingForecastError
};
