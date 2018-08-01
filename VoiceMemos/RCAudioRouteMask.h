#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import VoiceMemos
cy# extern "C" NSString *NSStringFromRCAudioRouteMask(NSUInteger)
(extern "C" NSString *NSStringFromRCAudioRouteMask(unsigned long))
cy# NSStringFromRCAudioRouteMask(0)
@"*** Invalid ***"
cy# NSStringFromRCAudioRouteMask(1 << 0)
@"(mask:1 = Handset)"
cy# NSStringFromRCAudioRouteMask(1 << 1)
@"(mask:2 = Speaker)"
cy# NSStringFromRCAudioRouteMask(1 << 2)
@"(mask:4 = Wireless)"
cy# NSStringFromRCAudioRouteMask(1 << 3)
@"(mask:8 = Other)"
cy# NSStringFromRCAudioRouteMask(1 << 4)
@"*** Invalid ***"
*/

/* rationale for NSUInteger
@interface RCAudioSessionRoutingController : NSObject
@property (nonatomic, readonly) unsigned long long availableRoutesMask;
@end
*/

typedef NS_OPTIONS(NSUInteger, RCAudioRouteMask) {
    RCAudioRouteMaskHandset  = 1 << 0,
    RCAudioRouteMaskSpeaker  = 1 << 1,
    RCAudioRouteMaskWireless = 1 << 2,
    RCAudioRouteMaskOther    = 1 << 3
};
