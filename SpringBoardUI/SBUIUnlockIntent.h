#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import SpringBoardUI
cy# extern "C" NSString *NSStringFromUnlockIntent(NSUInteger)
(extern "C" NSString *NSStringFromUnlockIntent(unsigned long))
cy# NSStringFromUnlockIntent(0)
@"None"
cy# NSStringFromUnlockIntent(1)
@"Dismiss"
cy# NSStringFromUnlockIntent(2)
@"Authenticate"
cy# NSStringFromUnlockIntent(3)
@"Authenticate and Dismiss"
cy# NSStringFromUnlockIntent(4)
Segmentation fault: 11
*/

/* rationale for NSUInteger
The proof function is not called
from within the framework, and there
are not any suggestive method names. 
Psychology suggests that similarities
between NSUI and SBUI would convince 
a person to use NSUInteger as the type
*/

typedef NS_ENUM(NSUInteger, SBUIUnlockIntent) {
    SBUIUnlockIntentNone,
    SBUIUnlockIntentDismiss,
    SBUIUnlockIntentAuthenticate,
    SBUIUnlockIntentAuthenticateDismiss
};
