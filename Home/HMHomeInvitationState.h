#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import Home
cy# extern "C" NSString *NSStringFromHMHomeInvitationState(NSInteger)
(extern "C" NSString *NSStringFromHMHomeInvitationState(long))
cy# NSStringFromHMHomeInvitationState(0)
Segmentation fault: 11
...
cy# NSStringFromHMHomeInvitationState(1)
@"Canceled"
cy# NSStringFromHMHomeInvitationState(2)
@"Pending"
cy# NSStringFromHMHomeInvitationState(3)
@"Accepted"
cy# NSStringFromHMHomeInvitationState(4)
@"Declined"
cy# NSStringFromHMHomeInvitationState(5)
@"Accepted&Pending"
cy# NSStringFromHMHomeInvitationState(6)
@"Expired"
cy# NSStringFromHMHomeInvitationState(7)
Segmentation fault: 11
*/

/* rationale for NUInteger
@interface HMHomeInvitation : NSObject
@property (nonatomic, readonly) long long invitationState;
@end
*/

typedef NS_ENUM(NUInteger, HMHomeInvitationState) {
    HMHomeInvitationStateCanceled = 1,
    HMHomeInvitationStatePending,
    HMHomeInvitationStateAccepted,
    HMHomeInvitationStateDeclined,
    HMHomeInvitationStateAcceptedAndPending,
    HMHomeInvitationStateExpired
};
