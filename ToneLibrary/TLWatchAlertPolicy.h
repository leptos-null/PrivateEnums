#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import ToneLibrary
cy# extern "C" NSString *NSStringFromTLWatchAlertPolicy(NSInteger)
(extern "C" NSString *NSStringFromTLWatchAlertPolicy(long))
cy# NSStringFromTLWatchAlertPolicy(0)
@"mirror-companion"
cy# NSStringFromTLWatchAlertPolicy(1)
@"always-enabled"
cy# NSStringFromTLWatchAlertPolicy(2)
@"always-disabled"
cy# NSStringFromTLWatchAlertPolicy(3)
@"independent-inferred-from-companion"
cy# NSStringFromTLWatchAlertPolicy(4)
@"????"
*/

/* rationale for NSInteger
@interface TLToneManager : NSObject
- (void)_setCurrentToneWatchAlertPolicy:(long long)alertPolicy forAlertType:(long long)alertType;
@end
*/

typedef NS_ENUM(NSInteger, TLWatchAlertPolicy) {
    TLWatchAlertPolicyMirrorCompanion,
    TLWatchAlertPolicyAlwaysEnabled,
    TLWatchAlertPolicyAlwaysDisabled,
    TLWatchAlertPolicyIndependentInferredFromCompanion
};
