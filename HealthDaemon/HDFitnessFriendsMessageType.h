#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import HealthDaemon
cy# extern "C" NSString *NSStringFromFitnessFriendsMessageType(int)
(extern "C" NSString *NSStringFromFitnessFriendsMessageType(int))
cy# NSStringFromFitnessFriendsMessageType(0)
Segmentation fault: 11
...
cy# NSStringFromFitnessFriendsMessageType(1)
@"HDFitnessFriendsMessageTypeInviteRequest"
cy# NSStringFromFitnessFriendsMessageType(2)
@"HDFitnessFriendsMessageTypeInviteResponse"
cy# NSStringFromFitnessFriendsMessageType(3)
@"HDFitnessFriendsMessageTypeFinalizeHandshake"
cy# NSStringFromFitnessFriendsMessageType(4)
@"HDFitnessFriendsMessageTypeWithdrawInviteRequest"
cy# NSStringFromFitnessFriendsMessageType(5)
Segmentation fault: 11
*/

/* rationale for int
@interface HDFitnessFriendsMessage : NSObject
@property (assign, nonatomic) int type;
@end
*/

typedef NS_ENUM(int, HDFitnessFriendsMessageType) {
    HDFitnessFriendsMessageTypeInviteRequest = 1,
    HDFitnessFriendsMessageTypeInviteResponse,
    HDFitnessFriendsMessageTypeFinalizeHandshake,
    HDFitnessFriendsMessageTypeWithdrawInviteRequest
};
