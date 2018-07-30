#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import NewsCore
cy# extern "C" NSString *NSStringFromFCOnboardingVersionNumber(NSInteger)
(extern "C" NSString *NSStringFromFCOnboardingVersionNumber(long))
cy# NSStringFromFCOnboardingVersionNumber(0)
@"New User"
cy# NSStringFromFCOnboardingVersionNumber(1)
@"Onboarded Monarch"
cy# NSStringFromFCOnboardingVersionNumber(2)
@"Onboarded Whitetail"
cy# NSStringFromFCOnboardingVersionNumber(3)
@"Corry Default For You"
cy# NSStringFromFCOnboardingVersionNumber(4)
@"Onboarded Corry"
cy# NSStringFromFCOnboardingVersionNumber(5)
Segmentation fault: 11
*/

/* rationale for NSInteger
NSNumber is passed around, due to
being used in and from NSDictionaries.
The proof function is called with -integerValue
*/

typedef NS_ENUM(NSInteger, FCOnboardingVersionNumber) {
	FCOnboardingVersionNumberNewUser,
    FCOnboardingVersionNumberOnboardedMonarch,
    FCOnboardingVersionNumberOnboardedWhitetail,
    FCOnboardingVersionNumberCorryDefaultForYou,
    FCOnboardingVersionNumberOnboardedCorry
};
