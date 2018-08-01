#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import ToneLibrary
cy# extern "C" NSString *NSStringFromTLAlertPlaybackCompletionType(NSInteger)
(extern "C" NSString *NSStringFromTLAlertPlaybackCompletionType(long))
cy# NSStringFromTLAlertPlaybackCompletionType(0)
@"playedToEnd"
cy# NSStringFromTLAlertPlaybackCompletionType(1)
@"reachedMaximumDuration"
cy# NSStringFromTLAlertPlaybackCompletionType(2)
@"stopped"
cy# NSStringFromTLAlertPlaybackCompletionType(3)
@"userInterruption"
cy# NSStringFromTLAlertPlaybackCompletionType(4)
@"systemInterruption"
cy# NSStringFromTLAlertPlaybackCompletionType(5)
@"failed"
cy# NSStringFromTLAlertPlaybackCompletionType(6)
@"????"
*/

/* rationale for NSInteger
@interface TLAlertSystemSoundContext : NSObject
@property (assign, nonatomic) long long playbackCompletionType;
@end
*/

typedef NS_ENUM(NSInteger, TLAlertPlaybackCompletionType) {
    TLAlertPlaybackCompletionTypePlayToEnd,
    TLAlertPlaybackCompletionTypeReachedMaximumDuration,
    TLAlertPlaybackCompletionTypeStopped,
    TLAlertPlaybackCompletionTypeUserInterruption,
    TLAlertPlaybackCompletionTypeSystemInterruption,
    TLAlertPlaybackCompletionTypeFailed
};
