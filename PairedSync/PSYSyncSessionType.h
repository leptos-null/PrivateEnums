#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import PairedSync
cy# extern "C" NSString *NSStringfromPSYSyncSessionType(NSUInteger)
(extern "C" NSString *NSStringfromPSYSyncSessionType(unsigned long))
cy# NSStringfromPSYSyncSessionType(0)
@"full"
cy# NSStringfromPSYSyncSessionType(1)
@"reunion"
cy# NSStringfromPSYSyncSessionType(2)
@""
*/

/* rationale for NSUInteger
@interface PSYServiceSyncSession : NSObject
@property (assign, nonatomic) unsigned long long syncSessionType;
@end
*/

typedef NS_ENUM(NSUInteger, PSYSyncSessionType) {
    PSYSyncSessionTypeFull,
    PSYSyncSessionTypeReunion
};
