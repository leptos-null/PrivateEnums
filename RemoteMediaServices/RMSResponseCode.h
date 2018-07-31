#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import RemoteMediaServices
cy# extern "C" NSString *NSStringFromRMSResponseCode(int)
(extern "C" NSString *NSStringFromRMSResponseCode(int))
cy# NSStringFromRMSResponseCode(0)
@"RMSResponseCodeUnknown"
cy# NSStringFromRMSResponseCode(1)
@"RMSResponseCodeSuccess"
cy# NSStringFromRMSResponseCode(2)
Segmentation fault: 11
*/

/* rationale for int
@interface RMSConnectToServiceResponseMessage : PBCodable
@property (assign, nonatomic) int responseCode;
@end
*/

typedef NS_ENUM(int, RMSResponseCode) {
    RMSResponseCodeUnknown,
    RMSResponseCodeSuccess
};
