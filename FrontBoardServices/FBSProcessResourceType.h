#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import FrontBoardServices
cy# extern "C" NSString *NSStringFromProcessResourceType(NSInteger)
(extern "C" NSString *NSStringFromProcessResourceType(long))
cy# NSStringFromProcessResourceType(0)
@"(unspecified)"
cy# NSStringFromProcessResourceType(1)
@"realTime"
cy# NSStringFromProcessResourceType(2)
@"scheduledTime"
cy# NSStringFromProcessResourceType(3)
@"(unknown)"
*/

/* rationale for NSInteger
@interface FBSProcessResourceProvision : FBSProcessExecutionProvision
+ (id)provisionWithResourceType:(long long)resourceType timeInterval:(double)timeInterval;
@end
*/

typedef NS_ENUM(NSInteger, FBSProcessResourceType) {
    FBSProcessResourceTypeUnspecified,
    FBSProcessResourceTypeRealTime,
    FBSProcessResourceTypeScheduledTime
};
