#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import SpringBoardFoundation
cy# extern "C" NSString *NSStringFromSBFAuthenticationState(NSInteger)
(extern "C" NSString *NSStringFromSBFAuthenticationState(long))
cy# NSStringFromSBFAuthenticationState(0)
@"Revoked"
cy# NSStringFromSBFAuthenticationState(1)
@"Authenticated"
cy# NSStringFromSBFAuthenticationState(2)
@"Revoking"
cy# NSStringFromSBFAuthenticationState(3)
null
*/

/* rationale for NSInteger
@interface SBFUserAuthenticationController : NSObject
@property (assign, setter=_setAuthenticationState:, getter=_authenticationState, nonatomic) long long authenticationState;
@end
*/

typedef NS_ENUM(NSInteger, SBFAuthenticationState) {
    SBFAuthenticationStateRevoked,
    SBFAuthenticationStateAuthenticated,
    SBFAuthenticationStateRevoking
};
