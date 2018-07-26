#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import Home
cy# extern "C" NSString *NSStringFromHFRemoteAccessState(NSUInteger)
(extern "C" NSString *NSStringFromHFRemoteAccessState(unsigned long))
cy# NSStringFromHFRemoteAccessState(0)
@"NotSet"
cy# NSStringFromHFRemoteAccessState(1)
@"NotCapable"
cy# NSStringFromHFRemoteAccessState(2)
@"Capable"
cy# NSStringFromHFRemoteAccessState(3)
@"Available"
cy# NSStringFromHFRemoteAccessState(4)
Segmentation fault: 11
*/

/* rationale for NSUInteger
@interface HMHome : NSObject
- (void)home:(id)home remoteAccessStateDidChange:(unsigned long long)accessState;
@end
*/

typedef NS_ENUM(NSUInteger, HFRemoteAccessState) {
    HFRemoteAccessStateNotSet,
    HFRemoteAccessStateNotCapable,
    HFRemoteAccessStateCapable,
    HFRemoteAccessStateAvailable
};
