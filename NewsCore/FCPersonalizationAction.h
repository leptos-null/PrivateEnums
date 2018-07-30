#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import NewsCore
cy# extern "C" NSString *NSStringFromFCPersonalizationAction(NSInteger)
(extern "C" NSString *NSStringFromFCPersonalizationAction(long))
cy# NSStringFromFCPersonalizationAction(0)
@"None"
cy# NSStringFromFCPersonalizationAction(1)
@"Presented"
cy# NSStringFromFCPersonalizationAction(2)
@"Tapped"
cy# NSStringFromFCPersonalizationAction(3)
@"Weak Clicked"
cy# NSStringFromFCPersonalizationAction(4)
@"Heavy Clicked"
cy# NSStringFromFCPersonalizationAction(5)
@"Liked"
cy# NSStringFromFCPersonalizationAction(6)
@"Disliked"
cy# NSStringFromFCPersonalizationAction(7)
@"Shared"
cy# NSStringFromFCPersonalizationAction(8)
@"Saved"
cy# NSStringFromFCPersonalizationAction(9)
@"Subscribed"
cy# NSStringFromFCPersonalizationAction(10)
@"Unsubscribed"
cy# NSStringFromFCPersonalizationAction(11)
@"Visited"
cy# NSStringFromFCPersonalizationAction(12)
@"Subscribe Related"
cy# NSStringFromFCPersonalizationAction(13)
@"Existing Subscription"
cy# NSStringFromFCPersonalizationAction(14)
@"Existing Subscription Related"
cy# NSStringFromFCPersonalizationAction(15)
@"Feed Recommendation Presentation"
cy# NSStringFromFCPersonalizationAction(16)
@"Explore Recommendation Presentation"
cy# NSStringFromFCPersonalizationAction(17)
@"Premium Subscription Activated"
cy# NSStringFromFCPersonalizationAction(18)
@"Count"
cy# NSStringFromFCPersonalizationAction(19)
Segmentation fault: 11
*/

/* rationale for NSInteger
None. The proof function doesn't appeared to
be called from within the framework itself.
NSInteger seemed resonable as a default value
*/

typedef NS_ENUM(NSInteger, FCPersonalizationAction) {
	FCPersonalizationActionNone,
    FCPersonalizationActionPresented,
    FCPersonalizationActionTapped,
    FCPersonalizationActionWeakClicked,
    FCPersonalizationActionHeavyClicked,
    FCPersonalizationActionLiked,
    FCPersonalizationActionDisliked,
    FCPersonalizationActionShared,
    FCPersonalizationActionSaved,
    FCPersonalizationActionSubscribed,
    FCPersonalizationActionUnsubscribed,
    FCPersonalizationActionVisited,
    FCPersonalizationActionSubscribeRelated,
    FCPersonalizationActionExistingSubscription,
    FCPersonalizationActionExisitingRelatedSubscription,
    FCPersonalizationActionFeedRecommendationPresentation,
    FCPersonalizationActionPremiumSubscriptionActivated,
    FCPersonalizationActionCount
};
