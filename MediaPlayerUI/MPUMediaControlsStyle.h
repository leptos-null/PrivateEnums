#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import MediaPlayerUI
cy# extern "C" NSString *NSStringFromMPUMediaControlsStyle(NSInteger)
(extern "C" NSString *NSStringFromMPUMediaControlsStyle(long))
cy# NSStringFromMPUMediaControlsStyle(0)
@"Default Controls"
cy# NSStringFromMPUMediaControlsStyle(1)
@"Control Center"
cy# NSStringFromMPUMediaControlsStyle(2)
@"Lock Screen"
cy# NSStringFromMPUMediaControlsStyle(3)
@"Unknown"
*/

/* rationale for NSInteger
@interface MPUMediaControlsTitlesView : MPUNowPlayingTitlesView
@property (nonatomic, readonly) long long mediaControlsStyle;
@end
*/

typedef NS_ENUM(NSInteger, MPUMediaControlsStyle) {
    MPUMediaControlsStyleDefaultControls,
    MPUMediaControlsStyleControlCenter,
    MPUMediaControlsStyleLockScreen
};
