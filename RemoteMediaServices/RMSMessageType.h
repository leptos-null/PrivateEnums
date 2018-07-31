#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import RemoteMediaServices
cy# extern "C" NSString *NSStringFromRMSMessageType(uint16_t)
(extern "C" NSString *NSStringFromRMSMessageType(unsigned short))
cy# NSStringFromRMSMessageType(0)
Segmentation fault: 11
...
cy# NSStringFromRMSMessageType(1)
@"RMSMessageTypeBeginDiscovery"
cy# NSStringFromRMSMessageType(2)
@"RMSMessageTypeBeginDiscoveryResponse"
cy# NSStringFromRMSMessageType(3)
@"RMSMessageTypeEndDiscovery"
cy# NSStringFromRMSMessageType(4)
@"RMSMessageTypeAvailableServicesDidUpdate"
cy# NSStringFromRMSMessageType(5)
@"RMSMessageTypeConnectToService"
cy# NSStringFromRMSMessageType(6)
@"RMSMessageTypeConnectToServiceResponse"
cy# NSStringFromRMSMessageType(7)
@"RMSMessageTypeLogout"
cy# NSStringFromRMSMessageType(8)
@"RMSMessageTypePlaybackCommand"
cy# NSStringFromRMSMessageType(9)
@"RMSMessageTypeBeginObservingNowPlaying"
cy# NSStringFromRMSMessageType(10)
@"RMSMessageTypeBeginObservingNowPlayingResponse"
cy# NSStringFromRMSMessageType(11)
@"RMSMessageTypeEndObservingNowPlaying"
cy# NSStringFromRMSMessageType(12)
@"RMSMessageTypeNowPlayingInfoDidUpdate"
cy# NSStringFromRMSMessageType(13)
@"RMSMessageTypeNowPlayingArtworkAvailable"
cy# NSStringFromRMSMessageType(14)
@"RMSMessageTypeAudioRoutesDidUpdate"
cy# NSStringFromRMSMessageType(15)
@"RMSMessageTypeVolumeDidUpdate"
cy# NSStringFromRMSMessageType(16)
@"RMSMessageTypeSessionHeartbeat"
cy# NSStringFromRMSMessageType(17)
@"RMSMessageTypeSessionHeartbeatResponse"
cy# NSStringFromRMSMessageType(18)
@"RMSMessageTypePickAudioRoute"
cy# NSStringFromRMSMessageType(19)
@"RMSMessageTypePickAudioRouteResponse"
cy# NSStringFromRMSMessageType(20)
@"RMSMessageTypeSetVolume"
cy# NSStringFromRMSMessageType(21)
@"RMSMessageTypeTouchMove"
cy# NSStringFromRMSMessageType(22)
@"RMSMessageTypeTouchEnd"
cy# NSStringFromRMSMessageType(23)
@"RMSMessageTypeNavigationCommand"
cy# NSStringFromRMSMessageType(24)
@"RMSMessageTypeNowPlayingArtworkData"
cy# NSStringFromRMSMessageType(25)
@"RMSMessageTypeNowPlayingArtworkDataResponse"
cy# NSStringFromRMSMessageType(26)
@"RMSMessageTypeBeginPairing"
cy# NSStringFromRMSMessageType(27)
@"RMSMessageTypeBeginPairingResponse"
cy# NSStringFromRMSMessageType(28)
@"RMSMessageTypeEndPairing"
cy# NSStringFromRMSMessageType(29)
@"RMSMessageTypePairingDidSucceed"
cy# NSStringFromRMSMessageType(30)
@"RMSMessageTypePairingDidFail"
cy# NSStringFromRMSMessageType(31)
@"RMSMessageTypeSetLikeState"
cy# NSStringFromRMSMessageType(32)
@"RMSMessageTypeSetLikeStateResponse"
cy# NSStringFromRMSMessageType(33)
@"RMSMessageTypeAddToWishlist"
cy# NSStringFromRMSMessageType(34)
@"RMSMessageTypeAddToWishlistResponse"
cy# NSStringFromRMSMessageType(35)
@"RMSMessageTypeSeekToPlaybackTime"
cy# NSStringFromRMSMessageType(36)
@"RMSMessageTypeSeekToPlaybackTimeResponse"
cy# NSStringFromRMSMessageType(37)
@"RMSMessageTypeSessionDidEnd"
cy# NSStringFromRMSMessageType(38)
@"RMSMessageTypeWifiAvailabilityDidChange"
cy# NSStringFromRMSMessageType(39)
@"RMSMessageTypeUpdatePairedNetworkNames"
cy# NSStringFromRMSMessageType(40)
Segmentation fault: 11
*/

/* rationale for uint16_t
@interface _RMSMessageRecord : NSObject
@property (assign, nonatomic) unsigned short messageType;
@end
*/

typedef NS_ENUM(uint16_t, RMSMessageType) {
    RMSMessageTypeBeginDiscovery = 1,
    RMSMessageTypeBeginDiscoveryResponse,
    RMSMessageTypeEndDiscovery,
    RMSMessageTypeAvailableServicesDidUpdate,
    RMSMessageTypeConnectToService,
    RMSMessageTypeConnectToServiceResponse,
    RMSMessageTypeLogout,
    RMSMessageTypePlaybackCommand,
    RMSMessageTypeBeginObservingNowPlaying,
    RMSMessageTypeBeginObservingNowPlayingResponse,
    RMSMessageTypeEndObservingNowPlaying,
    RMSMessageTypeNowPlayingInfoDidUpdate,
    RMSMessageTypeNowPlayingArtworkAvailable,
    RMSMessageTypeAudioRoutesDidUpdate,
    RMSMessageTypeVolumeDidUpdate,
    RMSMessageTypeSessionHeartbeat,
    RMSMessageTypeSessionHeartbeatResponse,
    RMSMessageTypePickAudioRoute,
    RMSMessageTypePickAudioRouteResponse,
    RMSMessageTypeSetVolume,
    RMSMessageTypeTouchMove,
    RMSMessageTypeTouchEnd,
    RMSMessageTypeNavigationCommand,
    RMSMessageTypeNowPlayingArtworkData,
    RMSMessageTypeNowPlayingArtworkDataResponse,
    RMSMessageTypeBeginPairing,
    RMSMessageTypeBeginPairingResponse,
    RMSMessageTypeEndPairing,
    RMSMessageTypePairingDidSucceed,
    RMSMessageTypePairingDidFail,
    RMSMessageTypeSetLikeState,
    RMSMessageTypeSetLikeStateResponse,
    RMSMessageTypeAddToWishlist,
    RMSMessageTypeAddToWishlistResponse,
    RMSMessageTypeSeekToPlaybackTime,
    RMSMessageTypeSeekToPlaybackTimeResponse,
    RMSMessageTypeSessionDidEnd,
    RMSMessageTypeWifiAvailabilityDidChange,
    RMSMessageTypeUpdatePairedNetworkNames
};
