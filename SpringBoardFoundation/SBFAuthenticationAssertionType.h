#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import SpringBoardFoundation
cy# extern "C" NSString *NSStringFromSBFAuthenticationAssertionType(NSInteger)
(extern "C" NSString *NSStringFromSBFAuthenticationAssertionType(long))
cy# NSStringFromSBFAuthenticationAssertionType(0)
@"SustainAuthentication"
cy# NSStringFromSBFAuthenticationAssertionType(1)
@"SustainGracePeriod"
cy# NSStringFromSBFAuthenticationAssertionType(2)
null
*/

/* rationale for NSInteger
@interface SBFAuthenticationAssertion : NSObject
@property (nonatomic, readonly) long long type;
@end
*/

typedef NS_ENUM(NSInteger, SBFAuthenticationAssertionType) {
    SBFAuthenticationAssertionTypeSustainAuthentication,
    SBFAuthenticationAssertionTypeSustainGracePeriod
};
