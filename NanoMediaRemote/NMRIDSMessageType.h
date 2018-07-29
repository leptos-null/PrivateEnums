#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import NanoMediaRemote
cy# extern "C" NSString *NSStringFromNMRIDSMessageType(uint16_t)
(extern "C" NSString *NSStringFromNMRIDSMessageType(unsigned short))
cy# NSStringFromNMRIDSMessageType(0)
@"NMRIDSMessageTypeUnknown"
cy# NSStringFromNMRIDSMessageType(1)
@"NMRIDSMessageTypeMediaRemoteCommandRequest"
cy# NSStringFromNMRIDSMessageType(2)
@"NMRIDSMessageTypeMediaRemoteGetState"
cy# NSStringFromNMRIDSMessageType(3)
@"NMRIDSMessageTypeMediaRemoteCommandResponse"
cy# NSStringFromNMRIDSMessageType(4)
@"NMRIDSMessageTypeMediaRemoteSetState"
cy# NSStringFromNMRIDSMessageType(5)
@"NMRIDSMessageTypeMediaRemoteGetArtwork"
cy# NSStringFromNMRIDSMessageType(6)
@"NMRIDSMessageTypeMediaRemoteSetArtwork"
cy# NSStringFromNMRIDSMessageType(7)
@"NMRIDSMessageType(7)"
cy# NSStringFromNMRIDSMessageType(8)
@"NMRIDSMessageTypeSetCloudAvailability"
cy# NSStringFromNMRIDSMessageType(9)
@"NMRIDSMessageTypeGetCloudAvailability"
cy# NSStringFromNMRIDSMessageType(10)
@"NMRIDSMessageTypeSetSpecializedQueueInfo"
cy# NSStringFromNMRIDSMessageType(11)
@"NMRIDSMessageTypeGetSpecializedQueueInfo"
cy# NSStringFromNMRIDSMessageType(12)
@"NMRIDSMessageType(12)"
*/

/* rationale for uint16_t
@interface _NMRIDSMessageHandler : NSObject
@property (assign, nonatomic) unsigned short messageType;
@end
*/

typedef NS_ENUM(uint16_t, NMRIDSMessageType) {
	NMRIDSMessageTypeUnknown,
	NMRIDSMessageTypeMediaRemoteCommandRequest,
	NMRIDSMessageTypeMediaRemoteGetState,
	NMRIDSMessageTypeMediaRemoteCommandResponse,
	NMRIDSMessageTypeMediaRemoteSetState,
	NMRIDSMessageTypeMediaRemoteGetArtwork,
	NMRIDSMessageTypeMediaRemoteSetArtwork,

	NMRIDSMessageTypeSetCloudAvailability = 8,
	NMRIDSMessageTypeGetCloudAvailability,
	NMRIDSMessageTypeSetSpecializedQueueInfo,
	NMRIDSMessageTypeGetSpecializedQueueInfo
};
